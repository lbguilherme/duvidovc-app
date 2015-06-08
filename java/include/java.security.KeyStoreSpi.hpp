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
namespace java { namespace security { class KeyStore_Entry; } }
namespace java { namespace security { class KeyStore_LoadStoreParameter; } }
namespace java { namespace security { class KeyStore_ProtectionParameter; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
class KeyStoreSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit KeyStoreSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    KeyStoreSpi(const ::java::security::KeyStoreSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    KeyStoreSpi(::java::security::KeyStoreSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::KeyStoreSpi& operator=(const ::java::security::KeyStoreSpi& x) {obj = x.obj; return *this;}
    ::java::security::KeyStoreSpi& operator=(::java::security::KeyStoreSpi&& x) {obj = std::move(x.obj); return *this;}
    
    KeyStoreSpi();
    ::java::security::Key engineGetKey(const ::java::lang::String&, const std::vector< uint16_t>&) const;
    std::vector< ::java::security::cert::Certificate> engineGetCertificateChain(const ::java::lang::String&) const;
    ::java::security::cert::Certificate engineGetCertificate(const ::java::lang::String&) const;
    ::java::util::Date engineGetCreationDate(const ::java::lang::String&) const;
    void engineSetKeyEntry(const ::java::lang::String&, const ::java::security::Key&, const std::vector< uint16_t>&, const std::vector< ::java::security::cert::Certificate>&) const;
    void engineSetKeyEntry(const ::java::lang::String&, const std::vector< int8_t>&, const std::vector< ::java::security::cert::Certificate>&) const;
    void engineSetCertificateEntry(const ::java::lang::String&, const ::java::security::cert::Certificate&) const;
    void engineDeleteEntry(const ::java::lang::String&) const;
    ::java::util::Enumeration engineAliases() const;
    bool engineContainsAlias(const ::java::lang::String&) const;
    int32_t engineSize() const;
    bool engineIsKeyEntry(const ::java::lang::String&) const;
    bool engineIsCertificateEntry(const ::java::lang::String&) const;
    ::java::lang::String engineGetCertificateAlias(const ::java::security::cert::Certificate&) const;
    void engineStore(const ::java::io::OutputStream&, const std::vector< uint16_t>&) const;
    void engineStore(const ::java::security::KeyStore_LoadStoreParameter&) const;
    void engineLoad(const ::java::io::InputStream&, const std::vector< uint16_t>&) const;
    void engineLoad(const ::java::security::KeyStore_LoadStoreParameter&) const;
    ::java::security::KeyStore_Entry engineGetEntry(const ::java::lang::String&, const ::java::security::KeyStore_ProtectionParameter&) const;
    void engineSetEntry(const ::java::lang::String&, const ::java::security::KeyStore_Entry&, const ::java::security::KeyStore_ProtectionParameter&) const;
    bool engineEntryInstanceOf(const ::java::lang::String&, const ::java::lang::Class&) const;

};
}
}


