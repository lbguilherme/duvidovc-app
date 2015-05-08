#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplBase.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_NotificationCompatImplGingerbread : public virtual ::java::lang::Object,
                                                             public virtual ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_NotificationCompatImplGingerbread(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_NotificationCompatImplGingerbread(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0) {obj = x.obj;}
    NotificationCompat_NotificationCompatImplGingerbread(::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread& operator=(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread& operator=(::android::support::v4::app::NotificationCompat_NotificationCompatImplGingerbread&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::Notification build(const ::android::support::v4::app::NotificationCompat_Builder&) const ;

};
}
}
}
}


