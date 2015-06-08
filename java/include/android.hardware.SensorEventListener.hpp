#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Sensor; } }
namespace android { namespace hardware { class SensorEvent; } }

namespace android {
namespace hardware {
class SensorEventListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SensorEventListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SensorEventListener(const ::android::hardware::SensorEventListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SensorEventListener(::android::hardware::SensorEventListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::SensorEventListener& operator=(const ::android::hardware::SensorEventListener& x) {obj = x.obj; return *this;}
    ::android::hardware::SensorEventListener& operator=(::android::hardware::SensorEventListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSensorChanged(const ::android::hardware::SensorEvent&) const;
    void onAccuracyChanged(const ::android::hardware::Sensor&, int32_t) const;

};
}
}


