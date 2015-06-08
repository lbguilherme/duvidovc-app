#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_Extender.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_CarExtender; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_CarExtender_UnreadConversation; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_CarExtender : public virtual ::java::lang::Object,
                                       public virtual ::android::support::v4::app::NotificationCompat_Extender {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_CarExtender(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_Extender(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_CarExtender(const ::android::support::v4::app::NotificationCompat_CarExtender& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {obj = x.obj;}
    NotificationCompat_CarExtender(::android::support::v4::app::NotificationCompat_CarExtender&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Extender((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_CarExtender& operator=(const ::android::support::v4::app::NotificationCompat_CarExtender& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_CarExtender& operator=(::android::support::v4::app::NotificationCompat_CarExtender&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_CarExtender();
    NotificationCompat_CarExtender(const ::android::app::Notification&);
    ::android::support::v4::app::NotificationCompat_Builder extend(const ::android::support::v4::app::NotificationCompat_Builder&) const;
    ::android::support::v4::app::NotificationCompat_CarExtender setColor(int32_t) const;
    int32_t getColor() const;
    ::android::support::v4::app::NotificationCompat_CarExtender setLargeIcon(const ::android::graphics::Bitmap&) const;
    ::android::graphics::Bitmap getLargeIcon() const;
    ::android::support::v4::app::NotificationCompat_CarExtender setUnreadConversation(const ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation&) const;
    ::android::support::v4::app::NotificationCompat_CarExtender_UnreadConversation getUnreadConversation() const;

};
}
}
}
}

#include "android.support.v4.app.NotificationCompat_CarExtender_UnreadConversation.hpp"
#include "android.support.v4.app.NotificationCompat_CarExtender_UnreadConversation_Builder.hpp"

