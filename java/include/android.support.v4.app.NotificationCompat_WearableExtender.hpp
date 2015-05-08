#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_Extender.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace app { class PendingIntent; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_WearableExtender; } } } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_WearableExtender : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::app::NotificationCompat_Extender {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_WearableExtender(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_Extender(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_WearableExtender(const ::android::support::v4::app::NotificationCompat_WearableExtender& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {obj = x.obj;}
    NotificationCompat_WearableExtender(::android::support::v4::app::NotificationCompat_WearableExtender&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_WearableExtender& operator=(const ::android::support::v4::app::NotificationCompat_WearableExtender& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_WearableExtender& operator=(::android::support::v4::app::NotificationCompat_WearableExtender&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_WearableExtender();
    NotificationCompat_WearableExtender(const ::android::app::Notification&);
    ::android::support::v4::app::NotificationCompat_Builder extend(const ::android::support::v4::app::NotificationCompat_Builder&) const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender clone() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender addAction(const ::android::support::v4::app::NotificationCompat_Action&) const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender addActions(const ::java::util::List&) const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender clearActions() const ;
    ::java::util::List getActions() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setDisplayIntent(const ::android::app::PendingIntent&) const ;
    ::android::app::PendingIntent getDisplayIntent() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender addPage(const ::android::app::Notification&) const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender addPages(const ::java::util::List&) const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender clearPages() const ;
    ::java::util::List getPages() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setBackground(const ::android::graphics::Bitmap&) const ;
    ::android::graphics::Bitmap getBackground() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setContentIcon(int32_t) const ;
    int32_t getContentIcon() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setContentIconGravity(int32_t) const ;
    int32_t getContentIconGravity() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setContentAction(int32_t) const ;
    int32_t getContentAction() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setGravity(int32_t) const ;
    int32_t getGravity() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setCustomSizePreset(int32_t) const ;
    int32_t getCustomSizePreset() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setCustomContentHeight(int32_t) const ;
    int32_t getCustomContentHeight() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setStartScrollBottom(bool) const ;
    bool getStartScrollBottom() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setContentIntentAvailableOffline(bool) const ;
    bool getContentIntentAvailableOffline() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setHintHideIcon(bool) const ;
    bool getHintHideIcon() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setHintShowBackgroundOnly(bool) const ;
    bool getHintShowBackgroundOnly() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setHintAvoidBackgroundClipping(bool) const ;
    bool getHintAvoidBackgroundClipping() const ;
    ::android::support::v4::app::NotificationCompat_WearableExtender setHintScreenTimeout(int32_t) const ;
    int32_t getHintScreenTimeout() const ;

};
}
}
}
}


