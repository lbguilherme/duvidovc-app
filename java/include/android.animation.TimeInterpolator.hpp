#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace animation {
class TimeInterpolator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimeInterpolator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimeInterpolator(const ::android::animation::TimeInterpolator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TimeInterpolator(::android::animation::TimeInterpolator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::TimeInterpolator& operator=(const ::android::animation::TimeInterpolator& x) {obj = x.obj; return *this;}
    ::android::animation::TimeInterpolator& operator=(::android::animation::TimeInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    float getInterpolation(float) const ;

};
}
}


