#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { namespace cert { class CertPath; } } }
namespace java { namespace security { namespace cert { class CertPathParameters; } } }
namespace java { namespace security { namespace cert { class CertPathValidatorResult; } } }

namespace java {
namespace security {
namespace cert {
class CertPathValidatorSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathValidatorSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathValidatorSpi(const ::java::security::cert::CertPathValidatorSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertPathValidatorSpi(::java::security::cert::CertPathValidatorSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPathValidatorSpi& operator=(const ::java::security::cert::CertPathValidatorSpi& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPathValidatorSpi& operator=(::java::security::cert::CertPathValidatorSpi&& x) {obj = std::move(x.obj); return *this;}
    
    CertPathValidatorSpi();
    ::java::security::cert::CertPathValidatorResult engineValidate(const ::java::security::cert::CertPath&, const ::java::security::cert::CertPathParameters&) const;

};
}
}
}


