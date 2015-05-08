#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.BroadcastReceiver.hpp"

namespace android { namespace app { namespace admin { class DevicePolicyManager; } } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
namespace admin {
class DeviceAdminReceiver : public virtual ::java::lang::Object,
                            public virtual ::android::content::BroadcastReceiver {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeviceAdminReceiver(jobject _obj) : ::java::lang::Object(_obj), ::android::content::BroadcastReceiver(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeviceAdminReceiver(const ::android::app::admin::DeviceAdminReceiver& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj;}
    DeviceAdminReceiver(::android::app::admin::DeviceAdminReceiver&& x) : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::admin::DeviceAdminReceiver& operator=(const ::android::app::admin::DeviceAdminReceiver& x) {obj = x.obj; return *this;}
    ::android::app::admin::DeviceAdminReceiver& operator=(::android::app::admin::DeviceAdminReceiver&& x) {obj = std::move(x.obj); return *this;}
    
    DeviceAdminReceiver();
    ::android::app::admin::DevicePolicyManager getManager(const ::android::content::Context&) const ;
    ::android::content::ComponentName getWho(const ::android::content::Context&) const ;
    void onEnabled(const ::android::content::Context&, const ::android::content::Intent&) const ;
    ::java::lang::CharSequence onDisableRequested(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onDisabled(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onPasswordChanged(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onPasswordFailed(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onPasswordSucceeded(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onPasswordExpiring(const ::android::content::Context&, const ::android::content::Intent&) const ;
    void onReceive(const ::android::content::Context&, const ::android::content::Intent&) const ;

};
}
}
}


