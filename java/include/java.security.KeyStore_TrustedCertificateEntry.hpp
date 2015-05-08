#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.KeyStore_Entry.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
class KeyStore_TrustedCertificateEntry : public virtual ::java::lang::Object,
                                         public virtual ::java::security::KeyStore_Entry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore_TrustedCertificateEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::security::KeyStore_Entry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore_TrustedCertificateEntry(const ::java::security::KeyStore_TrustedCertificateEntry& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj;}
    KeyStore_TrustedCertificateEntry(::java::security::KeyStore_TrustedCertificateEntry&& x) : ::java::lang::Object((jobject)0), ::java::security::KeyStore_Entry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore_TrustedCertificateEntry& operator=(const ::java::security::KeyStore_TrustedCertificateEntry& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore_TrustedCertificateEntry& operator=(::java::security::KeyStore_TrustedCertificateEntry&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStore_TrustedCertificateEntry(const ::java::security::cert::Certificate&);
    ::java::security::cert::Certificate getTrustedCertificate() const ;
    ::java::lang::String toString() const ;

};
}
}


