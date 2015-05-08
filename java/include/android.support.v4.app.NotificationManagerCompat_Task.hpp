#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace app { class INotificationSideChannel; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_Task : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_Task(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_Task(const ::android::support::v4::app::NotificationManagerCompat_Task& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_Task(::android::support::v4::app::NotificationManagerCompat_Task&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_Task& operator=(const ::android::support::v4::app::NotificationManagerCompat_Task& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_Task& operator=(::android::support::v4::app::NotificationManagerCompat_Task&& x) {obj = std::move(x.obj); return *this;}
    
    void send(const ::android::support::v4::app::INotificationSideChannel&) const ;

};
}
}
}
}


