#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace hardware {
class SensorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SensorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SensorListener(const ::android::hardware::SensorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SensorListener(::android::hardware::SensorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::SensorListener& operator=(const ::android::hardware::SensorListener& x) {obj = x.obj; return *this;}
    ::android::hardware::SensorListener& operator=(::android::hardware::SensorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSensorChanged(int32_t, const std::vector< float>&) const ;
    void onAccuracyChanged(int32_t, int32_t) const ;

};
}
}


