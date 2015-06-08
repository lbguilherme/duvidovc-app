#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.AlgorithmParameterSpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class RSAKeyGenParameterSpec : public virtual ::java::lang::Object,
                               public virtual ::java::security::spec::AlgorithmParameterSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAKeyGenParameterSpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::AlgorithmParameterSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAKeyGenParameterSpec(const ::java::security::spec::RSAKeyGenParameterSpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj;}
    RSAKeyGenParameterSpec(::java::security::spec::RSAKeyGenParameterSpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::AlgorithmParameterSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAKeyGenParameterSpec& operator=(const ::java::security::spec::RSAKeyGenParameterSpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAKeyGenParameterSpec& operator=(::java::security::spec::RSAKeyGenParameterSpec&& x) {obj = std::move(x.obj); return *this;}
    
    RSAKeyGenParameterSpec(int32_t, const ::java::math::BigInteger&);
    int32_t getKeysize() const;
    ::java::math::BigInteger getPublicExponent() const;

};
}
}
}


