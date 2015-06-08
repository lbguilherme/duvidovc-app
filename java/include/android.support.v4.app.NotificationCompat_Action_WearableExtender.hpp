#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.NotificationCompat_Action_Extender.hpp"

namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action_WearableExtender; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Action_WearableExtender : public virtual ::java::lang::Object,
                                                   public virtual ::android::support::v4::app::NotificationCompat_Action_Extender {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Action_WearableExtender(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::app::NotificationCompat_Action_Extender(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Action_WearableExtender(const ::android::support::v4::app::NotificationCompat_Action_WearableExtender& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Action_Extender((jobject)0) {obj = x.obj;}
    NotificationCompat_Action_WearableExtender(::android::support::v4::app::NotificationCompat_Action_WearableExtender&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::app::NotificationCompat_Action_Extender((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender& operator=(const ::android::support::v4::app::NotificationCompat_Action_WearableExtender& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender& operator=(::android::support::v4::app::NotificationCompat_Action_WearableExtender&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_Action_WearableExtender();
    NotificationCompat_Action_WearableExtender(const ::android::support::v4::app::NotificationCompat_Action&);
    ::android::support::v4::app::NotificationCompat_Action_Builder extend(const ::android::support::v4::app::NotificationCompat_Action_Builder&) const;
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender clone() const;
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender setAvailableOffline(bool) const;
    bool isAvailableOffline() const;
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender setInProgressLabel(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getInProgressLabel() const;
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender setConfirmLabel(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getConfirmLabel() const;
    ::android::support::v4::app::NotificationCompat_Action_WearableExtender setCancelLabel(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getCancelLabel() const;

};
}
}
}
}


