#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace security { class CodeSource; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace security { class PermissionCollection; } }
namespace java { namespace security { class Principal; } }

namespace java {
namespace security {
class ProtectionDomain : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProtectionDomain(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProtectionDomain(const ::java::security::ProtectionDomain& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProtectionDomain(::java::security::ProtectionDomain&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::ProtectionDomain& operator=(const ::java::security::ProtectionDomain& x) {obj = x.obj; return *this;}
    ::java::security::ProtectionDomain& operator=(::java::security::ProtectionDomain&& x) {obj = std::move(x.obj); return *this;}
    
    ProtectionDomain(const ::java::security::CodeSource&, const ::java::security::PermissionCollection&);
    ProtectionDomain(const ::java::security::CodeSource&, const ::java::security::PermissionCollection&, const ::java::lang::ClassLoader&, const std::vector< ::java::security::Principal>&);
    ::java::lang::ClassLoader getClassLoader() const ;
    ::java::security::CodeSource getCodeSource() const ;
    ::java::security::PermissionCollection getPermissions() const ;
    std::vector< ::java::security::Principal> getPrincipals() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


