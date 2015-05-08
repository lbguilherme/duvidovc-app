#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace hardware {
class SensorEvent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SensorEvent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SensorEvent(const ::android::hardware::SensorEvent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SensorEvent(::android::hardware::SensorEvent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::SensorEvent& operator=(const ::android::hardware::SensorEvent& x) {obj = x.obj; return *this;}
    ::android::hardware::SensorEvent& operator=(::android::hardware::SensorEvent&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


