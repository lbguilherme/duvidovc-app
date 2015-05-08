#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.app.Service.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompatSideChannelService : public virtual ::java::lang::Object,
                                             public virtual ::android::app::Service {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompatSideChannelService(jobject _obj) : ::java::lang::Object(_obj), ::android::app::Service(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::Context(_obj), ::android::content::ContextWrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompatSideChannelService(const ::android::support::v4::app::NotificationCompatSideChannelService& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj;}
    NotificationCompatSideChannelService(::android::support::v4::app::NotificationCompatSideChannelService&& x) : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompatSideChannelService& operator=(const ::android::support::v4::app::NotificationCompatSideChannelService& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompatSideChannelService& operator=(::android::support::v4::app::NotificationCompatSideChannelService&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompatSideChannelService();
    ::android::os::IBinder onBind(const ::android::content::Intent&) const ;
    void notify(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::android::app::Notification&) const ;
    void cancel(const ::java::lang::String&, int32_t, const ::java::lang::String&) const ;
    void cancelAll(const ::java::lang::String&) const ;

};
}
}
}
}

#include "android.support.v4.app.NotificationCompatSideChannelService_NotificationSideChannelStub.hpp"

