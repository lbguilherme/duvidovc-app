#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class String; } }

namespace java {
namespace io {
class ByteArrayOutputStream : public virtual ::java::lang::Object,
                              public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteArrayOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteArrayOutputStream(const ::java::io::ByteArrayOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ByteArrayOutputStream(::java::io::ByteArrayOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ByteArrayOutputStream& operator=(const ::java::io::ByteArrayOutputStream& x) {obj = x.obj; return *this;}
    ::java::io::ByteArrayOutputStream& operator=(::java::io::ByteArrayOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ByteArrayOutputStream();
    ByteArrayOutputStream(int32_t);
    void close() const;
    void reset() const;
    int32_t size() const;
    std::vector< int8_t> toByteArray() const;
    ::java::lang::String toString() const;
    ::java::lang::String toString(int32_t) const;
    ::java::lang::String toString(const ::java::lang::String&) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(int32_t) const;
    void writeTo(const ::java::io::OutputStream&) const;

};
}
}


