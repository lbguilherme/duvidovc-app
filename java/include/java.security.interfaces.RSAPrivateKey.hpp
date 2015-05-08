#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PrivateKey.hpp"
#include "java.security.interfaces.RSAKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class RSAPrivateKey : public virtual ::java::lang::Object,
                      public virtual ::java::security::PrivateKey,
                      public virtual ::java::security::interfaces::RSAKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSAPrivateKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PrivateKey(_obj), ::java::security::interfaces::RSAKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSAPrivateKey(const ::java::security::interfaces::RSAPrivateKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0) {obj = x.obj;}
    RSAPrivateKey(::java::security::interfaces::RSAPrivateKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::RSAKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::RSAPrivateKey& operator=(const ::java::security::interfaces::RSAPrivateKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::RSAPrivateKey& operator=(::java::security::interfaces::RSAPrivateKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getPrivateExponent() const ;

};
}
}
}


