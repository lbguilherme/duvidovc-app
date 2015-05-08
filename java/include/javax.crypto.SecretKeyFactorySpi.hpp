#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace crypto {
class SecretKeyFactorySpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SecretKeyFactorySpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SecretKeyFactorySpi(const ::javax::crypto::SecretKeyFactorySpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SecretKeyFactorySpi(::javax::crypto::SecretKeyFactorySpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::SecretKeyFactorySpi& operator=(const ::javax::crypto::SecretKeyFactorySpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::SecretKeyFactorySpi& operator=(::javax::crypto::SecretKeyFactorySpi&& x) {obj = std::move(x.obj); return *this;}
    
    SecretKeyFactorySpi();

};
}
}


