#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationManagerCompat_Impl.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class NotificationManager; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_ImplBase : public virtual ::java::lang::Object,
                                           public virtual ::android::support::v4::app::NotificationManagerCompat_Impl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_ImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationManagerCompat_Impl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_ImplBase(const ::android::support::v4::app::NotificationManagerCompat_ImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Impl((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_ImplBase(::android::support::v4::app::NotificationManagerCompat_ImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Impl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_ImplBase& operator=(const ::android::support::v4::app::NotificationManagerCompat_ImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_ImplBase& operator=(::android::support::v4::app::NotificationManagerCompat_ImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    void cancelNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t) const;
    void postNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t, const ::android::app::Notification&) const;
    int32_t getSideChannelBindFlags() const;

};
}
}
}
}


