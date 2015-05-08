#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action_Extender; } } } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Action_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Action_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Action_Builder(const ::android::support::v4::app::NotificationCompat_Action_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_Action_Builder(::android::support::v4::app::NotificationCompat_Action_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Action_Builder& operator=(const ::android::support::v4::app::NotificationCompat_Action_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Action_Builder& operator=(::android::support::v4::app::NotificationCompat_Action_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_Action_Builder(int32_t, const ::java::lang::CharSequence&, const ::android::app::PendingIntent&);
    NotificationCompat_Action_Builder(const ::android::support::v4::app::NotificationCompat_Action&);
    ::android::support::v4::app::NotificationCompat_Action_Builder addExtras(const ::android::os::Bundle&) const ;
    ::android::os::Bundle getExtras() const ;
    ::android::support::v4::app::NotificationCompat_Action_Builder addRemoteInput(const ::android::support::v4::app::RemoteInput&) const ;
    ::android::support::v4::app::NotificationCompat_Action_Builder extend(const ::android::support::v4::app::NotificationCompat_Action_Extender&) const ;
    ::android::support::v4::app::NotificationCompat_Action build() const ;

};
}
}
}
}


