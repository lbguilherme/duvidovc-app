#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace javax { namespace crypto { class Cipher; } }

namespace javax {
namespace crypto {
class CipherOutputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::FilterOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CipherOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CipherOutputStream(const ::javax::crypto::CipherOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    CipherOutputStream(::javax::crypto::CipherOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::CipherOutputStream& operator=(const ::javax::crypto::CipherOutputStream& x) {obj = x.obj; return *this;}
    ::javax::crypto::CipherOutputStream& operator=(::javax::crypto::CipherOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    CipherOutputStream(const ::java::io::OutputStream&, const ::javax::crypto::Cipher&);
    void write(int32_t) const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void flush() const;
    void close() const;

};
}
}


