#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.PublicKey.hpp"
#include "javax.crypto.interfaces.DHKey.hpp"

namespace java { namespace math { class BigInteger; } }

namespace javax {
namespace crypto {
namespace interfaces {
class DHPublicKey : public virtual ::java::lang::Object,
                    public virtual ::java::security::PublicKey,
                    public virtual ::javax::crypto::interfaces::DHKey {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DHPublicKey(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Key(_obj), ::java::security::PublicKey(_obj), ::javax::crypto::interfaces::DHKey(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DHPublicKey(const ::javax::crypto::interfaces::DHPublicKey& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::javax::crypto::interfaces::DHKey((jobject)0) {obj = x.obj;}
    DHPublicKey(::javax::crypto::interfaces::DHPublicKey&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Key((jobject)0), ::java::security::PublicKey((jobject)0), ::javax::crypto::interfaces::DHKey((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::crypto::interfaces::DHPublicKey& operator=(const ::javax::crypto::interfaces::DHPublicKey& x) {obj = x.obj; return *this;}
    ::javax::crypto::interfaces::DHPublicKey& operator=(::javax::crypto::interfaces::DHPublicKey&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::math::BigInteger getY() const ;

};
}
}
}


