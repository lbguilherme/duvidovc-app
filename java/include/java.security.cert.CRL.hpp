#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
namespace cert {
class CRL : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CRL(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CRL(const ::java::security::cert::CRL& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CRL(::java::security::cert::CRL&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CRL& operator=(const ::java::security::cert::CRL& x) {obj = x.obj; return *this;}
    ::java::security::cert::CRL& operator=(::java::security::cert::CRL&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getType() const;
    bool isRevoked(const ::java::security::cert::Certificate&) const;
    ::java::lang::String toString() const;

};
}
}
}


