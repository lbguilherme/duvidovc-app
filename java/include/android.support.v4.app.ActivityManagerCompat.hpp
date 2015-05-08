#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class ActivityManager; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class ActivityManagerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityManagerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityManagerCompat(const ::android::support::v4::app::ActivityManagerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ActivityManagerCompat(::android::support::v4::app::ActivityManagerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::ActivityManagerCompat& operator=(const ::android::support::v4::app::ActivityManagerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::ActivityManagerCompat& operator=(::android::support::v4::app::ActivityManagerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isLowRamDevice(const ::android::app::ActivityManager&);

};
}
}
}
}


