#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.FilterOutputStream.hpp"
#include "java.lang.Appendable.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class PrintStream; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace io {
class PrintStream : public virtual ::java::lang::Object,
                    public virtual ::java::io::Closeable,
                    public virtual ::java::io::FilterOutputStream,
                    public virtual ::java::lang::Appendable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintStream(const ::java::io::PrintStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    PrintStream(::java::io::PrintStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PrintStream& operator=(const ::java::io::PrintStream& x) {obj = x.obj; return *this;}
    ::java::io::PrintStream& operator=(::java::io::PrintStream&& x) {obj = std::move(x.obj); return *this;}
    
    PrintStream(const ::java::io::OutputStream&);
    PrintStream(const ::java::io::OutputStream&, bool);
    PrintStream(const ::java::io::OutputStream&, bool, const ::java::lang::String&);
    PrintStream(const ::java::io::File&);
    PrintStream(const ::java::io::File&, const ::java::lang::String&);
    PrintStream(const ::java::lang::String&);
    PrintStream(const ::java::lang::String&, const ::java::lang::String&);
    bool checkError() const ;
    void close() const ;
    void flush() const ;
    ::java::io::PrintStream format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintStream format(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintStream printf(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintStream printf(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    void print(const std::vector< uint16_t>&) const ;
    void print(uint16_t) const ;
    void print(double) const ;
    void print(float) const ;
    void print(int32_t) const ;
    void print(int64_t) const ;
    void print(const ::java::lang::Object&) const ;
    void print(const ::java::lang::String&) const ;
    void print(bool) const ;
    void println() const ;
    void println(const std::vector< uint16_t>&) const ;
    void println(uint16_t) const ;
    void println(double) const ;
    void println(float) const ;
    void println(int32_t) const ;
    void println(int64_t) const ;
    void println(const ::java::lang::Object&) const ;
    void println(const ::java::lang::String&) const ;
    void println(bool) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    ::java::io::PrintStream append(uint16_t) const ;
    ::java::io::PrintStream append(const ::java::lang::CharSequence&) const ;
    ::java::io::PrintStream append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}


