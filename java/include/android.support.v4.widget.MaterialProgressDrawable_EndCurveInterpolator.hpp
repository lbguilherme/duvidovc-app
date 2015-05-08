#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.AccelerateDecelerateInterpolator.hpp"


namespace android {
namespace support {
namespace v4 {
namespace widget {
class MaterialProgressDrawable_EndCurveInterpolator : public virtual ::java::lang::Object,
                                                      public virtual ::android::view::animation::AccelerateDecelerateInterpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MaterialProgressDrawable_EndCurveInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::view::animation::AccelerateDecelerateInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MaterialProgressDrawable_EndCurveInterpolator(const ::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::AccelerateDecelerateInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    MaterialProgressDrawable_EndCurveInterpolator(::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::AccelerateDecelerateInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator& operator=(const ::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator& operator=(::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    float getInterpolation(float) const ;

};
}
}
}
}


