#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.CertPathBuilderResult.hpp"
#include "java.security.cert.PKIXCertPathValidatorResult.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class PublicKey; } }
namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace security { namespace cert { class PolicyNode; } } }
namespace java { namespace security { namespace cert { class TrustAnchor; } } }

namespace java {
namespace security {
namespace cert {
class PKIXCertPathBuilderResult : public virtual ::java::lang::Object,
                                  public virtual ::java::security::cert::CertPathBuilderResult,
                                  public virtual ::java::security::cert::PKIXCertPathValidatorResult {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PKIXCertPathBuilderResult(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertPathBuilderResult(_obj), ::java::security::cert::CertPathValidatorResult(_obj), ::java::security::cert::PKIXCertPathValidatorResult(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PKIXCertPathBuilderResult(const ::java::security::cert::PKIXCertPathBuilderResult& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathBuilderResult((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0), ::java::security::cert::PKIXCertPathValidatorResult((jobject)0) {obj = x.obj;}
    PKIXCertPathBuilderResult(::java::security::cert::PKIXCertPathBuilderResult&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathBuilderResult((jobject)0), ::java::security::cert::CertPathValidatorResult((jobject)0), ::java::security::cert::PKIXCertPathValidatorResult((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PKIXCertPathBuilderResult& operator=(const ::java::security::cert::PKIXCertPathBuilderResult& x) {obj = x.obj; return *this;}
    ::java::security::cert::PKIXCertPathBuilderResult& operator=(::java::security::cert::PKIXCertPathBuilderResult&& x) {obj = std::move(x.obj); return *this;}
    
    PKIXCertPathBuilderResult(const ::java::security::cert::CertPath&, const ::java::security::cert::TrustAnchor&, const ::java::security::cert::PolicyNode&, const ::java::security::PublicKey&);
    ::java::security::cert::CertPath getCertPath() const;
    ::java::lang::String toString() const;

};
}
}
}


