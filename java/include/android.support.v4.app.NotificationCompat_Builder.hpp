#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Extender; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Style; } } } }
namespace android { namespace widget { class RemoteViews; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Builder(const ::android::support::v4::app::NotificationCompat_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_Builder(::android::support::v4::app::NotificationCompat_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Builder& operator=(const ::android::support::v4::app::NotificationCompat_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Builder& operator=(::android::support::v4::app::NotificationCompat_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_Builder(const ::android::content::Context&);
    ::android::support::v4::app::NotificationCompat_Builder setWhen(int64_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setShowWhen(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setUsesChronometer(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSmallIcon(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSmallIcon(int32_t, int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setContentTitle(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setContentText(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSubText(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setNumber(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setContentInfo(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setProgress(int32_t, int32_t, bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setContent(const ::android::widget::RemoteViews&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setContentIntent(const ::android::app::PendingIntent&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setDeleteIntent(const ::android::app::PendingIntent&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setFullScreenIntent(const ::android::app::PendingIntent&, bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setTicker(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setTicker(const ::java::lang::CharSequence&, const ::android::widget::RemoteViews&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setLargeIcon(const ::android::graphics::Bitmap&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSound(const ::android::net::Uri&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSound(const ::android::net::Uri&, int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setVibrate(const std::vector< int64_t>&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setLights(int32_t, int32_t, int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setOngoing(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setOnlyAlertOnce(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setAutoCancel(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setLocalOnly(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setCategory(const ::java::lang::String&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setDefaults(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setPriority(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder addPerson(const ::java::lang::String&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setGroup(const ::java::lang::String&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setGroupSummary(bool) const ;
    ::android::support::v4::app::NotificationCompat_Builder setSortKey(const ::java::lang::String&) const ;
    ::android::support::v4::app::NotificationCompat_Builder addExtras(const ::android::os::Bundle&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setExtras(const ::android::os::Bundle&) const ;
    ::android::os::Bundle getExtras() const ;
    ::android::support::v4::app::NotificationCompat_Builder addAction(int32_t, const ::java::lang::CharSequence&, const ::android::app::PendingIntent&) const ;
    ::android::support::v4::app::NotificationCompat_Builder addAction(const ::android::support::v4::app::NotificationCompat_Action&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setStyle(const ::android::support::v4::app::NotificationCompat_Style&) const ;
    ::android::support::v4::app::NotificationCompat_Builder setColor(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setVisibility(int32_t) const ;
    ::android::support::v4::app::NotificationCompat_Builder setPublicVersion(const ::android::app::Notification&) const ;
    ::android::support::v4::app::NotificationCompat_Builder extend(const ::android::support::v4::app::NotificationCompat_Extender&) const ;
    ::android::app::Notification getNotification() const ;
    ::android::app::Notification build() const ;

};
}
}
}
}


