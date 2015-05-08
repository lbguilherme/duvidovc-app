#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace app {
class NotificationCompatExtras : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NotificationCompatExtras(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NotificationCompatExtras(const ::android::support::v4::app::NotificationCompatExtras& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    NotificationCompatExtras(::android::support::v4::app::NotificationCompatExtras&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::NotificationCompatExtras& operator=(const ::android::support::v4::app::NotificationCompatExtras& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::NotificationCompatExtras& operator=(::android::support::v4::app::NotificationCompatExtras&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


