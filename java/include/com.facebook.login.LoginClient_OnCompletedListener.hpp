#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { namespace login { class LoginClient_Result; } } }

namespace com {
namespace facebook {
namespace login {
class LoginClient_OnCompletedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginClient_OnCompletedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginClient_OnCompletedListener(const ::com::facebook::login::LoginClient_OnCompletedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginClient_OnCompletedListener(::com::facebook::login::LoginClient_OnCompletedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginClient_OnCompletedListener& operator=(const ::com::facebook::login::LoginClient_OnCompletedListener& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginClient_OnCompletedListener& operator=(::com::facebook::login::LoginClient_OnCompletedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onCompleted(const ::com::facebook::login::LoginClient_Result&) const ;

};
}
}
}


