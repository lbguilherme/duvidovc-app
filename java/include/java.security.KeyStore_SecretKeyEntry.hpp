#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyStore_Entry.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace crypto { class SecretKey; } }

namespace java {
namespace security {
class KeyStore_SecretKeyEntry : public virtual ::java::lang::Object,
                                public virtual ::java::security::KeyStore_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_SecretKeyEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyStore_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_SecretKeyEntry(const ::java::security::KeyStore_SecretKeyEntry& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj;}
    KeyStore_SecretKeyEntry(::java::security::KeyStore_SecretKeyEntry&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_SecretKeyEntry& operator=(const ::java::security::KeyStore_SecretKeyEntry& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_SecretKeyEntry& operator=(::java::security::KeyStore_SecretKeyEntry&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStore_SecretKeyEntry(const ::javax::crypto::SecretKey&);
    ::javax::crypto::SecretKey getSecretKey() const;
    ::java::lang::String toString() const;

};
}
}


