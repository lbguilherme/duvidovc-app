#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PublicKey.hpp"
#include "java.security.interfaces.DSAKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace java {
namespace security {
namespace interfaces {
class DSAPublicKey : public virtual ::java::lang::Object,
                     public virtual ::java::security::PublicKey,
                     public virtual ::java::security::interfaces::DSAKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DSAPublicKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PublicKey(_obj), ::java::security::interfaces::DSAKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DSAPublicKey(const ::java::security::interfaces::DSAPublicKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::DSAKey((jobject)0) {obj = x.obj;}
    DSAPublicKey(::java::security::interfaces::DSAPublicKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::java::security::interfaces::DSAKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::interfaces::DSAPublicKey& operator=(const ::java::security::interfaces::DSAPublicKey& x) {obj = x.obj; return *this;}
    ::java::security::interfaces::DSAPublicKey& operator=(::java::security::interfaces::DSAPublicKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getY() const ;

};
}
}
}


