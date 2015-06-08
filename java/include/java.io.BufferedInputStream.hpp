#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }

namespace java {
namespace io {
class BufferedInputStream : public virtual ::java::lang::Object,
                            public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BufferedInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BufferedInputStream(const ::java::io::BufferedInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    BufferedInputStream(::java::io::BufferedInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::BufferedInputStream& operator=(const ::java::io::BufferedInputStream& x) {obj = x.obj; return *this;}
    ::java::io::BufferedInputStream& operator=(::java::io::BufferedInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    BufferedInputStream(const ::java::io::InputStream&);
    BufferedInputStream(const ::java::io::InputStream&, int32_t);
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


