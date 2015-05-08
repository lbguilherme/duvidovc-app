#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class Notification_Builder; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace widget { class RemoteViews; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace app {
class Notification_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Notification_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Notification_Builder(const ::android::app::Notification_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Notification_Builder(::android::app::Notification_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Notification_Builder& operator=(const ::android::app::Notification_Builder& x) {obj = x.obj; return *this;}
    ::android::app::Notification_Builder& operator=(::android::app::Notification_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    Notification_Builder(const ::android::content::Context&);
    ::android::app::Notification_Builder setWhen(int64_t) const ;
    ::android::app::Notification_Builder setSmallIcon(int32_t) const ;
    ::android::app::Notification_Builder setSmallIcon(int32_t, int32_t) const ;
    ::android::app::Notification_Builder setContentTitle(const ::java::lang::CharSequence&) const ;
    ::android::app::Notification_Builder setContentText(const ::java::lang::CharSequence&) const ;
    ::android::app::Notification_Builder setNumber(int32_t) const ;
    ::android::app::Notification_Builder setContentInfo(const ::java::lang::CharSequence&) const ;
    ::android::app::Notification_Builder setProgress(int32_t, int32_t, bool) const ;
    ::android::app::Notification_Builder setContent(const ::android::widget::RemoteViews&) const ;
    ::android::app::Notification_Builder setContentIntent(const ::android::app::PendingIntent&) const ;
    ::android::app::Notification_Builder setDeleteIntent(const ::android::app::PendingIntent&) const ;
    ::android::app::Notification_Builder setFullScreenIntent(const ::android::app::PendingIntent&, bool) const ;
    ::android::app::Notification_Builder setTicker(const ::java::lang::CharSequence&) const ;
    ::android::app::Notification_Builder setTicker(const ::java::lang::CharSequence&, const ::android::widget::RemoteViews&) const ;
    ::android::app::Notification_Builder setLargeIcon(const ::android::graphics::Bitmap&) const ;
    ::android::app::Notification_Builder setSound(const ::android::net::Uri&) const ;
    ::android::app::Notification_Builder setSound(const ::android::net::Uri&, int32_t) const ;
    ::android::app::Notification_Builder setVibrate(const std::vector< int64_t>&) const ;
    ::android::app::Notification_Builder setLights(int32_t, int32_t, int32_t) const ;
    ::android::app::Notification_Builder setOngoing(bool) const ;
    ::android::app::Notification_Builder setOnlyAlertOnce(bool) const ;
    ::android::app::Notification_Builder setAutoCancel(bool) const ;
    ::android::app::Notification_Builder setDefaults(int32_t) const ;
    ::android::app::Notification getNotification() const ;

};
}
}


