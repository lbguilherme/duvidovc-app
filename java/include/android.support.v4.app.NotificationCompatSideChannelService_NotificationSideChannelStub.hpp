#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.INotificationSideChannel_Stub.hpp"

namespace android { namespace app { class Notification; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompatSideChannelService_NotificationSideChannelStub : public virtual ::java::lang::Object,
                                                                         public virtual ::android::support::v4::app::INotificationSideChannel_Stub {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompatSideChannelService_NotificationSideChannelStub(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Binder(_obj), ::android::os::IBinder(_obj), ::android::os::IInterface(_obj), ::android::support::v4::app::INotificationSideChannel(_obj), ::android::support::v4::app::INotificationSideChannel_Stub(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompatSideChannelService_NotificationSideChannelStub(const ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::app::INotificationSideChannel((jobject)0), ::android::support::v4::app::INotificationSideChannel_Stub((jobject)0) {obj = x.obj;}
    NotificationCompatSideChannelService_NotificationSideChannelStub(::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub&& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::app::INotificationSideChannel((jobject)0), ::android::support::v4::app::INotificationSideChannel_Stub((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub& operator=(const ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub& operator=(::android::support::v4::app::NotificationCompatSideChannelService_NotificationSideChannelStub&& x) {obj = std::move(x.obj); return *this;}
    
    void notify(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::android::app::Notification&) const ;
    void cancel(const ::java::lang::String&, int32_t, const ::java::lang::String&) const ;
    void cancelAll(const ::java::lang::String&) const ;

};
}
}
}
}


