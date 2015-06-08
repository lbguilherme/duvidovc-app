#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplApi20.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_NotificationCompatImplApi21 : public virtual ::java::lang::Object,
                                                       public virtual ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_NotificationCompatImplApi21(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_NotificationCompatImplApi21(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat((jobject)0) {obj = x.obj;}
    NotificationCompat_NotificationCompatImplApi21(::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi20((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21& operator=(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21& operator=(::android::support::v4::app::NotificationCompat_NotificationCompatImplApi21&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::Notification build(const ::android::support::v4::app::NotificationCompat_Builder&) const;
    ::java::lang::String getCategory(const ::android::app::Notification&) const;

};
}
}
}
}


