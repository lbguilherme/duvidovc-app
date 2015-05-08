#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.cert.PKIXParameters.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class KeyStore; } }
namespace java { namespace security { namespace cert { class CertSelector; } } }
namespace java { namespace util { class Set; } }

namespace java {
namespace security {
namespace cert {
class PKIXBuilderParameters : public virtual ::java::lang::Object,
                              public virtual ::java::security::cert::PKIXParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PKIXBuilderParameters(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::security::cert::CertPathParameters(_obj), ::java::security::cert::PKIXParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PKIXBuilderParameters(const ::java::security::cert::PKIXBuilderParameters& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0), ::java::security::cert::PKIXParameters((jobject)0) {obj = x.obj;}
    PKIXBuilderParameters(::java::security::cert::PKIXBuilderParameters&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::security::cert::CertPathParameters((jobject)0), ::java::security::cert::PKIXParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::PKIXBuilderParameters& operator=(const ::java::security::cert::PKIXBuilderParameters& x) {obj = x.obj; return *this;}
    ::java::security::cert::PKIXBuilderParameters& operator=(::java::security::cert::PKIXBuilderParameters&& x) {obj = std::move(x.obj); return *this;}
    
    PKIXBuilderParameters(const ::java::util::Set&, const ::java::security::cert::CertSelector&);
    PKIXBuilderParameters(const ::java::security::KeyStore&, const ::java::security::cert::CertSelector&);
    int32_t getMaxPathLength() const ;
    void setMaxPathLength(int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}
}


