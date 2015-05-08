#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.RSAPrivateKeySpec.hpp"

namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { namespace spec { class RSAOtherPrimeInfo; } } }

namespace java {
namespace security {
namespace spec {
class RSAMultiPrimePrivateCrtKeySpec : public virtual ::java::lang::Object,
                                       public virtual ::java::security::spec::RSAPrivateKeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAMultiPrimePrivateCrtKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj), ::java::security::spec::RSAPrivateKeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAMultiPrimePrivateCrtKeySpec(const ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {obj = x.obj;}
    RSAMultiPrimePrivateCrtKeySpec(::java::security::spec::RSAMultiPrimePrivateCrtKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0), ::java::security::spec::RSAPrivateKeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec& operator=(const ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAMultiPrimePrivateCrtKeySpec& operator=(::java::security::spec::RSAMultiPrimePrivateCrtKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    RSAMultiPrimePrivateCrtKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const std::vector< ::java::security::spec::RSAOtherPrimeInfo>&);
    ::java::math::BigInteger getCrtCoefficient() const ;
    std::vector< ::java::security::spec::RSAOtherPrimeInfo> getOtherPrimeInfo() const ;
    ::java::math::BigInteger getPrimeExponentP() const ;
    ::java::math::BigInteger getPrimeExponentQ() const ;
    ::java::math::BigInteger getPrimeP() const ;
    ::java::math::BigInteger getPrimeQ() const ;
    ::java::math::BigInteger getPublicExponent() const ;

};
}
}
}


