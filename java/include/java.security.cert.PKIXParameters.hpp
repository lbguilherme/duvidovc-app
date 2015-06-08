#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertPathParameters.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { namespace cert { class CertSelector; } } }
namespace java { namespace security { namespace cert { class CertStore; } } }
namespace java { namespace security { namespace cert { class PKIXCertPathChecker; } } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
namespace cert {
class PKIXParameters : public virtual ::java::lang::Object,
                       public virtual ::java::security::cert::CertPathParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PKIXParameters(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertPathParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PKIXParameters(const ::java::security::cert::PKIXParameters& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0) {obj = x.obj;}
    PKIXParameters(::java::security::cert::PKIXParameters&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PKIXParameters& operator=(const ::java::security::cert::PKIXParameters& x) {obj = x.obj; return *this;}
    ::java::security::cert::PKIXParameters& operator=(::java::security::cert::PKIXParameters&& x) {obj = std::move(x.obj); return *this;}
    
    PKIXParameters(const ::java::util::Set&);
    PKIXParameters(const ::java::security::KeyStore&);
    ::java::util::Set getTrustAnchors() const;
    void setTrustAnchors(const ::java::util::Set&) const;
    bool isAnyPolicyInhibited() const;
    void setAnyPolicyInhibited(bool) const;
    ::java::util::List getCertPathCheckers() const;
    void setCertPathCheckers(const ::java::util::List&) const;
    void addCertPathChecker(const ::java::security::cert::PKIXCertPathChecker&) const;
    ::java::util::List getCertStores() const;
    void setCertStores(const ::java::util::List&) const;
    void addCertStore(const ::java::security::cert::CertStore&) const;
    ::java::util::Date getDate() const;
    void setDate(const ::java::util::Date&) const;
    bool isExplicitPolicyRequired() const;
    void setExplicitPolicyRequired(bool) const;
    ::java::util::Set getInitialPolicies() const;
    void setInitialPolicies(const ::java::util::Set&) const;
    bool isPolicyMappingInhibited() const;
    void setPolicyMappingInhibited(bool) const;
    bool getPolicyQualifiersRejected() const;
    void setPolicyQualifiersRejected(bool) const;
    bool isRevocationEnabled() const;
    void setRevocationEnabled(bool) const;
    ::java::lang::String getSigProvider() const;
    void setSigProvider(const ::java::lang::String&) const;
    ::java::security::cert::CertSelector getTargetCertConstraints() const;
    void setTargetCertConstraints(const ::java::security::cert::CertSelector&) const;
    ::java::lang::Object clone() const;
    ::java::lang::String toString() const;

};
}
}
}


