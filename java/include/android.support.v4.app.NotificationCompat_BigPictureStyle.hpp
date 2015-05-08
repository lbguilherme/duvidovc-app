#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_Style.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_BigPictureStyle; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_BigPictureStyle : public virtual ::java::lang::Object,
                                           public virtual ::android::support::v4::app::NotificationCompat_Style {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_BigPictureStyle(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_Style(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_BigPictureStyle(const ::android::support::v4::app::NotificationCompat_BigPictureStyle& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {obj = x.obj;}
    NotificationCompat_BigPictureStyle(::android::support::v4::app::NotificationCompat_BigPictureStyle&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_BigPictureStyle& operator=(const ::android::support::v4::app::NotificationCompat_BigPictureStyle& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_BigPictureStyle& operator=(::android::support::v4::app::NotificationCompat_BigPictureStyle&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_BigPictureStyle();
    NotificationCompat_BigPictureStyle(const ::android::support::v4::app::NotificationCompat_Builder&);
    ::android::support::v4::app::NotificationCompat_BigPictureStyle setBigContentTitle(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_BigPictureStyle setSummaryText(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_BigPictureStyle bigPicture(const ::android::graphics::Bitmap&) const ;
    ::android::support::v4::app::NotificationCompat_BigPictureStyle bigLargeIcon(const ::android::graphics::Bitmap&) const ;

};
}
}
}
}


