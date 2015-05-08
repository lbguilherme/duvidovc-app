#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.Interpolator.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class BakedBezierInterpolator; } } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class BakedBezierInterpolator : public virtual ::java::lang::Object,
                                public virtual ::android::view::animation::Interpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BakedBezierInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BakedBezierInterpolator(const ::android::support::v4::widget::BakedBezierInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    BakedBezierInterpolator(::android::support::v4::widget::BakedBezierInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::BakedBezierInterpolator& operator=(const ::android::support::v4::widget::BakedBezierInterpolator& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::BakedBezierInterpolator& operator=(::android::support::v4::widget::BakedBezierInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::widget::BakedBezierInterpolator getInstance();
    float getInterpolation(float) const ;

};
}
}
}
}


