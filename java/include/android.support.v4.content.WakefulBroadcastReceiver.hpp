#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class WakefulBroadcastReceiver : public virtual ::java::lang::Object,
                                 public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WakefulBroadcastReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WakefulBroadcastReceiver(const ::android::support::v4::content::WakefulBroadcastReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    WakefulBroadcastReceiver(::android::support::v4::content::WakefulBroadcastReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::WakefulBroadcastReceiver& operator=(const ::android::support::v4::content::WakefulBroadcastReceiver& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::WakefulBroadcastReceiver& operator=(::android::support::v4::content::WakefulBroadcastReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    WakefulBroadcastReceiver();
    static ::android::content::ComponentName startWakefulService(const ::android::content::Context&, const ::android::content::Intent&);
    static bool completeWakefulIntent(const ::android::content::Intent&);

};
}
}
}
}


