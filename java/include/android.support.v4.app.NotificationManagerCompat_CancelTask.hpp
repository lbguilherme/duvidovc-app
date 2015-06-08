#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationManagerCompat_Task.hpp"

namespace android { namespace support { namespace v4 { namespace app { class INotificationSideChannel; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_CancelTask : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::app::NotificationManagerCompat_Task {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_CancelTask(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationManagerCompat_Task(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_CancelTask(const ::android::support::v4::app::NotificationManagerCompat_CancelTask& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_CancelTask(::android::support::v4::app::NotificationManagerCompat_CancelTask&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Task((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_CancelTask& operator=(const ::android::support::v4::app::NotificationManagerCompat_CancelTask& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_CancelTask& operator=(::android::support::v4::app::NotificationManagerCompat_CancelTask&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationManagerCompat_CancelTask(const ::java::lang::String&);
    NotificationManagerCompat_CancelTask(const ::java::lang::String&, int32_t, const ::java::lang::String&);
    void send(const ::android::support::v4::app::INotificationSideChannel&) const;
    ::java::lang::String toString() const;

};
}
}
}
}


