#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { class GraphResponse; } }
namespace com { namespace facebook { namespace login { class DefaultAudience; } } }
namespace com { namespace facebook { namespace login { class LoginBehavior; } } }
namespace com { namespace facebook { namespace login { class LoginManager; } } }
namespace java { namespace util { class Collection; } }

namespace com {
namespace facebook {
namespace login {
class LoginManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginManager(const ::com::facebook::login::LoginManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginManager(::com::facebook::login::LoginManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginManager& operator=(const ::com::facebook::login::LoginManager& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginManager& operator=(::com::facebook::login::LoginManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::com::facebook::login::LoginManager getInstance();
    void resolveError(const ::android::app::Activity&, const ::com::facebook::GraphResponse&) const;
    void resolveError(const ::android::support::v4::app::Fragment&, const ::com::facebook::GraphResponse&) const;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&) const;
    ::com::facebook::login::LoginBehavior getLoginBehavior() const;
    ::com::facebook::login::LoginManager setLoginBehavior(const ::com::facebook::login::LoginBehavior&) const;
    ::com::facebook::login::DefaultAudience getDefaultAudience() const;
    ::com::facebook::login::LoginManager setDefaultAudience(const ::com::facebook::login::DefaultAudience&) const;
    void logOut() const;
    void logInWithReadPermissions(const ::android::support::v4::app::Fragment&, const ::java::util::Collection&) const;
    void logInWithReadPermissions(const ::android::app::Activity&, const ::java::util::Collection&) const;
    void logInWithPublishPermissions(const ::android::support::v4::app::Fragment&, const ::java::util::Collection&) const;
    void logInWithPublishPermissions(const ::android::app::Activity&, const ::java::util::Collection&) const;

};
}
}
}

#include "com.facebook.login.LoginManager_ActivityStartActivityDelegate.hpp"
#include "com.facebook.login.LoginManager_FragmentStartActivityDelegate.hpp"

