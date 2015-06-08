#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }

namespace java {
namespace security {
namespace cert {
class CertStoreParameters : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertStoreParameters(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertStoreParameters(const ::java::security::cert::CertStoreParameters& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CertStoreParameters(::java::security::cert::CertStoreParameters&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertStoreParameters& operator=(const ::java::security::cert::CertStoreParameters& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertStoreParameters& operator=(::java::security::cert::CertStoreParameters&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const;

};
}
}
}


