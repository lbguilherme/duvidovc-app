#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace hardware {
class Sensor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sensor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sensor(const ::android::hardware::Sensor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Sensor(::android::hardware::Sensor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::hardware::Sensor& operator=(const ::android::hardware::Sensor& x) {obj = x.obj; return *this;}
    ::android::hardware::Sensor& operator=(::android::hardware::Sensor&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getName() const;
    ::java::lang::String getVendor() const;
    int32_t getType() const;
    int32_t getVersion() const;
    float getMaximumRange() const;
    float getResolution() const;
    float getPower() const;
    int32_t getMinDelay() const;

};
}
}


