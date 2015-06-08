#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace spec {
class RSAOtherPrimeInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAOtherPrimeInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAOtherPrimeInfo(const ::java::security::spec::RSAOtherPrimeInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RSAOtherPrimeInfo(::java::security::spec::RSAOtherPrimeInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAOtherPrimeInfo& operator=(const ::java::security::spec::RSAOtherPrimeInfo& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAOtherPrimeInfo& operator=(::java::security::spec::RSAOtherPrimeInfo&& x) {obj = std::move(x.obj); return *this;}
    
    RSAOtherPrimeInfo(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getCrtCoefficient() const;
    ::java::math::BigInteger getPrime() const;
    ::java::math::BigInteger getExponent() const;

};
}
}
}


