#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplJellybean.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_NotificationCompatImplKitKat : public virtual ::java::lang::Object,
                                                        public virtual ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_NotificationCompatImplKitKat(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_NotificationCompatImplKitKat(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean((jobject)0) {obj = x.obj;}
    NotificationCompat_NotificationCompatImplKitKat(::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat& operator=(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat& operator=(::android::support::v4::app::NotificationCompat_NotificationCompatImplKitKat&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::Notification build(const ::android::support::v4::app::NotificationCompat_Builder&) const;
    ::android::os::Bundle getExtras(const ::android::app::Notification&) const;
    int32_t getActionCount(const ::android::app::Notification&) const;
    ::android::support::v4::app::NotificationCompat_Action getAction(const ::android::app::Notification&, int32_t) const;
    bool getLocalOnly(const ::android::app::Notification&) const;
    ::java::lang::String getGroup(const ::android::app::Notification&) const;
    bool isGroupSummary(const ::android::app::Notification&) const;
    ::java::lang::String getSortKey(const ::android::app::Notification&) const;

};
}
}
}
}


