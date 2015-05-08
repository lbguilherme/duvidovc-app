#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.Certificate.hpp"
#include "java.security.cert.X509Extension.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class List; } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class X509Certificate : public virtual ::java::lang::Object,
                        public virtual ::java::security::cert::Certificate,
                        public virtual ::java::security::cert::X509Extension {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509Certificate(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::cert::Certificate(_obj), ::java::security::cert::X509Extension(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509Certificate(const ::java::security::cert::X509Certificate& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::cert::Certificate((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj;}
    X509Certificate(::java::security::cert::X509Certificate&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::cert::Certificate((jobject)0), ::java::security::cert::X509Extension((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509Certificate& operator=(const ::java::security::cert::X509Certificate& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509Certificate& operator=(::java::security::cert::X509Certificate&& x) {obj = std::move(x.obj); return *this;}
    
    void checkValidity() const ;
    void checkValidity(const ::java::util::Date&) const ;
    int32_t getVersion() const ;
    ::java::math::BigInteger getSerialNumber() const ;
    ::java::security::Principal getIssuerDN() const ;
    ::javax::security::auth::x500::X500Principal getIssuerX500Principal() const ;
    ::java::security::Principal getSubjectDN() const ;
    ::javax::security::auth::x500::X500Principal getSubjectX500Principal() const ;
    ::java::util::Date getNotBefore() const ;
    ::java::util::Date getNotAfter() const ;
    std::vector< int8_t> getTBSCertificate() const ;
    std::vector< int8_t> getSignature() const ;
    ::java::lang::String getSigAlgName() const ;
    ::java::lang::String getSigAlgOID() const ;
    std::vector< int8_t> getSigAlgParams() const ;
    std::vector< bool> getIssuerUniqueID() const ;
    std::vector< bool> getSubjectUniqueID() const ;
    std::vector< bool> getKeyUsage() const ;
    ::java::util::List getExtendedKeyUsage() const ;
    int32_t getBasicConstraints() const ;
    ::java::util::Collection getSubjectAlternativeNames() const ;
    ::java::util::Collection getIssuerAlternativeNames() const ;

};
}
}
}


