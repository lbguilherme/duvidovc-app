#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace io { class StringWriter; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace lang { class StringBuffer; } }

namespace java {
namespace io {
class StringWriter : public virtual ::java::lang::Object,
                     public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StringWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StringWriter(const ::java::io::StringWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    StringWriter(::java::io::StringWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::StringWriter& operator=(const ::java::io::StringWriter& x) {obj = x.obj; return *this;}
    ::java::io::StringWriter& operator=(::java::io::StringWriter&& x) {obj = std::move(x.obj); return *this;}
    
    StringWriter();
    StringWriter(int32_t);
    void close() const;
    void flush() const;
    ::java::lang::StringBuffer getBuffer() const;
    ::java::lang::String toString() const;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void write(const ::java::lang::String&) const;
    void write(const ::java::lang::String&, int32_t, int32_t) const;
    ::java::io::StringWriter append(uint16_t) const;
    ::java::io::StringWriter append(const ::java::lang::CharSequence&) const;
    ::java::io::StringWriter append(const ::java::lang::CharSequence&, int32_t, int32_t) const;

};
}
}


