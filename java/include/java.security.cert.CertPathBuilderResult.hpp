#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { namespace cert { class CertPath; } } }

namespace java {
namespace security {
namespace cert {
class CertPathBuilderResult : public virtual ::java::lang::Object,
                              public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertPathBuilderResult(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertPathBuilderResult(const ::java::security::cert::CertPathBuilderResult& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CertPathBuilderResult(::java::security::cert::CertPathBuilderResult&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertPathBuilderResult& operator=(const ::java::security::cert::CertPathBuilderResult& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertPathBuilderResult& operator=(::java::security::cert::CertPathBuilderResult&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const;
    ::java::security::cert::CertPath getCertPath() const;

};
}
}
}


