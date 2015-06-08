#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.interfaces.RSAPrivateKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class RSAPrivateCrtKey : public virtual ::java::lang::Object,
                         public virtual ::java::security::interfaces::RSAPrivateKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPrivateCrtKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PrivateKey(_obj), ::java::security::interfaces::RSAKey(_obj), ::java::security::interfaces::RSAPrivateKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPrivateCrtKey(const ::java::security::interfaces::RSAPrivateCrtKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0), ::java::security::interfaces::RSAPrivateKey((jobject)0) {obj = x.obj;}
    RSAPrivateCrtKey(::java::security::interfaces::RSAPrivateCrtKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0), ::java::security::interfaces::RSAPrivateKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::RSAPrivateCrtKey& operator=(const ::java::security::interfaces::RSAPrivateCrtKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::RSAPrivateCrtKey& operator=(::java::security::interfaces::RSAPrivateCrtKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getCrtCoefficient() const;
    ::java::math::BigInteger getPrimeP() const;
    ::java::math::BigInteger getPrimeQ() const;
    ::java::math::BigInteger getPrimeExponentP() const;
    ::java::math::BigInteger getPrimeExponentQ() const;
    ::java::math::BigInteger getPublicExponent() const;

};
}
}
}


