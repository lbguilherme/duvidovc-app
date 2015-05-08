#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class AccessToken; } }
namespace java { namespace util { class Set; } }

namespace com {
namespace facebook {
namespace login {
class LoginResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginResult(const ::com::facebook::login::LoginResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginResult(::com::facebook::login::LoginResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginResult& operator=(const ::com::facebook::login::LoginResult& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginResult& operator=(::com::facebook::login::LoginResult&& x) {obj = std::move(x.obj); return *this;}
    
    LoginResult(const ::com::facebook::AccessToken&, const ::java::util::Set&, const ::java::util::Set&);
    ::com::facebook::AccessToken getAccessToken() const ;
    ::java::util::Set getRecentlyGrantedPermissions() const ;
    ::java::util::Set getRecentlyDeniedPermissions() const ;

};
}
}
}


