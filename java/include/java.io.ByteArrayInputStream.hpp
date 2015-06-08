#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"


namespace java {
namespace io {
class ByteArrayInputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ByteArrayInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ByteArrayInputStream(const ::java::io::ByteArrayInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    ByteArrayInputStream(::java::io::ByteArrayInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::ByteArrayInputStream& operator=(const ::java::io::ByteArrayInputStream& x) {obj = x.obj; return *this;}
    ::java::io::ByteArrayInputStream& operator=(::java::io::ByteArrayInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ByteArrayInputStream(const std::vector< int8_t>&);
    ByteArrayInputStream(const std::vector< int8_t>&, int32_t, int32_t);
    int32_t available() const;
    void close() const;
    void mark(int32_t) const;
    bool markSupported() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    void reset() const;
    int64_t skip(int64_t) const;

};
}
}


