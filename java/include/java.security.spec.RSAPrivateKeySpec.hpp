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
class RSAPrivateKeySpec : public virtual ::java::lang::Object,
                          public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPrivateKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPrivateKeySpec(const ::java::security::spec::RSAPrivateKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    RSAPrivateKeySpec(::java::security::spec::RSAPrivateKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::RSAPrivateKeySpec& operator=(const ::java::security::spec::RSAPrivateKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::RSAPrivateKeySpec& operator=(::java::security::spec::RSAPrivateKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    RSAPrivateKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getModulus() const;
    ::java::math::BigInteger getPrivateExponent() const;

};
}
}
}


