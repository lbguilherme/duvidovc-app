#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PrivateKey.hpp"
#include "javax.crypto.interfaces.DHKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace javax {
namespace crypto {
namespace interfaces {
class DHPrivateKey : public virtual ::java::lang::Object,
                     public virtual ::java::security::PrivateKey,
                     public virtual ::javax::crypto::interfaces::DHKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHPrivateKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PrivateKey(_obj), ::javax::crypto::interfaces::DHKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHPrivateKey(const ::javax::crypto::interfaces::DHPrivateKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::javax::crypto::interfaces::DHKey((jobject)0) {obj = x.obj;}
    DHPrivateKey(::javax::crypto::interfaces::DHPrivateKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PrivateKey((jobject)0), ::javax::crypto::interfaces::DHKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::interfaces::DHPrivateKey& operator=(const ::javax::crypto::interfaces::DHPrivateKey& x) {obj = x.obj; return *this;}
    ::javax::crypto::interfaces::DHPrivateKey& operator=(::javax::crypto::interfaces::DHPrivateKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getX() const ;

};
}
}
}


