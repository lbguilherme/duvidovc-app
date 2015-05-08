#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.Permission.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }

namespace java {
namespace security {
class BasicPermission : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable,
                        public virtual ::java::security::Permission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicPermission(const ::java::security::BasicPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    BasicPermission(::java::security::BasicPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::BasicPermission& operator=(const ::java::security::BasicPermission& x) {obj = x.obj; return *this;}
    ::java::security::BasicPermission& operator=(::java::security::BasicPermission&& x) {obj = std::move(x.obj); return *this;}
    
    BasicPermission(const ::java::lang::String&);
    BasicPermission(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


