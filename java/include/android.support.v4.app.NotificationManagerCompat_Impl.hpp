#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class NotificationManager; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_Impl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_Impl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_Impl(const ::android::support::v4::app::NotificationManagerCompat_Impl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_Impl(::android::support::v4::app::NotificationManagerCompat_Impl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_Impl& operator=(const ::android::support::v4::app::NotificationManagerCompat_Impl& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_Impl& operator=(::android::support::v4::app::NotificationManagerCompat_Impl&& x) {obj = std::move(x.obj); return *this;}
    
    void cancelNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t) const ;
    void postNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t, const ::android::app::Notification&) const ;
    int32_t getSideChannelBindFlags() const ;

};
}
}
}
}


