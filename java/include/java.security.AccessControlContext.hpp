#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace security { class AccessControlContext; } }
namespace java { namespace security { class DomainCombiner; } }
namespace java { namespace security { class Permission; } }
namespace java { namespace security { class ProtectionDomain; } }

namespace java {
namespace security {
class AccessControlContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessControlContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessControlContext(const ::java::security::AccessControlContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AccessControlContext(::java::security::AccessControlContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::AccessControlContext& operator=(const ::java::security::AccessControlContext& x) {obj = x.obj; return *this;}
    ::java::security::AccessControlContext& operator=(::java::security::AccessControlContext&& x) {obj = std::move(x.obj); return *this;}
    
    AccessControlContext(const ::java::security::AccessControlContext&, const ::java::security::DomainCombiner&);
    AccessControlContext(const std::vector< ::java::security::ProtectionDomain>&);
    void checkPermission(const ::java::security::Permission&) const;
    ::java::security::DomainCombiner getDomainCombiner() const;

};
}
}


