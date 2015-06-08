#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.RSAPrivateKeySpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class RSAPrivateCrtKeySpec : public virtual ::java::lang::Object,
                             public virtual ::java::security::spec::RSAPrivateKeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPrivateCrtKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj), ::java::security::spec::RSAPrivateKeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPrivateCrtKeySpec(const ::java::security::spec::RSAPrivateCrtKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {obj = x.obj;}
    RSAPrivateCrtKeySpec(::java::security::spec::RSAPrivateCrtKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAPrivateCrtKeySpec& operator=(const ::java::security::spec::RSAPrivateCrtKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAPrivateCrtKeySpec& operator=(::java::security::spec::RSAPrivateCrtKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    RSAPrivateCrtKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getCrtCoefficient() const;
    ::java::math::BigInteger getPrimeExponentP() const;
    ::java::math::BigInteger getPrimeExponentQ() const;
    ::java::math::BigInteger getPrimeP() const;
    ::java::math::BigInteger getPrimeQ() const;
    ::java::math::BigInteger getPublicExponent() const;

};
}
}
}


