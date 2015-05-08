#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
class InputDevice_MotionRange : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputDevice_MotionRange(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputDevice_MotionRange(const ::android::view::InputDevice_MotionRange& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputDevice_MotionRange(::android::view::InputDevice_MotionRange&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::InputDevice_MotionRange& operator=(const ::android::view::InputDevice_MotionRange& x) {obj = x.obj; return *this;}
    ::android::view::InputDevice_MotionRange& operator=(::android::view::InputDevice_MotionRange&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getAxis() const ;
    int32_t getSource() const ;
    float getMin() const ;
    float getMax() const ;
    float getRange() const ;
    float getFlat() const ;
    float getFuzz() const ;

};
}
}


