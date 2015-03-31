#!/usr/bin/ruby

require "pp"
require "parslet"
require "thread"
require "json"

Thread.abort_on_exception = true

END {
    `mkdir -p tmp`
    `mkdir -p include`
    `mkdir -p src`

    java = JavaSpace.new
    #Library.new(java, "bolts-android-1.2.0.jar")
    Library.new(java, "android-api15.jar")
    #Library.new(java, "facebook-sdk-3.23.1.jar")
    #Library.new(java, "support-v4-22.0.0.jar")
    java.cheat
    puts "Requested #{java.classes.size} classes."

    puts "Extracting information from java..."
    java.process_classes(&:extract!)

    puts "Generating headers..."
    java.classes.each_value(&:generate_header)

    puts "Generating sources..."
    java.packages.each_value(&:generate_source)

    puts "Generating core..."
    java.generate_core
}

class JavaParser < Parslet::Parser
    rule(:lowident) {match("[a-z_]") >> match("[a-zA-Z0-9_]").repeat}
    rule(:upident) {match("[A-Z_]") >> match("[a-zA-Z0-9_]").repeat}
    rule(:ident) {match("[a-zA-Z_]") >> match("[a-zA-Z0-9_]").repeat}
    rule(:package) {lowident >> (str(".") >> lowident).repeat}
    rule(:basejavaclass) {package >> str(".") >> upident >> (str("$") >> ident).repeat}
    rule(:javaclass) {basejavaclass.as(:javaclass) >> template.as(:template).maybe >> (str(".") >> ident).repeat.as(:complement)}

    rule(:source) {str("Compiled from \"") >> upident >> str(".java\"\n")}

    rule(:templateparam) {
        ((type.as(:name)|str("?")) >>
        (((str(" super ") >> type.as(:super))|
         (str(" extends ") >> type.as(:extends))) >> (str(" & ") >> basejavaclass).repeat
         ).maybe).as(:param)
    }
    rule(:template) {str("<") >> templateparam >> (str(", ") >> templateparam).repeat >> str(">")}

    rule(:classmod) {(str("public")|str("final")|str("abstract")).as(:mod)}
    rule(:methodmod) {(str("public")|str("final")|str("abstract")|str("static")|str("native")|str("synchronized")|str("strictfp")).as(:mod)}
    rule(:fieldmod) {(str("public")|str("final")|str("static")).as(:mod)}

    rule(:basictype) {
        ((str("void")|str("byte")|str("char")|str("short")|str("int")|str("long")|str("float")|str("double")|str("boolean")).as(:primitive)|
        javaclass|upident.as(:templ)).as(:basictype)
    }

    rule(:type) {
        (basictype >> str("[]").repeat.as(:array)).as(:type)
    }

    rule(:arg) {
        type.as(:arg) >> (str("...").as(:variadic)).maybe
    }

    rule(:fielddecl) {
        (fieldmod >> str(" ")).repeat.as(:mods) >> type.as(:fieldtype) >> str(" ") >> ident.as(:name) >>
        (str(" = ") >> (
            (str("true")|str("false")|str("Infinityd")|str("Infinityf")|str("-Infinityd")|str("-Infinityf")|str("NaNf")|str("NaNd")) |
            (match["-0-9fEld."].repeat(1)) |
            (str("\"") >> match["^;"].repeat) |
            str("'\\''") |
            (str("'\\u") >> match["a-fA-F0-9"].repeat >> str("'")) |
            (str("'") >> match["^'"] >> str("'"))
        )).maybe >>
        str(";")
    }

    rule(:ctordecl) {
        (methodmod >> str(" ")).repeat.as(:mods) >> type.as(:returntype) >> str("(") >>
        (arg >> (str(", ") >> arg).repeat).maybe.as(:args) >>
        str(")") >> (str(" throws ") >> type >> (str(", ") >> type).repeat).maybe.as(:throws) >> str(";")
    }

    rule(:methoddecl) {
        (methodmod >> str(" ")).repeat.as(:mods) >> (template >> str(" ")).maybe.as(:template) >> type.as(:returntype) >> str(" ") >> ident.as(:name) >> str("(") >>
        (arg >> (str(", ") >> arg).repeat).maybe.as(:args) >>
        str(")") >> (str(" throws ") >> type >> (str(", ") >> type).repeat).maybe.as(:throws) >> str(";")
    }

    rule(:classdecl) {
        (classmod >> str(" ")).repeat.as(:mods) >> (str("class ")|str("interface ")) >> basejavaclass.as(:javaclass) >> template.maybe.as(:template) >> str(" ") >>
            (str("extends ") >> javaclass >> (str(",") >> str(" ").maybe >> javaclass).repeat >> str(" ")).maybe.as(:extends) >>
            (str("implements ") >> javaclass >> (str(",") >> str(" ").maybe >> javaclass).repeat >> str(" ")).maybe.as(:implements) >>
        str("{\n") >> (str("  ") >> (ctordecl.as(:ctor)|methoddecl.as(:method)|fielddecl.as(:field)) >> str("\n")).repeat.as(:contents) >> str("}\n")
    }

    rule(:javap) {source >> classdecl}

    root :javap
