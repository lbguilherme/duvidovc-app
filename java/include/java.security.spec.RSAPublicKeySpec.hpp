#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class RSAPublicKeySpec : public virtual ::java::lang::Object,
                         public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPublicKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPublicKeySpec(const ::java::security::spec::RSAPublicKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    RSAPublicKeySpec(::java::security::spec::RSAPublicKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAPublicKeySpec& operator=(const ::java::security::spec::RSAPublicKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAPublicKeySpec& operator=(::java::security::spec::RSAPublicKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    RSAPublicKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getModulus() const;
    ::java::math::BigInteger getPublicExponent() const;

};
}
}
}


