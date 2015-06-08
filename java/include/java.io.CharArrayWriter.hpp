#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Writer.hpp"

namespace java { namespace io { class CharArrayWriter; } }
namespace java { namespace io { class Writer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class CharArrayWriter : public virtual ::java::lang::Object,
                        public virtual ::java::io::Writer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharArrayWriter(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::Writer(_obj), ::java::lang::Appendable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharArrayWriter(const ::java::io::CharArrayWriter& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj;}
    CharArrayWriter(::java::io::CharArrayWriter&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::Writer((jobject)0), ::java::lang::Appendable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::CharArrayWriter& operator=(const ::java::io::CharArrayWriter& x) {obj = x.obj; return *this;}
    ::java::io::CharArrayWriter& operator=(::java::io::CharArrayWriter&& x) {obj = std::move(x.obj); return *this;}
    
    CharArrayWriter();
    CharArrayWriter(int32_t);
    void close() const;
    void flush() const;
    void reset() const;
    int32_t size() const;
    std::vector< uint16_t> toCharArray() const;
    ::java::lang::String toString() const;
    void write(const std::vector< uint16_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void write(const ::java::lang::String&, int32_t, int32_t) const;
    void writeTo(const ::java::io::Writer&) const;
    ::java::io::CharArrayWriter append(uint16_t) const;
    ::java::io::CharArrayWriter append(const ::java::lang::CharSequence&) const;
    ::java::io::CharArrayWriter append(const ::java::lang::CharSequence&, int32_t, int32_t) const;

};
}
}