end

class JavaTransformer < Parslet::Transform

    rule(:javaclass => simple(:fullname), :complement => sequence(:compl)) { java.find_class(fullname.to_s + compl.join.to_s.gsub(".", "$")) }
    rule(:javaclass => simple(:base), :template => subtree(:a), :complement => sequence(:compl)) { java.find_class(base.to_s + compl.join.to_s.gsub(".", "$")) }
    rule(:type => simple(:base)) { base }
    rule(:arg => simple(:base)) { base }
    rule(:arg => simple(:base), :variadic => "...") { VariadicType.new(base) }
    rule(:primitive => simple(:type)) { Type.parse(java, type.to_s) }
    rule(:basictype => simple(:base), :array => subtree(:arr)) { base = base(); [arr].flatten.size.times { base = ArrayType.new(base) }; base }
    rule(:mod => simple(:mod)) { mod.to_sym }
    rule(:param => {:name => {:type => {:basictype => {:templ => simple(:name)}, :array => []}}}) { {name.to_s => java.find_class("java.lang.Object")} }
    rule(:param => {:name => {:type => {:basictype => {:templ => simple(:name)}, :array => []}}, :extends => simple(:base)}) { {name.to_s => base} }

    rule(:method => {:mods => subtree(:mods),
                     :template => subtree(:template),
                     :returntype => subtree(:returntype),
                     :name => simple(:name),
                     :throws => subtree(:throws),
                     :args => subtree(:args)}) do
        templ = Hash[*[template].flatten.compact.map(&:to_a).flatten]
        {:method => {
            :mods => [mods].flatten.compact,
            :returntype => $JavaGenericsTransformer.apply(returntype, :java => java, :templ => templ||{}),
            :name => name.to_s,
            :args => [$JavaGenericsTransformer.apply(args, :java => java, :templ => templ)].flatten.compact
        }}
    end

    rule(:ctor => {:mods => subtree(:mods),
                   :returntype => subtree(:returntype),
                   :throws => subtree(:throws),
                   :args => subtree(:args)}) do
        {:ctor => {
            :mods => [mods].flatten.compact,
            :args => [args].flatten.compact
        }}
    end

    rule(:mods => subtree(:mods),
         :template => subtree(:template),
         :javaclass => simple(:javaclass),
         :implements => subtree(:implements),
         :extends => subtree(:extends),
         :contents => subtree(:contents)) do
        templ = Hash[*[template].flatten.compact.map(&:to_a).flatten]
        next {
            :mods => [mods].flatten.compact,
            :javaclass => java.find_class(javaclass.to_s),
            :implements => [implements].flatten.compact,
            :extends => [extends].flatten.compact,
            :contents => [$JavaGenericsTransformer.apply(contents, :java => java, :templ => templ)].flatten.compact
        }
    end
end

class JavaGenericsTransformer < JavaTransformer
    rule(:templ => simple(:t)) { templ[t.to_s]||{:templ => t} }
end

