#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.Interpolator.hpp"


namespace android {
namespace support {
namespace v4 {
namespace view {
namespace animation {
class LookupTableInterpolator : public virtual ::java::lang::Object,
                                public virtual ::android::view::animation::Interpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LookupTableInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LookupTableInterpolator(const ::android::support::v4::view::animation::LookupTableInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    LookupTableInterpolator(::android::support::v4::view::animation::LookupTableInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::view::animation::LookupTableInterpolator& operator=(const ::android::support::v4::view::animation::LookupTableInterpolator& x) {obj = x.obj; return *this;}
    ::android::support::v4::view::animation::LookupTableInterpolator& operator=(::android::support::v4::view::animation::LookupTableInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    LookupTableInterpolator(const std::vector< float>&);
    float getInterpolation(float) const ;

};
}
}
}
}
}


