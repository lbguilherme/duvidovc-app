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
class PushbackInputStream : public virtual ::java::lang::Object,
                            public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PushbackInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PushbackInputStream(const ::java::io::PushbackInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    PushbackInputStream(::java::io::PushbackInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::PushbackInputStream& operator=(const ::java::io::PushbackInputStream& x) {obj = x.obj; return *this;}
    ::java::io::PushbackInputStream& operator=(::java::io::PushbackInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    PushbackInputStream(const ::java::io::InputStream&);
    PushbackInputStream(const ::java::io::InputStream&, int32_t);
    int32_t available() const;
    void close() const;
    bool markSupported() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int64_t skip(int64_t) const;
    void unread(const std::vector< int8_t>&) const;
    void unread(const std::vector< int8_t>&, int32_t, int32_t) const;
    void unread(int32_t) const;
    void mark(int32_t) const;
    void reset() const;

};
}
}


