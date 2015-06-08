#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace app { class RemoteInput; } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Action : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Action(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Action(const ::android::support::v4::app::NotificationCompat_Action& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_Action(::android::support::v4::app::NotificationCompat_Action&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Action& operator=(const ::android::support::v4::app::NotificationCompat_Action& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Action& operator=(::android::support::v4::app::NotificationCompat_Action&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_Action(int32_t, const ::java::lang::CharSequence&, const ::android::app::PendingIntent&);
    ::android::os::Bundle getExtras() const;
    std::vector< ::android::support::v4::app::RemoteInput> getRemoteInputs() const;

};
}
}
}
}

#include "android.support.v4.app.NotificationCompat_Action_Builder.hpp"
#include "android.support.v4.app.NotificationCompat_Action_Extender.hpp"
#include "android.support.v4.app.NotificationCompat_Action_WearableExtender.hpp"

