#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyStore_Entry.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class PrivateKey; } }
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
class KeyStore_PrivateKeyEntry : public virtual ::java::lang::Object,
                                 public virtual ::java::security::KeyStore_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_PrivateKeyEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyStore_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_PrivateKeyEntry(const ::java::security::KeyStore_PrivateKeyEntry& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj;}
    KeyStore_PrivateKeyEntry(::java::security::KeyStore_PrivateKeyEntry&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_PrivateKeyEntry& operator=(const ::java::security::KeyStore_PrivateKeyEntry& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_PrivateKeyEntry& operator=(::java::security::KeyStore_PrivateKeyEntry&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStore_PrivateKeyEntry(const ::java::security::PrivateKey&, const std::vector< ::java::security::cert::Certificate>&);
    ::java::security::PrivateKey getPrivateKey() const ;
    std::vector< ::java::security::cert::Certificate> getCertificateChain() const ;
    ::java::security::cert::Certificate getCertificate() const ;
    ::java::lang::String toString() const ;

};
}
}


