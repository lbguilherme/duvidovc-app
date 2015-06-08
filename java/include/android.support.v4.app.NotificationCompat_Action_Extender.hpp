#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Action_Builder; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Action_Extender : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Action_Extender(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Action_Extender(const ::android::support::v4::app::NotificationCompat_Action_Extender& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_Action_Extender(::android::support::v4::app::NotificationCompat_Action_Extender&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Action_Extender& operator=(const ::android::support::v4::app::NotificationCompat_Action_Extender& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Action_Extender& operator=(::android::support::v4::app::NotificationCompat_Action_Extender&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::app::NotificationCompat_Action_Builder extend(const ::android::support::v4::app::NotificationCompat_Action_Builder&) const;

};
}
}
}
}


