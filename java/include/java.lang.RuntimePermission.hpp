#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.BasicPermission.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace lang {
class RuntimePermission : public virtual ::java::lang::Object,
                          public virtual ::java::security::BasicPermission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RuntimePermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::BasicPermission(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RuntimePermission(const ::java::lang::RuntimePermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    RuntimePermission(::java::lang::RuntimePermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::RuntimePermission& operator=(const ::java::lang::RuntimePermission& x) {obj = x.obj; return *this;}
    ::java::lang::RuntimePermission& operator=(::java::lang::RuntimePermission&& x) {obj = std::move(x.obj); return *this;}
    
    RuntimePermission(const ::java::lang::String&);
    RuntimePermission(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


