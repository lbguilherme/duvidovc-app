#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class AlarmClock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlarmClock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlarmClock(const ::android::provider::AlarmClock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AlarmClock(::android::provider::AlarmClock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::AlarmClock& operator=(const ::android::provider::AlarmClock& x) {obj = x.obj; return *this;}
    ::android::provider::AlarmClock& operator=(::android::provider::AlarmClock&& x) {obj = std::move(x.obj); return *this;}
    
    AlarmClock();

};
}
}


