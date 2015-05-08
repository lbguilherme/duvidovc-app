#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.Interpolator.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace view {
namespace animation {
class DecelerateInterpolator : public virtual ::java::lang::Object,
                               public virtual ::android::view::animation::Interpolator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DecelerateInterpolator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::TimeInterpolator(_obj), ::android::view::animation::Interpolator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DecelerateInterpolator(const ::android::view::animation::DecelerateInterpolator& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj;}
    DecelerateInterpolator(::android::view::animation::DecelerateInterpolator&& x) : ::java::lang::Object((jobject)0), ::android::animation::TimeInterpolator((jobject)0), ::android::view::animation::Interpolator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::DecelerateInterpolator& operator=(const ::android::view::animation::DecelerateInterpolator& x) {obj = x.obj; return *this;}
    ::android::view::animation::DecelerateInterpolator& operator=(::android::view::animation::DecelerateInterpolator&& x) {obj = std::move(x.obj); return *this;}
    
    DecelerateInterpolator();
    DecelerateInterpolator(float);
    DecelerateInterpolator(const ::android::content::Context&, const ::android::util::AttributeSet&);
    float getInterpolation(float) const ;

};
}
}
}


