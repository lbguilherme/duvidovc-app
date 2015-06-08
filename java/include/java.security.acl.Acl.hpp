#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.acl.Owner.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class Principal; } }
namespace java { namespace security { namespace acl { class AclEntry; } } }
namespace java { namespace security { namespace acl { class Permission; } } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace security {
namespace acl {
class Acl : public virtual ::java::lang::Object,
            public virtual ::java::security::acl::Owner {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Acl(jobject _obj) : ::java::lang::Object(_obj), ::java::security::acl::Owner(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Acl(const ::java::security::acl::Acl& x) : ::java::lang::Object((jobject)0), ::java::security::acl::Owner((jobject)0) {obj = x.obj;}
    Acl(::java::security::acl::Acl&& x) : ::java::lang::Object((jobject)0), ::java::security::acl::Owner((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::acl::Acl& operator=(const ::java::security::acl::Acl& x) {obj = x.obj; return *this;}
    ::java::security::acl::Acl& operator=(::java::security::acl::Acl&& x) {obj = std::move(x.obj); return *this;}
    
    void setName(const ::java::security::Principal&, const ::java::lang::String&) const;
    ::java::lang::String getName() const;
    bool addEntry(const ::java::security::Principal&, const ::java::security::acl::AclEntry&) const;
    bool removeEntry(const ::java::security::Principal&, const ::java::security::acl::AclEntry&) const;
    ::java::util::Enumeration getPermissions(const ::java::security::Principal&) const;
    ::java::util::Enumeration entries() const;
    bool checkPermission(const ::java::security::Principal&, const ::java::security::acl::Permission&) const;
    ::java::lang::String toString() const;

};
}
}
}


