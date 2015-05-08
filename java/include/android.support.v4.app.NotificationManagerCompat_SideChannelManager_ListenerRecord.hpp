#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_SideChannelManager_ListenerRecord : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_SideChannelManager_ListenerRecord(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_SideChannelManager_ListenerRecord(const ::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_SideChannelManager_ListenerRecord(::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord& operator=(const ::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord& operator=(::android::support::v4::app::NotificationManagerCompat_SideChannelManager_ListenerRecord&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationManagerCompat_SideChannelManager_ListenerRecord(const ::android::content::ComponentName&);

};
}
}
}
}


