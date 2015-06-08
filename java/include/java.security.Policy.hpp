#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class CodeSource; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace security { class PermissionCollection; } }
namespace java { namespace security { class Policy; } }
namespace java { namespace security { class Policy_Parameters; } }
namespace java { namespace security { class ProtectionDomain; } }
namespace java { namespace security { class Provider; } }

namespace java {
namespace security {
class Policy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Policy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Policy(const ::java::security::Policy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Policy(::java::security::Policy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::Policy& operator=(const ::java::security::Policy& x) {obj = x.obj; return *this;}
    ::java::security::Policy& operator=(::java::security::Policy&& x) {obj = std::move(x.obj); return *this;}
    
    Policy();
    static ::java::security::Policy getInstance(const ::java::lang::String&, const ::java::security::Policy_Parameters&);
    static ::java::security::Policy getInstance(const ::java::lang::String&, const ::java::security::Policy_Parameters&, const ::java::lang::String&);
    static ::java::security::Policy getInstance(const ::java::lang::String&, const ::java::security::Policy_Parameters&, const ::java::security::Provider&);
    ::java::security::Policy_Parameters getParameters() const;
    ::java::security::Provider getProvider() const;
    ::java::lang::String getType() const;
    ::java::security::PermissionCollection getPermissions(const ::java::security::CodeSource&) const;
    void refresh() const;
    ::java::security::PermissionCollection getPermissions(const ::java::security::ProtectionDomain&) const;
    bool implies(const ::java::security::ProtectionDomain&, const ::java::security::Permission&) const;
    static ::java::security::Policy getPolicy();
    static void setPolicy(const ::java::security::Policy&);

};
}
}

#include "java.security.Policy_Parameters.hpp"

