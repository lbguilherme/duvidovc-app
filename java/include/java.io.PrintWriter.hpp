#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace io { class PrintWriter; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace java {
namespace io {
class PrintWriter : public virtual ::java::lang::Object,
                    public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrintWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrintWriter(const ::java::io::PrintWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    PrintWriter(::java::io::PrintWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PrintWriter& operator=(const ::java::io::PrintWriter& x) {obj = x.obj; return *this;}
    ::java::io::PrintWriter& operator=(::java::io::PrintWriter&& x) {obj = std::move(x.obj); return *this;}
    
    PrintWriter(const ::java::io::OutputStream&);
    PrintWriter(const ::java::io::OutputStream&, bool);
    PrintWriter(const ::java::io::Writer&);
    PrintWriter(const ::java::io::Writer&, bool);
    PrintWriter(const ::java::io::File&);
    PrintWriter(const ::java::io::File&, const ::java::lang::String&);
    PrintWriter(const ::java::lang::String&);
    PrintWriter(const ::java::lang::String&, const ::java::lang::String&);
    bool checkError() const ;
    void close() const ;
    void flush() const ;
    ::java::io::PrintWriter format(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintWriter format(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintWriter printf(const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
    ::java::io::PrintWriter printf(const ::java::util::Locale&, const ::java::lang::String&, const std::vector< ::java::lang::Object>&) const ;
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
    void write(const std::vector< uint16_t>&) const ;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const ;
    void write(int32_t) const ;
    void write(const ::java::lang::String&) const ;
    void write(const ::java::lang::String&, int32_t, int32_t) const ;
    ::java::io::PrintWriter append(uint16_t) const ;
    ::java::io::PrintWriter append(const ::java::lang::CharSequence&) const ;
    ::java::io::PrintWriter append(const ::java::lang::CharSequence&, int32_t, int32_t) const ;

};
}
}


