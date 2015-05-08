#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace crypto {
class CipherSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CipherSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CipherSpi(const ::javax::crypto::CipherSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CipherSpi(::javax::crypto::CipherSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::CipherSpi& operator=(const ::javax::crypto::CipherSpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::CipherSpi& operator=(::javax::crypto::CipherSpi&& x) {obj = std::move(x.obj); return *this;}
    
    CipherSpi();

};
}
}


