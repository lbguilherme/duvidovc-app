#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace javax {
namespace crypto {
class ExemptionMechanismSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ExemptionMechanismSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ExemptionMechanismSpi(const ::javax::crypto::ExemptionMechanismSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ExemptionMechanismSpi(::javax::crypto::ExemptionMechanismSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::ExemptionMechanismSpi& operator=(const ::javax::crypto::ExemptionMechanismSpi& x) {obj = x.obj; return *this;}
    ::javax::crypto::ExemptionMechanismSpi& operator=(::javax::crypto::ExemptionMechanismSpi&& x) {obj = std::move(x.obj); return *this;}
    
    ExemptionMechanismSpi();

};
}
}


