#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace javax { namespace crypto { class Cipher; } }

namespace javax {
namespace crypto {
class CipherInputStream : public virtual ::java::lang::Object,
                          public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CipherInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CipherInputStream(const ::javax::crypto::CipherInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    CipherInputStream(::javax::crypto::CipherInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::CipherInputStream& operator=(const ::javax::crypto::CipherInputStream& x) {obj = x.obj; return *this;}
    ::javax::crypto::CipherInputStream& operator=(::javax::crypto::CipherInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    CipherInputStream(const ::java::io::InputStream&, const ::javax::crypto::Cipher&);
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int64_t skip(int64_t) const ;
    int32_t available() const ;
    void close() const ;
    bool markSupported() const ;

};
}
}


