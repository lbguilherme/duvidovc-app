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
namespace java { namespace security { namespace cert { class Certificate; } } }

namespace java {
namespace security {
class UnresolvedPermission : public virtual ::java::lang::Object,
                             public virtual ::java::io::Serializable,
                             public virtual ::java::security::Permission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit UnresolvedPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    UnresolvedPermission(const ::java::security::UnresolvedPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    UnresolvedPermission(::java::security::UnresolvedPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::security::UnresolvedPermission& operator=(const ::java::security::UnresolvedPermission& x) {obj = x.obj; return *this;}
    ::java::security::UnresolvedPermission& operator=(::java::security::UnresolvedPermission&& x) {obj = std::move(x.obj); return *this;}
    
    UnresolvedPermission(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::security::cert::Certificate>&);
    ::java::lang::String getUnresolvedName() const ;
    ::java::lang::String getUnresolvedActions() const ;
    ::java::lang::String getUnresolvedType() const ;
    std::vector< ::java::security::cert::Certificate> getUnresolvedCerts() const ;
    ::java::lang::String getActions() const ;
    bool implies(const ::java::security::Permission&) const ;

};
}
}