$JavaParser = JavaParser.new
$JavaTransformer = JavaTransformer.new
$JavaGenericsTransformer = JavaGenericsTransformer.new

def protect_name(name)
    kws = %w[delete]
    kws.include?(name) ? name+"_" : name
end

class JavaSpace
    attr_accessor :libraries, :packages, :classes

    def initialize
        @libraries = []
        @packages = {}
        @classes = {}
        @processing = []
        @processing_current = nil
    end
    def cheat
        @classes = {}
        @packages = {}
        find_class("java.lang.Object")
        find_class("java.lang.Thread")
    end

    def process_classes(&block)
        @processing = @classes.values.sort_by!(&:fullname)
        i = 0
        while i < @processing.size
            @processing_current = @processing[i]
            line = "(#{i+1}/#{@processing.size}) #{@processing[i].fullname}"
            print "\r" + " "*79 + "\r#{line[0,79]}"
            block.call(@processing[i])
            i += 1
        end
        print "\r" + " "*79 + "\r"
    end

    def add_library(lib)
        @libraries << lib
    end

    def add_class(javaclass)
        @classes[javaclass.fullname] = javaclass
        @processing << javaclass
        if @processing_current
            #print "\r" + " "*79 + "\r"
            #puts "Added #{javaclass.inspect}:#{javaclass.library.inspect} because of #{@processing_current.inspect}."
        end
    end

    def find_package(name)
        @packages[name] ||= Package.new(self, name)
    end

    def find_class(fullname)
        return @classes[fullname] if @classes[fullname]
        @libraries.each do |lib|
            if (lib.javap(fullname) rescue nil)
                return @classes[fullname] = JavaClass.new(self, lib, fullname)
            end
        end

        raise "Could not find '#{fullname}'."
    end

    def generate_core
        hpp = GeneratedFile.new("include/core.hpp")
        hpp << "#include <jni.h>\n"
        hpp << "namespace java {\n\n"
        hpp << "jclass fetch_class(const char* classname);\n"
        hpp << "\n}\n"
        hpp.done

        cpp = GeneratedFile.new("src/core.cpp")
        cpp << "#include <core.hpp>\n"
        cpp << "#include <java.lang.Thread.hpp>\n"
        cpp << "#include <java.lang.ClassLoader.hpp>\n"
        cpp << "namespace java {\n"
        cpp << "\n"
        cpp << "static thread_local java::lang::ClassLoader class_loader(nullptr);\n"
        cpp << "static thread_local JNIEnv* jni;\n"
        cpp << "\n"
        cpp << "static void fetch_class_loader() {\n"
        cpp << "    if (class_loader.obj) return;\n"
        cpp << "    java::lang::Thread::_class = jni->FindClass(\"java/lang/Thread\");\n"
        cpp << "    java::lang::ClassLoader::_class = jni->FindClass(\"java/lang/ClassLoader\");\n"
        cpp << "    class_loader = java::lang::Thread::currentThread().getContextClassLoader();\n"
        cpp << "}\n"
        cpp << "\n"
        cpp << "jclass fetch_class(const char* classname) {\n"
        cpp << "    fetch_class_loader();\n"
        cpp << "}\n"
        cpp << "\n"
        cpp << "}\n"
        cpp.done
    end

end

