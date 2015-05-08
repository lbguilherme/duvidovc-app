#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace io { class OutputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Key; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { class KeyStore_Entry; } }
namespace java { namespace security { class KeyStore_LoadStoreParameter; } }
namespace java { namespace security { class KeyStore_ProtectionParameter; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
class KeyStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStore(const ::java::security::KeyStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStore(::java::security::KeyStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStore& operator=(const ::java::security::KeyStore& x) {obj = x.obj; return *this;}
    ::java::security::KeyStore& operator=(::java::security::KeyStore&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::security::KeyStore getInstance(const ::java::lang::String&);
    static ::java::security::KeyStore getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::KeyStore getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    static ::java::lang::String getDefaultType();
    ::java::security::Provider getProvider() const ;
    ::java::lang::String getType() const ;
    ::java::security::Key getKey(const ::java::lang::String&, const std::vector< uint16_t>&) const ;
    std::vector< ::java::security::cert::Certificate> getCertificateChain(const ::java::lang::String&) const ;
    ::java::security::cert::Certificate getCertificate(const ::java::lang::String&) const ;
    ::java::util::Date getCreationDate(const ::java::lang::String&) const ;
    void setKeyEntry(const ::java::lang::String&, const ::java::security::Key&, const std::vector< uint16_t>&, const std::vector< ::java::security::cert::Certificate>&) const ;
    void setKeyEntry(const ::java::lang::String&, const std::vector< int8_t>&, const std::vector< ::java::security::cert::Certificate>&) const ;
    void setCertificateEntry(const ::java::lang::String&, const ::java::security::cert::Certificate&) const ;
    void deleteEntry(const ::java::lang::String&) const ;
    ::java::util::Enumeration aliases() const ;
    bool containsAlias(const ::java::lang::String&) const ;
    int32_t size() const ;
    bool isKeyEntry(const ::java::lang::String&) const ;
    bool isCertificateEntry(const ::java::lang::String&) const ;
    ::java::lang::String getCertificateAlias(const ::java::security::cert::Certificate&) const ;
    void store(const ::java::io::OutputStream&, const std::vector< uint16_t>&) const ;
    void store(const ::java::security::KeyStore_LoadStoreParameter&) const ;
    void load(const ::java::io::InputStream&, const std::vector< uint16_t>&) const ;
    void load(const ::java::security::KeyStore_LoadStoreParameter&) const ;
    ::java::security::KeyStore_Entry getEntry(const ::java::lang::String&, const ::java::security::KeyStore_ProtectionParameter&) const ;
    void setEntry(const ::java::lang::String&, const ::java::security::KeyStore_Entry&, const ::java::security::KeyStore_ProtectionParameter&) const ;
    bool entryInstanceOf(const ::java::lang::String&, const ::java::lang::Class&) const ;

};
}
}

#include "java.security.KeyStore_Builder.hpp"
#include "java.security.KeyStore_CallbackHandlerProtection.hpp"
#include "java.security.KeyStore_Entry.hpp"
#include "java.security.KeyStore_LoadStoreParameter.hpp"
#include "java.security.KeyStore_PasswordProtection.hpp"
#include "java.security.KeyStore_PrivateKeyEntry.hpp"
#include "java.security.KeyStore_ProtectionParameter.hpp"
#include "java.security.KeyStore_SecretKeyEntry.hpp"
#include "java.security.KeyStore_TrustedCertificateEntry.hpp"

