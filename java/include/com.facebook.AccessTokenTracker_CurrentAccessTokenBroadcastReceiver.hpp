#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }

namespace com {
namespace facebook {
class AccessTokenTracker_CurrentAccessTokenBroadcastReceiver : public virtual ::java::lang::Object,
                                                               public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AccessTokenTracker_CurrentAccessTokenBroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AccessTokenTracker_CurrentAccessTokenBroadcastReceiver(const ::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    AccessTokenTracker_CurrentAccessTokenBroadcastReceiver(::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver& operator=(const ::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver& x) {obj = x.obj; return *this;}
    ::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver& operator=(::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const ;

};
}
}


