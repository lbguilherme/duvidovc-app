#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplBase.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_NotificationCompatImplJellybean : public virtual ::java::lang::Object,
                                                           public virtual ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_NotificationCompatImplJellybean(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl(_obj), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_NotificationCompatImplJellybean(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0) {obj = x.obj;}
    NotificationCompat_NotificationCompatImplJellybean(::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImpl((jobject)0), ::android::support::v4::app::NotificationCompat_NotificationCompatImplBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean& operator=(const ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean& operator=(::android::support::v4::app::NotificationCompat_NotificationCompatImplJellybean&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::app::Notification build(const ::android::support::v4::app::NotificationCompat_Builder&) const;
    ::android::os::Bundle getExtras(const ::android::app::Notification&) const;
    int32_t getActionCount(const ::android::app::Notification&) const;
    ::android::support::v4::app::NotificationCompat_Action getAction(const ::android::app::Notification&, int32_t) const;
    std::vector< ::android::support::v4::app::NotificationCompat_Action> getActionsFromParcelableArrayList(const ::java::util::ArrayList&) const;
    ::java::util::ArrayList getParcelableArrayListForActions(const std::vector< ::android::support::v4::app::NotificationCompat_Action>&) const;
    bool getLocalOnly(const ::android::app::Notification&) const;
    ::java::lang::String getGroup(const ::android::app::Notification&) const;
    bool isGroupSummary(const ::android::app::Notification&) const;
    ::java::lang::String getSortKey(const ::android::app::Notification&) const;

};
}
}
}
}


