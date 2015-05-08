#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
namespace cert {
class CertSelector : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CertSelector(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CertSelector(const ::java::security::cert::CertSelector& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CertSelector(::java::security::cert::CertSelector&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CertSelector& operator=(const ::java::security::cert::CertSelector& x) {obj = x.obj; return *this;}
    ::java::security::cert::CertSelector& operator=(::java::security::cert::CertSelector&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const ;
    bool match(const ::java::security::cert::Certificate&) const ;

};
}
}
}


