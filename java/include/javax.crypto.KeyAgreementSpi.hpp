#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace crypto {
class KeyAgreementSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyAgreementSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyAgreementSpi(const ::javax::crypto::KeyAgreementSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyAgreementSpi(::javax::crypto::KeyAgreementSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::KeyAgreementSpi& operator=(const ::javax::crypto::KeyAgreementSpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::KeyAgreementSpi& operator=(::javax::crypto::KeyAgreementSpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyAgreementSpi();

};
}
}


