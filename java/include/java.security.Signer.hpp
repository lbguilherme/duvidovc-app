#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Identity.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class IdentityScope; } }
namespace java { namespace security { class KeyPair; } }
namespace java { namespace security { class PrivateKey; } }

namespace java {
namespace security {
class Signer : public virtual ::java::lang::Object,
               public virtual ::java::security::Identity {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Signer(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Identity(_obj), ::java::security::Principal(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Signer(const ::java::security::Signer& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj;}
    Signer(::java::security::Signer&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Identity((jobject)0), ::java::security::Principal((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Signer& operator=(const ::java::security::Signer& x) {obj = x.obj; return *this;}
    ::java::security::Signer& operator=(::java::security::Signer&& x) {obj = std::move(x.obj); return *this;}
    
    Signer(const ::java::lang::String&);
    Signer(const ::java::lang::String&, const ::java::security::IdentityScope&);
    ::java::security::PrivateKey getPrivateKey() const ;
    void setKeyPair(const ::java::security::KeyPair&) const ;
    ::java::lang::String toString() const ;

};
}
}


