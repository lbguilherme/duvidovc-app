#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace os { class IBinder; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_ServiceConnectedEvent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_ServiceConnectedEvent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_ServiceConnectedEvent(const ::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_ServiceConnectedEvent(::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent& operator=(const ::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent& operator=(::android::support::v4::app::NotificationManagerCompat_ServiceConnectedEvent&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationManagerCompat_ServiceConnectedEvent(const ::android::content::ComponentName&, const ::android::os::IBinder&);

};
}
}
}
}


