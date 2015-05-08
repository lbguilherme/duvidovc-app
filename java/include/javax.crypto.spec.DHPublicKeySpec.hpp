#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.spec.KeySpec.hpp"

namespace java { namespace math { class BigInteger; } }

namespace javax {
namespace crypto {
namespace spec {
class DHPublicKeySpec : public virtual ::java::lang::Object,
                        public virtual ::java::security::spec::KeySpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHPublicKeySpec(jobject _obj) : ::java::lang::Object(_obj), ::java::security::spec::KeySpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHPublicKeySpec(const ::javax::crypto::spec::DHPublicKeySpec& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj;}
    DHPublicKeySpec(::javax::crypto::spec::DHPublicKeySpec&& x) : ::java::lang::Object((jobject)0), ::java::security::spec::KeySpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::spec::DHPublicKeySpec& operator=(const ::javax::crypto::spec::DHPublicKeySpec& x) {obj = x.obj; return *this;}
    ::javax::crypto::spec::DHPublicKeySpec& operator=(::javax::crypto::spec::DHPublicKeySpec&& x) {obj = std::move(x.obj); return *this;}
    
    DHPublicKeySpec(const ::java::math::BigInteger&, const ::java::math::BigInteger&, const ::java::math::BigInteger&);
    ::java::math::BigInteger getY() const ;
    ::java::math::BigInteger getP() const ;
    ::java::math::BigInteger getG() const ;

};
}
}
}


