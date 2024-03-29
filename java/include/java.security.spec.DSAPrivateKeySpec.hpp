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
class DSAPrivateKeySpec : public virtual ::java::lang::Object,
                          public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAPrivateKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAPrivateKeySpec(const ::java::security::spec::DSAPrivateKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    DSAPrivateKeySpec(::java::security::spec::DSAPrivateKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::spec::DSAPrivateKeySpec& operator=(const ::java::security::spec::DSAPrivateKeySpec& x) {obj = x.obj; return *this;}
    ::java::security::spec::DSAPrivateKeySpec& operator=(::java::security::spec::DSAPrivateKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    DSAPrivateKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getG() const;
    ::java::math::BigInteger getP() const;
    ::java::math::BigInteger getQ() const;
    ::java::math::BigInteger getX() const;

};
}
}
}


