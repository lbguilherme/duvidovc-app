#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.login.StartActivityDelegate.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace content { class Intent; } }

namespace com {
namespace facebook {
namespace login {
class LoginManager_FragmentStartActivityDelegate : public virtual ::java::lang::Object,
                                                   public virtual ::com::facebook::login::StartActivityDelegate {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginManager_FragmentStartActivityDelegate(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::login::StartActivityDelegate(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginManager_FragmentStartActivityDelegate(const ::com::facebook::login::LoginManager_FragmentStartActivityDelegate& x) : ::java::lang::Object((jobject)0), ::com::facebook::login::StartActivityDelegate((jobject)0) {obj = x.obj;}
    LoginManager_FragmentStartActivityDelegate(::com::facebook::login::LoginManager_FragmentStartActivityDelegate&& x) : ::java::lang::Object((jobject)0), ::com::facebook::login::StartActivityDelegate((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginManager_FragmentStartActivityDelegate& operator=(const ::com::facebook::login::LoginManager_FragmentStartActivityDelegate& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginManager_FragmentStartActivityDelegate& operator=(::com::facebook::login::LoginManager_FragmentStartActivityDelegate&& x) {obj = std::move(x.obj); return *this;}
    
    void startActivityForResult(const ::android::content::Intent&, int32_t) const ;
    ::android::app::Activity getActivityContext() const ;

};
}
}
}

