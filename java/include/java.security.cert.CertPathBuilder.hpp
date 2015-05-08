#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Provider; } }
namespace java { namespace security { namespace cert { class CertPathBuilder; } } }
namespace java { namespace security { namespace cert { class CertPathBuilderResult; } } }
namespace java { namespace security { namespace cert { class CertPathParameters; } } }

namespace java {
namespace security {
namespace cert {
class CertPathBuilder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathBuilder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathBuilder(const ::java::security::cert::CertPathBuilder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CertPathBuilder(::java::security::cert::CertPathBuilder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPathBuilder& operator=(const ::java::security::cert::CertPathBuilder& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPathBuilder& operator=(::java::security::cert::CertPathBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAlgorithm() const ;
    ::java::security::Provider getProvider() const ;
    static ::java::security::cert::CertPathBuilder getInstance(const ::java::lang::String&);
    static ::java::security::cert::CertPathBuilder getInstance(const ::java::lang::String&, const ::java::lang::String&);
    static ::java::security::cert::CertPathBuilder getInstance(const ::java::lang::String&, const ::java::security::Provider&);
    ::java::security::cert::CertPathBuilderResult build(const ::java::security::cert::CertPathParameters&) const ;
    static ::java::lang::String getDefaultType();

};
}
}
}


