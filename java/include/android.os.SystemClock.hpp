#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class SystemClock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SystemClock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SystemClock(const ::android::os::SystemClock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SystemClock(::android::os::SystemClock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::SystemClock& operator=(const ::android::os::SystemClock& x) {obj = x.obj; return *this;}
    ::android::os::SystemClock& operator=(::android::os::SystemClock&& x) {obj = std::move(x.obj); return *this;}
    
    static void sleep(int64_t);
    static bool setCurrentTimeMillis(int64_t);
    static int64_t uptimeMillis();
    static int64_t elapsedRealtime();
    static int64_t currentThreadTimeMillis();

};
}
}


