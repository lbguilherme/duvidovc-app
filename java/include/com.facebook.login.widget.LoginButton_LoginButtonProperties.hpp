#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace login { class DefaultAudience; } } }
namespace com { namespace facebook { namespace login { class LoginBehavior; } } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class LoginButton_LoginButtonProperties : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginButton_LoginButtonProperties(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginButton_LoginButtonProperties(const ::com::facebook::login::widget::LoginButton_LoginButtonProperties& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginButton_LoginButtonProperties(::com::facebook::login::widget::LoginButton_LoginButtonProperties&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::LoginButton_LoginButtonProperties& operator=(const ::com::facebook::login::widget::LoginButton_LoginButtonProperties& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::LoginButton_LoginButtonProperties& operator=(::com::facebook::login::widget::LoginButton_LoginButtonProperties&& x) {obj = std::move(x.obj); return *this;}
    
    void setDefaultAudience(const ::com::facebook::login::DefaultAudience&) const ;
    ::com::facebook::login::DefaultAudience getDefaultAudience() const ;
    void setReadPermissions(const ::java::util::List&) const ;
    void setPublishPermissions(const ::java::util::List&) const ;
    void clearPermissions() const ;
    void setLoginBehavior(const ::com::facebook::login::LoginBehavior&) const ;
    ::com::facebook::login::LoginBehavior getLoginBehavior() const ;

};
}
}
}
}


