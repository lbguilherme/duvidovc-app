#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationManagerCompat_Task.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace support { namespace v4 { namespace app { class INotificationSideChannel; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_NotifyTask : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::app::NotificationManagerCompat_Task {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_NotifyTask(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationManagerCompat_Task(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_NotifyTask(const ::android::support::v4::app::NotificationManagerCompat_NotifyTask& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_NotifyTask(::android::support::v4::app::NotificationManagerCompat_NotifyTask&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_NotifyTask& operator=(const ::android::support::v4::app::NotificationManagerCompat_NotifyTask& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_NotifyTask& operator=(::android::support::v4::app::NotificationManagerCompat_NotifyTask&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationManagerCompat_NotifyTask(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::android::app::Notification&);
    void send(const ::android::support::v4::app::INotificationSideChannel&) const ;
    ::java::lang::String toString() const ;

};
}
}
}
}


