#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace login {
class LoginClient_BackgroundProcessingListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginClient_BackgroundProcessingListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginClient_BackgroundProcessingListener(const ::com::facebook::login::LoginClient_BackgroundProcessingListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LoginClient_BackgroundProcessingListener(::com::facebook::login::LoginClient_BackgroundProcessingListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::LoginClient_BackgroundProcessingListener& operator=(const ::com::facebook::login::LoginClient_BackgroundProcessingListener& x) {obj = x.obj; return *this;}
    ::com::facebook::login::LoginClient_BackgroundProcessingListener& operator=(::com::facebook::login::LoginClient_BackgroundProcessingListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onBackgroundProcessingStarted() const;
    void onBackgroundProcessingStopped() const;

};
}
}
}


