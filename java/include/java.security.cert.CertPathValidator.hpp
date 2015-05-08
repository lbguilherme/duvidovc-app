#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace security { namespace cert { class CertPathParameters; } } }
namespace java { namespace security { namespace cert { class CertPathValidator; } } }
namespace java { namespace security { namespace cert { class CertPathValidatorResult; } } }

namespace java {
namespace security {
namespace cert {
class CertPathValidator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathValidator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathValidator(const ::java::security::cert::CertPathValidator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertPathValidator(::java::security::cert::CertPathValidator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPathValidator& operator=(const ::java::security::cert::CertPathValidator& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPathValidator& operator=(::java::security::cert::CertPathValidator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    static ::java::security::cert::CertPathValidator getInstance(const ::java::lang::String&);
    static ::java::security::cert::CertPathValidator getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::cert::CertPathValidator getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::cert::CertPathValidatorResult validate(const ::java::security::cert::CertPath&, const ::java::security::cert::CertPathParameters&) const ;
    static ::java::lang::String getDefaultType();

};
}
}
}


