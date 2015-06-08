#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Closeable.hpp"
#include "java.lang.Readable.hpp"

namespace java { namespace nio { class CharBuffer; } }

namespace java {
namespace io {
class Reader : public virtual ::java::lang::Object,
               public virtual ::java::io::Closeable,
               public virtual ::java::lang::Readable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Reader(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::lang::Readable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Reader(const ::java::io::Reader& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj;}
    Reader(::java::io::Reader&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::lang::Readable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::io::Reader& operator=(const ::java::io::Reader& x) {obj = x.obj; return *this;}
    ::java::io::Reader& operator=(::java::io::Reader&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;
    void mark(int32_t) const;
    bool markSupported() const;
    int32_t read() const;
    int32_t read(const std::vector< uint16_t>&) const;
    int32_t read(const std::vector< uint16_t>&, int32_t, int32_t) const;
    bool ready() const;
    void reset() const;
    int64_t skip(int64_t) const;
    int32_t read(const ::java::nio::CharBuffer&) const;

};
}
}


