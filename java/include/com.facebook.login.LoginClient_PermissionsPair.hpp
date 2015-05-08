#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace login {
class LoginClient_PermissionsPair : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginClient_PermissionsPair(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginClient_PermissionsPair(const ::com::facebook::login::LoginClient_PermissionsPair& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginClient_PermissionsPair(::com::facebook::login::LoginClient_PermissionsPair&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginClient_PermissionsPair& operator=(const ::com::facebook::login::LoginClient_PermissionsPair& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginClient_PermissionsPair& operator=(::com::facebook::login::LoginClient_PermissionsPair&& x) {obj = std::move(x.obj); return *this;}
    
    LoginClient_PermissionsPair(const ::java::util::List&, const ::java::util::List&);
    ::java::util::List getGrantedPermissions() const ;
    ::java::util::List getDeclinedPermissions() const ;

};
}
}
}


