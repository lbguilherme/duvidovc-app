#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertSelector.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Set; } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class X509CertSelector : public virtual ::java::lang::Object,
                         public virtual ::java::security::cert::CertSelector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509CertSelector(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertSelector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509CertSelector(const ::java::security::cert::X509CertSelector& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertSelector((jobject)0) {obj = x.obj;}
    X509CertSelector(::java::security::cert::X509CertSelector&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertSelector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509CertSelector& operator=(const ::java::security::cert::X509CertSelector& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509CertSelector& operator=(::java::security::cert::X509CertSelector&& x) {obj = std::move(x.obj); return *this;}
    
    X509CertSelector();
    void setCertificate(const ::java::security::cert::X509Certificate&) const;
    ::java::security::cert::X509Certificate getCertificate() const;
    void setSerialNumber(const ::java::math::BigInteger&) const;
    ::java::math::BigInteger getSerialNumber() const;
    void setIssuer(const ::javax::security::auth::x500::X500Principal&) const;
    ::javax::security::auth::x500::X500Principal getIssuer() const;
    void setIssuer(const ::java::lang::String&) const;
    ::java::lang::String getIssuerAsString() const;
    void setIssuer(const std::vector< int8_t>&) const;
    std::vector< int8_t> getIssuerAsBytes() const;
    void setSubject(const ::javax::security::auth::x500::X500Principal&) const;
    ::javax::security::auth::x500::X500Principal getSubject() const;
    void setSubject(const ::java::lang::String&) const;
    ::java::lang::String getSubjectAsString() const;
    void setSubject(const std::vector< int8_t>&) const;
    std::vector< int8_t> getSubjectAsBytes() const;
    void setSubjectKeyIdentifier(const std::vector< int8_t>&) const;
    std::vector< int8_t> getSubjectKeyIdentifier() const;
    void setAuthorityKeyIdentifier(const std::vector< int8_t>&) const;
    std::vector< int8_t> getAuthorityKeyIdentifier() const;
    void setCertificateValid(const ::java::util::Date&) const;
    ::java::util::Date getCertificateValid() const;
    void setPrivateKeyValid(const ::java::util::Date&) const;
    ::java::util::Date getPrivateKeyValid() const;
    void setSubjectPublicKeyAlgID(const ::java::lang::String&) const;
    ::java::lang::String getSubjectPublicKeyAlgID() const;
    void setSubjectPublicKey(const ::java::security::PublicKey&) const;
    void setSubjectPublicKey(const std::vector< int8_t>&) const;
    ::java::security::PublicKey getSubjectPublicKey() const;
    void setKeyUsage(const std::vector< bool>&) const;
    std::vector< bool> getKeyUsage() const;
    void setExtendedKeyUsage(const ::java::util::Set&) const;
    ::java::util::Set getExtendedKeyUsage() const;
    void setMatchAllSubjectAltNames(bool) const;
    bool getMatchAllSubjectAltNames() const;
    void setSubjectAlternativeNames(const ::java::util::Collection&) const;
    void addSubjectAlternativeName(int32_t, const ::java::lang::String&) const;
    void addSubjectAlternativeName(int32_t, const std::vector< int8_t>&) const;
    ::java::util::Collection getSubjectAlternativeNames() const;
    void setNameConstraints(const std::vector< int8_t>&) const;
    std::vector< int8_t> getNameConstraints() const;
    void setBasicConstraints(int32_t) const;
    int32_t getBasicConstraints() const;
    void setPolicy(const ::java::util::Set&) const;
    ::java::util::Set getPolicy() const;
    void addPathToName(int32_t, const ::java::lang::String&) const;
    void setPathToNames(const ::java::util::Collection&) const;
    void addPathToName(int32_t, const std::vector< int8_t>&) const;
    ::java::util::Collection getPathToNames() const;
    ::java::lang::String toString() const;
    bool match(const ::java::security::cert::Certificate&) const;
    ::java::lang::Object clone() const;

};
}
}
}


