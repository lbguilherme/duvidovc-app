#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PublicKey.hpp"
#include "java.security.interfaces.RSAKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class RSAPublicKey : public virtual ::java::lang::Object,
                     public virtual ::java::security::PublicKey,
                     public virtual ::java::security::interfaces::RSAKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPublicKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PublicKey(_obj), ::java::security::interfaces::RSAKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPublicKey(const ::java::security::interfaces::RSAPublicKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0) {obj = x.obj;}
    RSAPublicKey(::java::security::interfaces::RSAPublicKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::RSAPublicKey& operator=(const ::java::security::interfaces::RSAPublicKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::RSAPublicKey& operator=(::java::security::interfaces::RSAPublicKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getPublicExponent() const ;

};
}
}
}


