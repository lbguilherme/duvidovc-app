#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CRL.hpp"
#include "java.security.cert.X509Extension.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace cert { class X509CRLEntry; } } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class Set; } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class X509CRL : public virtual ::java::lang::Object,
                public virtual ::java::security::cert::CRL,
                public virtual ::java::security::cert::X509Extension {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509CRL(jobject _obj) : ::java::lang::Object(_obj), ::java::security::cert::CRL(_obj), ::java::security::cert::X509Extension(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509CRL(const ::java::security::cert::X509CRL& x) : ::java::lang::Object((jobject)0), ::java::security::cert::CRL((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj;}
    X509CRL(::java::security::cert::X509CRL&& x) : ::java::lang::Object((jobject)0), ::java::security::cert::CRL((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509CRL& operator=(const ::java::security::cert::X509CRL& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509CRL& operator=(::java::security::cert::X509CRL&& x) {obj = std::move(x.obj); return *this;}
    
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    std::vector< int8_t> getEncoded() const ;
    void verify(const ::java::security::PublicKey&) const ;
    void verify(const ::java::security::PublicKey&, const ::java::lang::String&) const ;
    int32_t getVersion() const ;
    ::java::security::Principal getIssuerDN() const ;
    ::javax::security::auth::x500::X500Principal getIssuerX500Principal() const ;
    ::java::util::Date getThisUpdate() const ;
    ::java::util::Date getNextUpdate() const ;
    ::java::security::cert::X509CRLEntry getRevokedCertificate(const ::java::math::BigInteger&) const ;
    ::java::security::cert::X509CRLEntry getRevokedCertificate(const ::java::security::cert::X509Certificate&) const ;
    ::java::util::Set getRevokedCertificates() const ;
    std::vector< int8_t> getTBSCertList() const ;
    std::vector< int8_t> getSignature() const ;
    ::java::lang::String getSigAlgName() const ;
    ::java::lang::String getSigAlgOID() const ;
    std::vector< int8_t> getSigAlgParams() const ;

};
}
}
}


