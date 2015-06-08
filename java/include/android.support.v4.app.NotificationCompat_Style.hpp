#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace support { namespace v4 { namespace app { class NotificationCompat_Builder; } } } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompat_Style : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompat_Style(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompat_Style(const ::android::support::v4::app::NotificationCompat_Style& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompat_Style(::android::support::v4::app::NotificationCompat_Style&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompat_Style& operator=(const ::android::support::v4::app::NotificationCompat_Style& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompat_Style& operator=(::android::support::v4::app::NotificationCompat_Style&& x) {obj = std::move(x.obj); return *this;}
    
    NotificationCompat_Style();
    void setBuilder(const ::android::support::v4::app::NotificationCompat_Builder&) const;
    ::android::app::Notification build() const;

};
}
}
}
}


