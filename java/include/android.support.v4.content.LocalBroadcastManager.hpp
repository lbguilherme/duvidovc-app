#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class BroadcastReceiver; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentFilter; } }
namespace android { namespace support { namespace v4 { namespace content { class LocalBroadcastManager; } } } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class LocalBroadcastManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LocalBroadcastManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LocalBroadcastManager(const ::android::support::v4::content::LocalBroadcastManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LocalBroadcastManager(::android::support::v4::content::LocalBroadcastManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::LocalBroadcastManager& operator=(const ::android::support::v4::content::LocalBroadcastManager& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::LocalBroadcastManager& operator=(::android::support::v4::content::LocalBroadcastManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::content::LocalBroadcastManager getInstance(const ::android::content::Context&);
    void registerReceiver(const ::android::content::BroadcastReceiver&, const ::android::content::IntentFilter&) const ;
    void unregisterReceiver(const ::android::content::BroadcastReceiver&) const ;
    bool sendBroadcast(const ::android::content::Intent&) const ;
    void sendBroadcastSync(const ::android::content::Intent&) const ;

};
}
}
}
}

#include "android.support.v4.content.LocalBroadcastManager_BroadcastRecord.hpp"
#include "android.support.v4.content.LocalBroadcastManager_ReceiverRecord.hpp"

