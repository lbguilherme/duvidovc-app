#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { namespace animation { class Animation; } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace android { namespace view { namespace animation { class LayoutAnimationController; } } }

namespace android {
namespace view {
namespace animation {
class AnimationUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimationUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimationUtils(const ::android::view::animation::AnimationUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AnimationUtils(::android::view::animation::AnimationUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::AnimationUtils& operator=(const ::android::view::animation::AnimationUtils& x) {obj = x.obj; return *this;}
    ::android::view::animation::AnimationUtils& operator=(::android::view::animation::AnimationUtils&& x) {obj = std::move(x.obj); return *this;}
    
    AnimationUtils();
    static int64_t currentAnimationTimeMillis();
    static ::android::view::animation::Animation loadAnimation(const ::android::content::Context&, int32_t);
    static ::android::view::animation::LayoutAnimationController loadLayoutAnimation(const ::android::content::Context&, int32_t);
    static ::android::view::animation::Animation makeInAnimation(const ::android::content::Context&, bool);
    static ::android::view::animation::Animation makeOutAnimation(const ::android::content::Context&, bool);
    static ::android::view::animation::Animation makeInChildBottomAnimation(const ::android::content::Context&);
    static ::android::view::animation::Interpolator loadInterpolator(const ::android::content::Context&, int32_t);

};
}
}
}


