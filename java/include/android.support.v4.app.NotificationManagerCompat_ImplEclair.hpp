#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationManagerCompat_ImplBase.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class NotificationManager; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationManagerCompat_ImplEclair : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::app::NotificationManagerCompat_ImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationManagerCompat_ImplEclair(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationManagerCompat_Impl(_obj), ::android::support::v4::app::NotificationManagerCompat_ImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationManagerCompat_ImplEclair(const ::android::support::v4::app::NotificationManagerCompat_ImplEclair& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Impl((jobject)0), ::android::support::v4::app::NotificationManagerCompat_ImplBase((jobject)0) {obj = x.obj;}
    NotificationManagerCompat_ImplEclair(::android::support::v4::app::NotificationManagerCompat_ImplEclair&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationManagerCompat_Impl((jobject)0), ::android::support::v4::app::NotificationManagerCompat_ImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationManagerCompat_ImplEclair& operator=(const ::android::support::v4::app::NotificationManagerCompat_ImplEclair& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationManagerCompat_ImplEclair& operator=(::android::support::v4::app::NotificationManagerCompat_ImplEclair&& x) {obj = std::move(x.obj); return *this;}
    
    void cancelNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t) const ;
    void postNotification(const ::android::app::NotificationManager&, const ::java::lang::String&, int32_t, const ::android::app::Notification&) const ;

};
}
}
}
}


