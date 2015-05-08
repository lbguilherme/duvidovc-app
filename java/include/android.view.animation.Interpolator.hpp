#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.TimeInterpolator.hpp"


namespace android {
namespace view {
namespace animation {
class Interpolator : public virtual ::java::lang::Object,
                     public virtual ::android::animation::TimeInterpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Interpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Interpolator(const ::android::view::animation::Interpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0) {obj = x.obj;}
    Interpolator(::android::view::animation::Interpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::Interpolator& operator=(const ::android::view::animation::Interpolator& x) {obj = x.obj; return *this;}
    ::android::view::animation::Interpolator& operator=(::android::view::animation::Interpolator&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


