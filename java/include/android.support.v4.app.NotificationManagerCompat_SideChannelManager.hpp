#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ServiceConnection.hpp"
#include "android.os.Handler_Callback.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class Message; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationManagerCompat_Task; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_SideChannelManager : public virtual ::java::lang::Object,
                                                     public virtual ::android::content::ServiceConnection,
                                                     public virtual ::android::os::Handler_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_SideChannelManager(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj), ::android::os::Handler_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_SideChannelManager(const ::android::support::v4::app::NotificationManagerCompat_SideChannelManager& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::android::os::Handler_Callback((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_SideChannelManager(::android::support::v4::app::NotificationManagerCompat_SideChannelManager&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0), ::android::os::Handler_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_SideChannelManager& operator=(const ::android::support::v4::app::NotificationManagerCompat_SideChannelManager& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_SideChannelManager& operator=(::android::support::v4::app::NotificationManagerCompat_SideChannelManager&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationManagerCompat_SideChannelManager(const ::android::content::Context&);
    void queueTask(const ::android::support::v4::app::NotificationManagerCompat_Task&) const;
    bool handleMessage(const ::android::os::Message&) const;
    void onServiceConnected(const ::android::content::ComponentName&, const ::android::os::IBinder&) const;
    void onServiceDisconnected(const ::android::content::ComponentName&) const;

};
}
}
}
}

#include "android.support.v4.app.NotificationManagerCompat_SideChannelManager_ListenerRecord.hpp"

