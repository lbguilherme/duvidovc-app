#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class PowerManager_WakeLock; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class PowerManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PowerManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PowerManager(const ::android::os::PowerManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PowerManager(::android::os::PowerManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::PowerManager& operator=(const ::android::os::PowerManager& x) {obj = x.obj; return *this;}
    ::android::os::PowerManager& operator=(::android::os::PowerManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::PowerManager_WakeLock newWakeLock(int32_t, const ::java::lang::String&) const;
    void userActivity(int64_t, bool) const;
    void goToSleep(int64_t) const;
    bool isScreenOn() const;
    void reboot(const ::java::lang::String&) const;

};
}
}

#include "android.os.PowerManager_WakeLock.hpp"

