#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_Style.hpp"

namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_InboxStyle; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_InboxStyle : public virtual ::java::lang::Object,
                                      public virtual ::android::support::v4::app::NotificationCompat_Style {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_InboxStyle(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_Style(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_InboxStyle(const ::android::support::v4::app::NotificationCompat_InboxStyle& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {obj = x.obj;}
    NotificationCompat_InboxStyle(::android::support::v4::app::NotificationCompat_InboxStyle&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Style((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_InboxStyle& operator=(const ::android::support::v4::app::NotificationCompat_InboxStyle& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_InboxStyle& operator=(::android::support::v4::app::NotificationCompat_InboxStyle&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_InboxStyle();
    NotificationCompat_InboxStyle(const ::android::support::v4::app::NotificationCompat_Builder&);
    ::android::support::v4::app::NotificationCompat_InboxStyle setBigContentTitle(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_InboxStyle setSummaryText(const ::java::lang::CharSequence&) const ;
    ::android::support::v4::app::NotificationCompat_InboxStyle addLine(const ::java::lang::CharSequence&) const ;

};
}
}
}
}