class Library
    def initialize(java, path)
        @java = java
        java.add_library self
        @path = path
        @classes = []

        extract_classes if @path
    end

    def javap(fullname)
        filename = "tmp/#{fullname}.javap.#{@path.gsub(/\W/, "_")}.txt"
        result = nil
        if File.exist?(filename)
            result = File.read(filename)
        else
            javap = `javap -bootclasspath #{@path} -public -constants #{fullname.gsub("$", "\\$")} 2>&1`
            File.write(filename, javap)
            result = javap
        end
        raise if result =~ /Error: class not found/
        result.gsub(/ = \".+;\n/, ";\n")
    end

    def inspect
        @path
    end

private

    def extract_classes
        if @path[-4..-1] == ".jar"
            extract_classes_from_jar
        else
            raise "Unknown library type"
        end
    end

    def extract_classes_from_jar
        filelist = `zip -sf #{@path} | grep .class`
        filelist.each_line do |file|
            file.sub!(".class", "")
            file.gsub!("/", ".")
            file.strip!
            next if file =~ /\$\d/
            @classes << JavaClass.new(@java, self, file)
        end
    end

end

class JavaClass
    attr_accessor :fullname, :name, :mods, :methods, :library, :parent
    def initialize(java, library, fullname)
        @java = java
        raise unless library
        @library = library
        @fullname = fullname
        @name = fullname[/[^\.\$]+$/]
        @methods = []
        @package = java.find_package(fullname[/(.+)(?=\.)/])
        @package.add_class self
        @children = []
    end

    def public?
        @mods.include? :public
    end

    def add_child(child)
        @children << child
    end

    def inspect
        @fullname
    end

    def <=>(other)
        @fullname <=> other.fullname
    end

    def extract!
        if @fullname.include?("$")
            @parent = @java.find_class(@fullname[/(.+)(?=\$)/])
            @parent.add_child self
        end

        tree = nil

        javap = @library.javap(@fullname)
        begin
            tree = $JavaParser.parse(javap)
        rescue Parslet::ParseFailed => error
            puts error.cause.ascii_tree
        end

        tree = $JavaTransformer.apply(tree, :java => @java)
        raise if tree[:javaclass] != self

        @mods = tree[:mods]
        @extends = tree[:extends]
        @implements = tree[:implements]
        @methods = []
        tree[:contents].each do |hash|
            m = nil
            case hash.keys.first
            when :method
                m = JavaMethod.new(@java, self, hash[:method])
            when :ctor
                m = JavaConstructor.new(@java, self, hash[:ctor])
            end
            @methods << m if m && !@methods.include?(m)
        end
        @methods.delete_if {|m| !m.public? }
    end

    def cppname
        @fullname.gsub(".", "::").gsub("$", "::")
    end

    def argtype
        "const #{cppname}&"
    end

    def parent_tree
        if @parent
            @parent.parent_tree + [@parent]
        else
            []
        end
    end

    def parent_root
        if @parent
            @parent.parent_root
        else
            self
        end
    end

    def includes
        [self]
    end

    def depends
        [self]
    end

    def header_includes
        (inherit + @children.map(&:inherit).flatten + [@java.find_class("java.lang.Object")]).uniq.sort - [self]
    end

    def source_includes
        (@methods.map(&:includes) + @children.map(&:source_includes)).flatten.uniq.sort
    end

    def header_forwards
        list = (@methods.map(&:depends) + @children.map(&:depends)).flatten.uniq.sort
        list.delete_if {|c| c.parent_tree.include? self }
        list
    end

    def gen_include(f)
        if @parent
            @parent.gen_include(f)
        else
            f << "#include \"#{@fullname}.hpp\"\n"
        end
    end

    def gen_forward(f)
        if @parent
            @parent.gen_include(f)
        else
            @package.gen_namespace_begin_inline(f)
            f << "class #{@name};"
            @package.gen_namespace_end_inline(f)
            f << "\n"
        end
    end

    def all_inherits
        list = [@extends + @implements].flatten - [self]
        list += list.map(&:all_inherits)
        list
    end

    def inherit
        list = [@extends + @implements].flatten - [self]
        list = [@java.find_class("java.lang.Object")] + (list - list.map(&:all_inherits).flatten).sort
        list.uniq
    end

    def inherit_sheme
        if self == @java.find_class("java.lang.Object")
            "public virtual #{cppname}"
        else
            "public #{cppname}"
        end
    end

    def gen_class(f)
        if self == @java.find_class("java.lang.Object")
            f << "class #{@name} {\n"
        else
            wid = "class #{@name} :"
            f << wid
            f << " " << inherit[0].inherit_sheme
            inherit[1..-1].each do |javaclass|
                f << ",\n#{" " * wid.size} #{javaclass.inherit_sheme}"
            end
            f << " {\n";
        end
        f << "public:\n\n"
        f.ident 1
        f << "static jclass _class;\n"
        f << "jobject obj;\n" if self == @java.find_class("java.lang.Object")
        f << "\n"
        @children.each do |child|
            f << "class #{child.name};\n"
        end
        f << "\n" if @children.size > 0
        @children.each do |child|
            child.gen_class(f)
            f << "\n"
        end
        if self == @java.find_class("java.lang.Object")
            f << "Object(jobject _obj) {obj = _obj;}\n"
            f << "bool isNull() {return obj == nullptr;}\n"
        else
            f << "#{@name}(jobject _obj) : #{inherit.map{|c|c.cppname+"(_obj)"}.join(", ")} {}\n"
        end
        f << "\n"
        @methods.each do |m|
            m.declare(f)
        end
        f.ident -1
        f << "\n};\n"
    end

    def generate_header
        return if @parent
        hpp = GeneratedFile.new("include/#{@fullname}.hpp")
        hpp << "#pragma once\n\n"
        hpp << "#include <jni.h>\n"
        hpp << "#include <cstdint>\n"
        hpp << "#include <vector>\n\n"
        header_includes.each do |javaclass|
            javaclass.gen_include(hpp)
        end
        header_forwards.each do |javaclass|
            javaclass.gen_include(hpp) if javaclass.parent
        end
        hpp << "\n"
        header_forwards.each do |javaclass|
            javaclass.gen_forward(hpp) unless javaclass.parent
        end
        hpp << "\n"
        @package.gen_namespace_begin(hpp)
        gen_class(hpp)
        @package.gen_namespace_end(hpp)
        hpp << "\n"
        hpp.done
    end

end

class JavaMethod
    attr_accessor :name, :args, :javaclass
    def initialize(java, javaclass, hash)
        @java = java
        @javaclass = javaclass
        @mods = hash[:mods]
        @return = hash[:returntype]
        @name = protect_name(hash[:name])
        @args = hash[:args]
    end

    def ==(other)
        [@name, @args, @javaclass] == [other.name, other.args, other.javaclass]
    end

    def includes
        (@return.includes + @args.map(&:includes).flatten).sort.uniq
    end

    def depends
        (@return.depends + @args.map(&:depends).flatten).sort.uniq
    end

    def inspect
        (@mods.map(&:to_s) + [@return.inspect, @name]).join(" ") + "(#{@args.map(&:inspect).join(", ")})"
    end

    def public?
        @mods.include? :public
    end

    def declare(f)
        if @mods.include? :static
            f << "static "
        end
        f << @return.cppname << " " << @name << "(" << @args.map(&:cppname).join(", ") << ");\n"
    end

    def gen_fetch_class(f)
        f << "if (!_class) _class = java::fetch_class(\"#{@javaclass.fullname.gsub(".", "/")}\");\n"
    end

    def define(f)
        f << @return.cppname << " " << @javaclass.cppname << "::" << @name << "(" << @args.map(&:cppname).join(", ") << ") {\n"
        f.ident(1)
        gen_fetch_class(f)
        f << "return *(#{@return.cppname}*)0;\n" unless @return == VoidType # FIXME
        f.ident(-1)
        f << "}\n\n"
    end
end

class JavaConstructor < JavaMethod
    attr_accessor :name, :args, :javaclass
    def initialize(java, javaclass, hash)
        @java = java
        @javaclass = javaclass
        @mods = hash[:mods]
        @args = hash[:args]
    end

    def includes
        @args.map(&:includes).flatten.sort.uniq
    end

    def depends
        @args.map(&:depends).flatten.sort.uniq
    end

    def inspect
        (@mods.map(&:to_s) + [@javaclass.inspect]).join(" ") + "(#{@args.map(&:inspect).join(", ")})"
    end

    def declare(f)
        f << @javaclass.name << "(" << @args.map(&:argtype).join(", ") << ");\n"
    end

    def define(f)
        f << @javaclass.cppname << "::" << @javaclass.name << "(" << @args.map(&:argtype).join(", ")
        f << ") : #{@javaclass.inherit.map{|c|c.cppname+"(0)"}.join(", ")} {\n"
        f.ident(1)
        gen_fetch_class(f)
        f.ident(-1)
        f << "}\n\n"
    end
end

class Package
    attr_accessor :name
    def initialize(java, name)
        @java = java
        @name = name
        @classes = []
    end

    def add_class(javaclass)
        @classes << javaclass
        @java.add_class javaclass
    end

    def gen_namespace_begin(f)
        @name.split(".").each do |name|
            f << "namespace #{name} {\n"
        end
    end

    def gen_namespace_end(f)
        @name.split(".").size.times do
            f << "}\n"
        end
    end

    def gen_namespace_begin_inline(f)
        @name.split(".").each do |name|
            f << "namespace #{name} { "
        end
    end

    def gen_namespace_end_inline(f)
        @name.split(".").size.times do
            f << " }"
        end
    end

    def generate_source
        cpp = GeneratedFile.new("src/#{@name}.cpp")
        includes = @classes
        includes.each do |incl|
            includes += incl.source_includes
        end
        includes.map!(&:parent_root)
        cpp << "#include \"core.hpp\"\n"
        includes.sort.uniq.each do |javaclass|
            javaclass.gen_include(cpp)
        end

        cpp << "\n"

        @classes.each do |javaclass|
            cpp << "jclass #{javaclass.cppname}::_class = nullptr;\n"
        end

        cpp << "\n"

        @classes.each do |javaclass|
            javaclass.methods.each do |method|
                method.define(cpp)
            end
        end

        cpp.done
    end
end

class PrimitiveTypeClass
    def initialize(javaname, cppname)
        @javaname = javaname
        @cppname = cppname
    end
    def javaname
        @javaname
    end
    def cppname
        @cppname
    end

    def argtype
        cppname
    end

    def inspect
        @javaname
    end
    def includes
        []
    end
    def depends
        []
    end
end

PrimitiveTypes = [
    VoidType = PrimitiveTypeClass.new("void", "void"),
    ShortType = PrimitiveTypeClass.new("short", "int16_t"),
    IntType = PrimitiveTypeClass.new("int", "int32_t"),
    LongType = PrimitiveTypeClass.new("long", "int64_t"),
    FloatType = PrimitiveTypeClass.new("float", "float"),
    DoubleType = PrimitiveTypeClass.new("double", "double"),
    CharType = PrimitiveTypeClass.new("char", "uint16_t"),
    ByteType = PrimitiveTypeClass.new("byte", "uint8_t"),
    BooleanType = PrimitiveTypeClass.new("boolean", "bool")
]

class ArrayType
    def initialize(base)
        @base = base
    end
    def inspect
        @base.inspect + "[]"
    end
    def includes
        @base.includes
    end
    def depends
        @base.depends
    end
    def cppname
        "std::vector<#{@base.cppname}>"
    end
    def argtype
        "const #{cppname}&"
    end
end

class VariadicType
    def initialize(base)
        @base = base
    end
    def inspect
        @base.inspect + "..."
    end
    def includes
        @base.includes
    end
    def depends
        @base.depends
    end
    def cppname
        "std::vector<#{@base.cppname}>"
    end
    def argtype
        "const #{cppname}&"
    end
end

class Type
    def self.parse(java, type)
        return ArrayType.new(Type.parse(java, type[0...-2])) if type[-2..-1] == "[]"
        PrimitiveTypes.each do |primitive_type|
            if primitive_type.javaname == type
                return primitive_type
            end
        end
        java.find_class(type)
    end
end

class GeneratedFile < String
    def initialize(filename)
        @filename = filename
        @ident = 0
    end
    def ident(ident)
        @ident += ident
        self << "  "*ident if ident > 0
        self[(ident*2)..-1] = "" if ident < 0 && self[(ident*2)..-1] == "  "*(-ident)
    end
    def <<(str)
        super(str.gsub("\n", "\n" + "  "*@ident))
    end
    def done
        orig = File.read(@filename) if File.exists?(@filename)
        if self != orig
            File.write(@filename, self.to_s)
        end
    end
end
