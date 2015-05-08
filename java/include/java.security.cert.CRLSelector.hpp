#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace security { namespace cert { class CRL; } } }

namespace java {
namespace security {
namespace cert {
class CRLSelector : public virtual ::java::lang::Object,
                    public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CRLSelector(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CRLSelector(const ::java::security::cert::CRLSelector& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    CRLSelector(::java::security::cert::CRLSelector&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::cert::CRLSelector& operator=(const ::java::security::cert::CRLSelector& x) {obj = x.obj; return *this;}
    ::java::security::cert::CRLSelector& operator=(::java::security::cert::CRLSelector&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object clone() const ;
    bool match(const ::java::security::cert::CRL&) const ;

};
}
}
}


