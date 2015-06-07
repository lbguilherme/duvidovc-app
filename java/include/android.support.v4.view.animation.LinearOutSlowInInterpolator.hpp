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
class LinearOutSlowInInterpolator : public virtual ::java::lang::Object,
                                    public virtual ::android::support::v4::view::animation::LookupTableInterpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LinearOutSlowInInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::support::v4::view::animation::LookupTableInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LinearOutSlowInInterpolator(const ::android::support::v4::view::animation::LinearOutSlowInInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    LinearOutSlowInInterpolator(::android::support::v4::view::animation::LinearOutSlowInInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::support::v4::view::animation::LookupTableInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::animation::LinearOutSlowInInterpolator& operator=(const ::android::support::v4::view::animation::LinearOutSlowInInterpolator& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::animation::LinearOutSlowInInterpolator& operator=(::android::support::v4::view::animation::LinearOutSlowInInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    LinearOutSlowInInterpolator();
    float getInterpolation(float) const ;

};
}
}
}
}
}


