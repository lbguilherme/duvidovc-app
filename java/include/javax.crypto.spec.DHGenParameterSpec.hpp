#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"


namespace javax {
namespace crypto {
namespace spec {
class DHGenParameterSpec : public virtual ::java::lang::Object,
                           public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHGenParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHGenParameterSpec(const ::javax::crypto::spec::DHGenParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    DHGenParameterSpec(::javax::crypto::spec::DHGenParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::DHGenParameterSpec& operator=(const ::javax::crypto::spec::DHGenParameterSpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::DHGenParameterSpec& operator=(::javax::crypto::spec::DHGenParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    DHGenParameterSpec(int32_t, int32_t);
    int32_t getPrimeSize() const ;
    int32_t getExponentSize() const ;

};
}
}
}


