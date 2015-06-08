#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertPathValidatorResult.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace cert { class PolicyNode; } } }
namespace java { namespace security { namespace cert { class TrustAnchor; } } }

namespace java {
namespace security {
namespace cert {
class PKIXCertPathValidatorResult : public virtual ::java::lang::Object,
                                    public virtual ::java::security::cert::CertPathValidatorResult {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PKIXCertPathValidatorResult(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertPathValidatorResult(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PKIXCertPathValidatorResult(const ::java::security::cert::PKIXCertPathValidatorResult& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0) {obj = x.obj;}
    PKIXCertPathValidatorResult(::java::security::cert::PKIXCertPathValidatorResult&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PKIXCertPathValidatorResult& operator=(const ::java::security::cert::PKIXCertPathValidatorResult& x) {obj = x.obj; return *this;}
    ::java::security::cert::PKIXCertPathValidatorResult& operator=(::java::security::cert::PKIXCertPathValidatorResult&& x) {obj = std::move(x.obj); return *this;}
    
    PKIXCertPathValidatorResult(const ::java::security::cert::TrustAnchor&, const ::java::security::cert::PolicyNode&, const ::java::security::PublicKey&);
    ::java::security::cert::PolicyNode getPolicyTree() const;
    ::java::security::PublicKey getPublicKey() const;
    ::java::security::cert::TrustAnchor getTrustAnchor() const;
    ::java::lang::Object clone() const;
    ::java::lang::String toString() const;

};
}
}
}


