#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.Permission.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace security {
class AllPermission : public virtual ::java::lang::Object,
                      public virtual ::java::security::Permission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AllPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AllPermission(const ::java::security::AllPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    AllPermission(::java::security::AllPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AllPermission& operator=(const ::java::security::AllPermission& x) {obj = x.obj; return *this;}
    ::java::security::AllPermission& operator=(::java::security::AllPermission&& x) {obj = std::move(x.obj); return *this;}
    
    AllPermission(const ::java::lang::String&, const ::java::lang::String&);
    AllPermission();
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


