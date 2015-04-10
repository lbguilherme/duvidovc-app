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
    Library.new(java, "android-api15.jar")
    Library.new(java, "bolts-android-1.2.0.jar")
    Library.new(java, "facebook-sdk-4.0.1.jar")
    Library.new(java, "support-v4-22.0.0.jar")
    Library.new(java, "../../build-android-release/android-build/build/intermediates/classes/debug/")
    #java.cheat
    java.find_package("vc.duvido").native = true
    puts "Requested #{java.classes.size} classes."

    puts "Extracting classes..."
    java.process_classes(&:extract!)

    puts "Extracted #{java.classes.size} classes."

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
    rule(:javaclass => simple(:base), :template => subtree(:a), :complement => simple(:compl)) { java.find_class(base.to_s + compl.to_s.gsub(".", "$")) }
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
    kws = %w[delete bool union register or xor not and namespace]
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
        find_class("duvido.android.FacebookStatusCallback")
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

        puts "\rCould not find '#{fullname}'"
        InvalidType.new
    end

    def generate_core
        hpp = GeneratedFile.new("src/java-core.hpp")
        hpp << <<END
#include <jni.h>
namespace java {

extern thread_local JNIEnv* jni;

void initialize();
jclass fetch_class(const char* classname);

}
END
        hpp.done

        cpp = GeneratedFile.new("src/java-core.cpp")
        cpp << <<END
#include "java-core.hpp"
#include <java.lang.Thread.hpp>
#include <java.lang.ClassLoader.hpp>
#include <java.lang.String.hpp>
#include <java.lang.Class.hpp>

END
    @packages.each_value do |pkg|
        if pkg.native?
            pkg.classes.each do |javaclass|
                javaclass.gen_include(cpp) if javaclass.native?
            end
        end
    end
cpp << <<END

#include <QFile>

namespace java {

static java::lang::ClassLoader class_loader(nullptr);
thread_local JNIEnv* jni;
JavaVM* vm;

void initialize() {
    if (!jni) {
        vm->GetEnv((void**)&jni, JNI_VERSION_1_6);
        vm->AttachCurrentThread(&jni, NULL);
    }
}

jclass fetch_class(const char* classname) {
    return (jclass)jni->NewGlobalRef(class_loader.loadClass(classname).obj);
}

}

JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void*) {
    java::vm = vm;
    vm->GetEnv((void**)&java::jni, JNI_VERSION_1_6);

    java::lang::ClassLoader::_class = (jclass)java::jni->NewGlobalRef((jobject)java::jni->FindClass("java/lang/ClassLoader"));
    java::lang::Thread::_class = (jclass)java::jni->NewGlobalRef((jobject)java::jni->FindClass("java/lang/Thread"));

    java::class_loader = java::lang::Thread::currentThread().getContextClassLoader();

END
    @packages.each_value do |pkg|
        if pkg.native?
            pkg.classes.each do |javaclass|
                cpp << "    #{javaclass.cppname}::jniInitializeNative();\n" if javaclass.native?
            end
        end
    end
cpp << <<END

    return JNI_VERSION_1_6;
}
END
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
        result.gsub!(/ = \".+;\n/, ";\n")
        result.gsub!(/^(.+)=(.+)\n/, "")
        result
    end

    def inspect
        @path
    end

private

    def extract_classes
        if @path[-4..-1] == ".jar"
            extract_classes_from_jar
        else
            extract_classes_from_dir
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

    def extract_classes_from_dir
        filelist = `find #{@path} | grep .class`
        filelist.each_line do |file|
            next unless file =~ /\.class$/
            file.sub!(".class", "")
            file.gsub!(@path, "")
            file.gsub!("/", ".")
            file.strip!
            next if file =~ /\$\d/
            @classes << JavaClass.new(@java, self, file)
        end
    end

end

class JavaClass
    attr_accessor :fullname, :name, :mods, :methods, :library, :parent, :package
    def initialize(java, library, fullname)
        @java = java
        raise unless library
        @library = library
        @fullname = fullname
        @name = fullname[/[^\.]+$/].gsub("$", "_")
        @methods = []
        @package = java.find_package(fullname[/(.+)(?=\.)/])
        @package.add_class self
        @cppname = "::" + @package.name.split(".").map{|n| protect_name(n)}.join(".").gsub(".", "::") + "::" + @name.gsub("$", "_")
        @children = []
    end

    def public?
        @mods.include? :public
    end

    def native?
        @package.native && @methods.any? {|m| m.mods.include? :native }
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
            @methods << m if m && m.valid? && !@methods.include?(m)
        end
        @methods.delete_if {|m| !m.public? }
    end

    def cppname
        @cppname
    end

    def argtype
        "const #{cppname}&"
    end

    def valid?
        true
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

    def signature
        "L#{@fullname.gsub(".", "/")};"
    end

    def includes
        [self]
    end

    def depends
        [self]
    end

    def source_includes
        @methods.map(&:includes).flatten
    end

    def header_forwards
        @methods.map(&:depends).flatten.uniq.sort
    end

    def gen_include(f)
        f << "#include \"#{@fullname.gsub("$", "_")}.hpp\"\n"
    end

    def gen_forward(f)
        @package.gen_namespace_begin_inline(f)
        f << "class #{@name};"
        @package.gen_namespace_end_inline(f)
        f << "\n"
    end

    def all_inherits
        list = [@extends + @implements].flatten - [self]
        list.delete_if {|c| !c.valid?}
        list += list.map(&:all_inherits)
        ([@java.find_class("java.lang.Object")] + list.flatten.sort).uniq
    end

    def inherit
        list = [@extends + @implements].flatten - [self]
        list.delete_if {|c| !c.valid?}
        ([@java.find_class("java.lang.Object")] + list.sort).uniq
    end

    def inherit_sheme
        "public virtual #{cppname}"
    end

    def all_children
        @children + @children.map(&:all_children).flatten
    end

    def gen_class(f)
        inherit.each do |javaclass|
            javaclass.gen_include(f)
        end
        f << "\n"
        header_forwards.each do |javaclass|
            javaclass.gen_forward(f)
        end
        f << "\n"
        @package.gen_namespace_begin(f)

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
        f << "\n"
        if self == @java.find_class("java.lang.Object")
            f << "struct JavaObject {\n"
            f << "    jobject obj;\n"
            f << "    JavaObject(jobject _obj) {obj = _obj ? java::jni->NewGlobalRef(_obj) : 0;}\n"
            f << "    ~JavaObject() {if (obj) java::jni->DeleteGlobalRef(obj);}\n"
            f << "    JavaObject& operator=(const JavaObject&) = delete;\n"
            f << "    JavaObject& operator=(JavaObject&&) = delete;\n"
            f << "    operator jobject() const {return obj;}\n"
            f << "};\n"
            f << "\n"
            f << "struct JavaObjectHolder : std::shared_ptr<JavaObject> {\n"
            f << "    JavaObjectHolder(jobject obj) : shared_ptr(new JavaObject(obj)) {}\n"
            f << "    operator jobject() const {return get()->obj;}\n"
            f << "};\n"
            f << "\n"
            f << "static jclass _class;\n"
            f << "JavaObjectHolder obj;\n"
            f << "\n"
            f << "explicit Object(jobject _obj) : obj(_obj) {}\n"
            f << "bool isNull() {return (jobject)obj == nullptr;}\n"
        else
            f << "static jclass _class;\n"
            f << "\n"
            f << "#pragma GCC diagnostic push\n"
            f << "#pragma GCC diagnostic ignored \"-Wreorder\"\n"
            f << "explicit #{@name}(jobject _obj) : #{all_inherits.map{|c|c.cppname+"(_obj)"}.join(", ")} {}\n"
            f << "#pragma GCC diagnostic pop\n"
        end
        f << "\n"
        f << "#pragma GCC diagnostic push\n"
        f << "#pragma GCC diagnostic ignored \"-Wreorder\"\n"
        f << "#{@name}(const #{cppname}& x) : #{all_inherits.map{|c|c.cppname+"((jobject)0)"}.join(", ")} {obj = x.obj;}\n"
        f << "#{@name}(#{cppname}&& x) : #{all_inherits.map{|c|c.cppname+"((jobject)0)"}.join(", ")} {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}\n"
        if self == @java.find_class("java.lang.String")
            f << "String(const char* utf) : #{inherit.map{|c|c.cppname+"((jobject)0)"}.join(", ")} {obj = java::jni->NewGlobalRef(java::jni->NewStringUTF(utf));}\n"
        end
        f << "#pragma GCC diagnostic pop\n"
        f << "\n"
        f << "#{cppname}& operator=(const #{cppname}& x) {obj = x.obj; return *this;}\n"
        f << "#{cppname}& operator=(#{cppname}&& x) {obj = std::move(x.obj); return *this;}\n"
        f << "\n"
        if native?
            f << "static void jniInitializeNative();"
            f << "\n"
        end
        @methods.each do |m|
            m.declare(f)
        end
        f.ident -1
        f << "\n};\n"

        @package.gen_namespace_end(f)
    end

    def generate_header
        hpp = GeneratedFile.new("include/#{@fullname.gsub("$", "_")}.hpp")
        hpp << "#pragma once\n\n"
        hpp << "#include \"../src/java-core.hpp\"\n"
        hpp << "#include <jni.h>\n"
        hpp << "#include <cstdint>\n"
        hpp << "#include <memory>\n"
        hpp << "#include <vector>\n\n"
        gen_class(hpp)
        hpp << "\n"
        all_children.each do |child|
            child.gen_include(hpp)
        end
        hpp << "\n"
        hpp.done
    end

    def gen_fetch_class(f)
        f << "if (!#{cppname}::_class) #{cppname}::_class = java::fetch_class(\"#{@fullname.gsub(".", "/")}\");\n"
    end

    def prepare_argument(f, src, dst)
        f << "jobject #{dst} = #{src}.obj;\n"
    end

    def prepare_return(f, src, dst)
        f << "#{cppname} #{dst}(#{src});\n"
    end

end

class JavaMethod
    attr_accessor :name, :args, :javaclass, :mods, :nativename
    def initialize(java, javaclass, hash)
        @java = java
        @javaclass = javaclass
        @mods = hash[:mods]
        @return = hash[:returntype]
        @name = protect_name(hash[:name])
        @args = hash[:args]
    end

    def valid?
        (@args.all?(&:valid?) && @return.valid?) rescue false
    end

    def ==(other)
        [@name, @args.map(&:signature).join] == [other.name, other.args.map(&:signature).join]
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
        f << @return.cppname << " " << @name << "(" << @args.map(&:argtype).join(", ") << ");\n"
    end

    def signature
        "(#{@args.map(&:signature).join})#{@return ? @return.signature : "V"}"
    end

    def gen_fetch_method(f)
        f << "static jmethodID mid = java::jni->Get#{@mods.include?(:static) ? "Static" : ""}MethodID"
        f << "(_class, \"#{@name ? @name : "<init>"}\", \"#{signature}\");\n"
    end

    def define(f)
        if @javaclass.package.native? && @mods.include?(:native)
            parts = ["Java", @javaclass.fullname, @name, "", *@args.map(&:signature).join]
            parts.map! do |part|
                part.gsub("_", "_1").gsub(";", "_2").gsub("[", "_3").gsub(".", "_").gsub("/", "_")
            end
            @nativename = parts.join("_")
            jnireturn = "jobject"
            if @return == VoidType
                jnireturn = "void"
            elsif @return.is_a? PrimitiveType
                jnireturn = "j#{@return.javaname}"
            end
            args = @args.map do |argt|
                if argt.is_a? JavaClass
                    "jobject"
                elsif argt.is_a? JavaClass
                    "j#{argt.javaname}"
                end
            end
            argparams = args.map.with_index {|t, n| ", #{t} arg#{n}" }.join

            f << "static #{jnireturn} JNICALL #{@nativename}(JNIEnv*, jobject obj#{argparams}) {\n"
            f.ident(1)
            @javaclass.prepare_return(f, "obj", "_obj")
            @args.each.with_index do |arg, n|
                arg.prepare_return(f, "arg#{n}", "_arg#{n}")
            end

            arglist = @args.map.with_index {|t, n| "_arg#{n}" }.join(", ")
            if @return == VoidType
                f << "_obj.#{@name}(#{arglist});\n"
            elsif @return.is_a? PrimitiveType
                f << "return _obj.#{@name}(#{arglist});\n"
            else
                f << "auto _ret = _obj.#{@name}(#{arglist});\n"
                @return.prepare_argument(f, "_ret", "ret")
                f << "return ret;\n"
            end
            f.ident(-1)
            f << "}\n\n"

            puts @nativename
            return
        else
            argparams = @args.map(&:argtype).map.with_index {|t, n| "#{t} arg#{n}" }.join(", ")
            arglist = @args.map.with_index {|t, n| ", _arg#{n}" }.join
            f << "#{@return.cppname} #{@javaclass.cppname[2..-1]}::#{@name}(#{argparams}) {\n"
            f.ident(1)
            @javaclass.gen_fetch_class(f)
            gen_fetch_method(f)
            @args.each.with_index {|a, n| a.prepare_argument(f, "arg#{n}", "_arg#{n}") }

            if @return == VoidType
                if @mods.include? :static
                    f << "java::jni->CallStaticVoidMethod(_class, mid" << arglist << ");\n"
                else
                    f << "java::jni->CallVoidMethod(obj, mid" << arglist << ");\n"
                end
            elsif @return.is_a? PrimitiveType
                if @mods.include? :static
                    f << "return java::jni->CallStatic#{@return.javaname.capitalize}Method(_class, mid" << arglist << ");\n"
                else
                    f << "return java::jni->Call#{@return.javaname.capitalize}Method(obj, mid" << arglist << ");\n"
                end
            else
                if @mods.include? :static
                    f << "jobject ret = java::jni->CallStaticObjectMethod(_class, mid" << arglist << ");\n"
                else
                    f << "jobject ret = java::jni->CallObjectMethod(obj, mid" << arglist << ");\n"
                end
                @return.prepare_return(f, "ret", "_ret")
                f << "return _ret;\n"
            end

            f.ident(-1)
            f << "}\n\n"
        end
    end
end

class JavaConstructor < JavaMethod
    attr_accessor :name, :args, :javaclass, :mods
    def initialize(java, javaclass, hash)
        @java = java
        @javaclass = javaclass
        @mods = hash[:mods]
        @args = hash[:args]
    end

    def valid?
        return false if @args == [@javaclass]
        @args.all?(&:valid?) rescue false
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
        f << "#pragma GCC diagnostic push\n"
        f << "#pragma GCC diagnostic ignored \"-Wreorder\"\n"
        argparams = @args.map(&:argtype).map.with_index {|t, n| "#{t} arg#{n}" }.join(", ")
        arglist = @args.map(&:argtype).map.with_index {|t, n| ", _arg#{n}" }.join
        f << "#{@javaclass.cppname}::#{@javaclass.name}(#{argparams}) : #{@javaclass.all_inherits.map{|c|c.cppname+"((jobject)0)"}.join(", ")} {\n"
        f.ident(1)
        @javaclass.gen_fetch_class(f)
        gen_fetch_method(f)
        @args.each.with_index {|a, n| a.prepare_argument(f, "arg#{n}", "_arg#{n}") }
        f << "obj = java::jni->NewObject(_class, mid" << arglist << ");\n"
        f.ident(-1)
        f << "}\n"
        f << "#pragma GCC diagnostic pop\n\n"
    end
end

class Package
    attr_accessor :name, :native, :classes
    def initialize(java, name)
        @java = java
        @name = name
        @classes = []
        @native = false
    end

    def native?
        !!@native
    end

    def add_class(javaclass)
        @classes << javaclass
        @java.add_class javaclass
    end

    def gen_namespace_begin(f)
        @name.split(".").each do |name|
            f << "namespace #{protect_name name} {\n"
        end
    end

    def gen_namespace_end(f)
        @name.split(".").size.times do
            f << "}\n"
        end
    end

    def gen_namespace_begin_inline(f)
        @name.split(".").each do |name|
            f << "namespace #{protect_name name} { "
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
        cpp << "#include \"java-core.hpp\"\n"
        cpp << "#include <memory>\n"
        includes.sort.uniq.each do |javaclass|
            javaclass.gen_include(cpp)
        end

        cpp << "\n"

        @classes.each do |javaclass|
            cpp << "jclass #{javaclass.cppname[2..-1]}::_class = nullptr;\n"
        end

        cpp << "\n"

        @classes.each do |javaclass|
            javaclass.methods.each do |method|
                method.define(cpp)
            end

            if javaclass.native?
                cpp << "void #{javaclass.cppname}::jniInitializeNative() {\n"
                cpp.ident(1)
                javaclass.gen_fetch_class(cpp)
                cpp << "JNINativeMethod methods[] = {\n"
                javaclass.methods.each do |m|
                    if m.mods.include?(:native)
                        cpp << "    {\"#{m.name}\", \"#{m.signature}\", (void*)#{m.nativename}},\n"
                    end
                end
                cpp << "};\n"
                cpp << "java::jni->RegisterNatives(_class, methods, sizeof(methods)/sizeof(methods[0]));\n"
                cpp.ident(-1)
                cpp << "}\n"
            end
        end

        cpp.done
    end
end

class PrimitiveType
    attr_reader :javaname, :cppname, :signature
    def initialize(javaname, cppname, signature)
        @javaname = javaname
        @cppname = cppname
        @signature = signature
    end

    def valid?
        true
    end

    def argtype
        @cppname
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

    def prepare_argument(f, src, dst)
        f << "#{@cppname} #{dst} = #{src};\n"
    end
end

PrimitiveTypes = [
    VoidType = PrimitiveType.new("void", "void", "V"),
    ShortType = PrimitiveType.new("short", "int16_t", "S"),
    IntType = PrimitiveType.new("int", "int32_t", "I"),
    LongType = PrimitiveType.new("long", "int64_t", "J"),
    FloatType = PrimitiveType.new("float", "float", "F"),
    DoubleType = PrimitiveType.new("double", "double", "D"),
    CharType = PrimitiveType.new("char", "uint16_t", "C"),
    ByteType = PrimitiveType.new("byte", "int8_t", "B"),
    BooleanType = PrimitiveType.new("boolean", "bool", "Z")
]

class ArrayType
    def initialize(base)
        @base = base
    end
    def valid?
        @base.valid?
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
        "std::vector< #{@base.cppname}>"
    end
    def argtype
        "const #{cppname}&"
    end
    def signature
        "["+@base.signature
    end

    def prepare_argument(f, src, dst)
        if @base.is_a? PrimitiveType
            f << "j#{@base.javaname}Array #{dst} = java::jni->New#{@base.javaname.capitalize}Array(#{src}.size());\n"
            if @base == BooleanType
                f << "unsigned #{src}s = #{src}.size();\n"
                f << "std::unique_ptr<#{@base.cppname}[]> #{src}t(new #{@base.cppname}[#{src}s]);\n"
                f << "for (unsigned #{src}i = 0; #{src}i < #{src}s; ++#{src}i) {\n"
                f << "  #{src}t[#{src}i] = #{src}[#{src}i];\n"
                f << "}\n"
                f << "java::jni->Set#{@base.javaname.capitalize}ArrayRegion(#{dst}, 0, #{src}s, (const j#{@base.javaname}*)#{src}t.get());\n"
            else
                f << "java::jni->Set#{@base.javaname.capitalize}ArrayRegion(#{dst}, 0, #{src}.size(), #{src}.data());\n"
            end
        elsif @base.is_a? JavaClass
            f << "unsigned #{src}s = #{src}.size();\n"
            @base.gen_fetch_class(f)
            f << "jobjectArray #{dst} = java::jni->NewObjectArray(#{src}s, #{@base.cppname}::_class, nullptr);\n"
            f << "for (unsigned #{src}i = 0; #{src}i < #{src}s; ++#{src}i) {\n"
            f << "  #{@base.argtype} #{src}e = #{src}[#{src}i];\n"
            f.ident(1)
            @base.prepare_argument(f, "#{src}e", "#{src}d")
            f.ident(-1)
            f << "  java::jni->SetObjectArrayElement(#{dst}, #{src}i, #{src}d);\n"
            f << "}\n"
        else
            f << "// TODO: argument 2d array\n"
        end
    end

    def prepare_return(f, src, dst)
        if @base.is_a? PrimitiveType
            f << "unsigned #{src}s = java::jni->GetArrayLength((jarray)#{src});\n"
            f << "j#{@base.javaname}* #{src}a = java::jni->Get#{@base.javaname.capitalize}ArrayElements((j#{@base.javaname}Array)#{src}, nullptr);\n"
            f << "#{cppname} #{dst}(#{src}a, #{src}a+#{src}s);\n"
            f << "java::jni->Release#{@base.javaname.capitalize}ArrayElements((j#{@base.javaname}Array)#{src}, #{src}a, JNI_ABORT);\n"
        elsif @base.is_a? JavaClass
            f << "unsigned #{src}s = java::jni->GetArrayLength((jarray)#{src});\n"
            f << "#{cppname} #{dst}(#{src}s, #{@base.cppname}((jobject)nullptr));\n"
            f << "for (unsigned #{src}i = 0; #{src}i < #{src}s; ++#{src}i) {\n"
            f << "  jobject #{src}e = java::jni->GetObjectArrayElement((jobjectArray)#{src}, #{src}i);\n"
            f.ident(1)
            @base.prepare_return(f, "#{src}e", "#{src}d")
            f.ident(-1)
            f << "  #{dst}[#{src}i] = std::move(#{src}d);\n"
            f << "}\n"
        else
            f << "// TODO: return 2d array\n"
        end
    end
end

class VariadicType < ArrayType
    def inspect
        @base.inspect + "..."
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

class InvalidType
    def valid?
        false
    end
end

class GeneratedFile < String
    def initialize(filename)
        @filename = filename
        @ident = 0
    end
    def ident(ident)
        @ident += ident
        self << "    "*ident if ident > 0
        self[(ident*4)..-1] = "" if ident < 0 && self[(ident*4)..-1] == "    "*(-ident)
    end
    def <<(str)
        super(str.gsub("\n", "\n" + "    "*@ident))
    end
    def done
        orig = File.read(@filename) if File.exists?(@filename)
        if self != orig
            File.write(@filename, self.to_s)
        end
    end
end
