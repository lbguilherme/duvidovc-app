#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { namespace cert { class CertPathBuilderResult; } } }
namespace java { namespace security { namespace cert { class CertPathParameters; } } }

namespace java {
namespace security {
namespace cert {
class CertPathBuilderSpi : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathBuilderSpi(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathBuilderSpi(const ::java::security::cert::CertPathBuilderSpi& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertPathBuilderSpi(::java::security::cert::CertPathBuilderSpi&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPathBuilderSpi& operator=(const ::java::security::cert::CertPathBuilderSpi& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPathBuilderSpi& operator=(::java::security::cert::CertPathBuilderSpi&& x) {obj = std::move(x.obj); return *this;}
    
    CertPathBuilderSpi();
    ::java::security::cert::CertPathBuilderResult engineBuild(const ::java::security::cert::CertPathParameters&) const;

};
}
}
}


