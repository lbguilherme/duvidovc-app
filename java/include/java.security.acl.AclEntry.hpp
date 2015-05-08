#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { namespace acl { class Permission; } } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
namespace acl {
class AclEntry : public virtual ::java::lang::Object,
                 public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AclEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AclEntry(const ::java::security::acl::AclEntry& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    AclEntry(::java::security::acl::AclEntry&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::acl::AclEntry& operator=(const ::java::security::acl::AclEntry& x) {obj = x.obj; return *this;}
    ::java::security::acl::AclEntry& operator=(::java::security::acl::AclEntry&& x) {obj = std::move(x.obj); return *this;}
    
    bool setPrincipal(const ::java::security::Principal&) const ;
    ::java::security::Principal getPrincipal() const ;
    void setNegativePermissions() const ;
    bool isNegative() const ;
    bool addPermission(const ::java::security::acl::Permission&) const ;
    bool removePermission(const ::java::security::acl::Permission&) const ;
    bool checkPermission(const ::java::security::acl::Permission&) const ;
    ::java::util::Enumeration permissions() const ;
    ::java::lang::String toString() const ;
    ::java::lang::Object clone() const ;

};
}
}
}


