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

namespace javax {
namespace security {
namespace auth {
class PrivateCredentialPermission : public virtual ::java::lang::Object,
                                    public virtual ::java::security::Permission {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PrivateCredentialPermission(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::security::Guard(_obj), ::java::security::Permission(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PrivateCredentialPermission(const ::javax::security::auth::PrivateCredentialPermission& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj;}
    PrivateCredentialPermission(::javax::security::auth::PrivateCredentialPermission&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::security::auth::PrivateCredentialPermission& operator=(const ::javax::security::auth::PrivateCredentialPermission& x) {obj = x.obj; return *this;}
    ::javax::security::auth::PrivateCredentialPermission& operator=(::javax::security::auth::PrivateCredentialPermission&& x) {obj = std::move(x.obj); return *this;}
    
    PrivateCredentialPermission(const ::java::lang::String&, const ::java::lang::String&);
    std::vector< ::java::lang::String> getPrincipals() const;
    ::java::lang::String getCredentialClass() const;
    ::java::lang::String getActions() const;
    bool implies(const ::java::security::Permission&) const;

};
}
}
}


