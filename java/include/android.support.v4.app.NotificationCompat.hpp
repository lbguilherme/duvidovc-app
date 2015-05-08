#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat(const ::android::support::v4::app::NotificationCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat(::android::support::v4::app::NotificationCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat& operator=(const ::android::support::v4::app::NotificationCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat& operator=(::android::support::v4::app::NotificationCompat&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat();
    static ::android::os::Bundle getExtras(const ::android::app::Notification&);
    static int32_t getActionCount(const ::android::app::Notification&);
    static ::android::support::v4::app::NotificationCompat_Action getAction(const ::android::app::Notification&, int32_t);
    static ::java::lang::String getCategory(const ::android::app::Notification&);
    static bool getLocalOnly(const ::android::app::Notification&);
    static ::java::lang::String getGroup(const ::android::app::Notification&);
    static bool isGroupSummary(const ::android::app::Notification&);
    static ::java::lang::String getSortKey(const ::android::app::Notification&);

};
}
}
}
}

#include "android.support.v4.app.NotificationCompat_Action.hpp"
#include "android.support.v4.app.NotificationCompat_BigPictureStyle.hpp"
#include "android.support.v4.app.NotificationCompat_BigTextStyle.hpp"
#include "android.support.v4.app.NotificationCompat_Builder.hpp"
#include "android.support.v4.app.NotificationCompat_CarExtender.hpp"
#include "android.support.v4.app.NotificationCompat_Extender.hpp"
#include "android.support.v4.app.NotificationCompat_InboxStyle.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImpl.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplApi20.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplApi21.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplBase.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplGingerbread.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplHoneycomb.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplIceCreamSandwich.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplJellybean.hpp"
#include "android.support.v4.app.NotificationCompat_NotificationCompatImplKitKat.hpp"
#include "android.support.v4.app.NotificationCompat_Style.hpp"
#include "android.support.v4.app.NotificationCompat_WearableExtender.hpp"
#include "android.support.v4.app.NotificationCompat_Action_Builder.hpp"
#include "android.support.v4.app.NotificationCompat_Action_Extender.hpp"
#include "android.support.v4.app.NotificationCompat_Action_WearableExtender.hpp"
#include "android.support.v4.app.NotificationCompat_CarExtender_UnreadConversation.hpp"
#include "android.support.v4.app.NotificationCompat_CarExtender_UnreadConversation_Builder.hpp"

