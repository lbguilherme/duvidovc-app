#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CRLSelector.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace math { class BigInteger; } }
namespace java { namespace security { namespace cert { class CRL; } } }
namespace java { namespace security { namespace cert { class X509Certificate; } } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Date; } }
namespace javax { namespace security { namespace auth { namespace x500 { class X500Principal; } } } }

namespace java {
namespace security {
namespace cert {
class X509CRLSelector : public virtual ::java::lang::Object,
                        public virtual ::java::security::cert::CRLSelector {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit X509CRLSelector(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CRLSelector(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    X509CRLSelector(const ::java::security::cert::X509CRLSelector& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CRLSelector((jobject)0) {obj = x.obj;}
    X509CRLSelector(::java::security::cert::X509CRLSelector&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CRLSelector((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::X509CRLSelector& operator=(const ::java::security::cert::X509CRLSelector& x) {obj = x.obj; return *this;}
    ::java::security::cert::X509CRLSelector& operator=(::java::security::cert::X509CRLSelector&& x) {obj = std::move(x.obj); return *this;}
    
    X509CRLSelector();
    void setIssuers(const ::java::util::Collection&) const ;
    void setIssuerNames(const ::java::util::Collection&) const ;
    void addIssuer(const ::javax::security::auth::x500::X500Principal&) const ;
    void addIssuerName(const ::java::lang::String&) const ;
    void addIssuerName(const std::vector< int8_t>&) const ;
    void setMinCRLNumber(const ::java::math::BigInteger&) const ;
    void setMaxCRLNumber(const ::java::math::BigInteger&) const ;
    void setDateAndTime(const ::java::util::Date&) const ;
    void setCertificateChecking(const ::java::security::cert::X509Certificate&) const ;
    ::java::util::Collection getIssuers() const ;
    ::java::util::Collection getIssuerNames() const ;
    ::java::math::BigInteger getMinCRL() const ;
    ::java::math::BigInteger getMaxCRL() const ;
    ::java::util::Date getDateAndTime() const ;
    ::java::security::cert::X509Certificate getCertificateChecking() const ;
    ::java::lang::String toString() const ;
    bool match(const ::java::security::cert::CRL&) const ;
    ::java::lang::Object clone() const ;

};
}
}
}


