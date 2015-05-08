#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.security.Guard.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace security { class PermissionCollection; } }

namespace java {
namespace security {
class Permission : public virtual ::java::lang::Object,
                   public virtual ::java::io::Serializable,
                   public virtual ::java::security::Guard {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Permission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Guard(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Permission(const ::java::security::Permission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0) {obj = x.obj;}
    Permission(::java::security::Permission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Permission& operator=(const ::java::security::Permission& x) {obj = x.obj; return *this;}
    ::java::security::Permission& operator=(::java::security::Permission&& x) {obj = std::move(x.obj); return *this;}
    
    Permission(const ::java::lang::String&);
    ::java::lang::String getName() const ;
    void checkGuard(const ::java::lang::Object&) const ;
    ::java::security::PermissionCollection newPermissionCollection() const ;
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


