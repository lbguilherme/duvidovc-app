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
class ProfileTracker_ProfileBroadcastReceiver : public virtual ::java::lang::Object,
                                                public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProfileTracker_ProfileBroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProfileTracker_ProfileBroadcastReceiver(const ::com::facebook::ProfileTracker_ProfileBroadcastReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    ProfileTracker_ProfileBroadcastReceiver(::com::facebook::ProfileTracker_ProfileBroadcastReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::ProfileTracker_ProfileBroadcastReceiver& operator=(const ::com::facebook::ProfileTracker_ProfileBroadcastReceiver& x) {obj = x.obj; return *this;}
    ::com::facebook::ProfileTracker_ProfileBroadcastReceiver& operator=(::com::facebook::ProfileTracker_ProfileBroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const ;

};
}
}


