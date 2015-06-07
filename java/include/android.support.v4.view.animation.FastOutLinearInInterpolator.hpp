#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.view.animation.LookupTableInterpolator.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
namespace animation {
class FastOutLinearInInterpolator : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::view::animation::LookupTableInterpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FastOutLinearInInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::support::v4::view::animation::LookupTableInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FastOutLinearInInterpolator(const ::android::support::v4::view::animation::FastOutLinearInInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    FastOutLinearInInterpolator(::android::support::v4::view::animation::FastOutLinearInInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::animation::FastOutLinearInInterpolator& operator=(const ::android::support::v4::view::animation::FastOutLinearInInterpolator& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::animation::FastOutLinearInInterpolator& operator=(::android::support::v4::view::animation::FastOutLinearInInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    FastOutLinearInInterpolator();
    float getInterpolation(float) const ;

};
}
}
}
}
}


