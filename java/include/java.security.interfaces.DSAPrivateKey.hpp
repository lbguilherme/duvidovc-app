#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PrivateKey.hpp"
#include "java.security.interfaces.DSAKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class DSAPrivateKey : public virtual ::java::lang::Object,
                      public virtual ::java::security::PrivateKey,
                      public virtual ::java::security::interfaces::DSAKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAPrivateKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PrivateKey(_obj), ::java::security::interfaces::DSAKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAPrivateKey(const ::java::security::interfaces::DSAPrivateKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::DSAKey((jobject)0) {obj = x.obj;}
    DSAPrivateKey(::java::security::interfaces::DSAPrivateKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::java::security::interfaces::DSAKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::DSAPrivateKey& operator=(const ::java::security::interfaces::DSAPrivateKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::DSAPrivateKey& operator=(::java::security::interfaces::DSAPrivateKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getX() const ;

};
}
}
}


