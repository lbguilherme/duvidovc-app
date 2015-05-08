#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.LayoutAnimationController_AnimationParameters.hpp"


namespace android {
namespace view {
namespace animation {
class GridLayoutAnimationController_AnimationParameters : public virtual ::java::lang::Object,
                                                          public virtual ::android::view::animation::LayoutAnimationController_AnimationParameters {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayoutAnimationController_AnimationParameters(jobject _obj) : ::java::lang::Object(_obj), ::android::view::animation::LayoutAnimationController_AnimationParameters(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayoutAnimationController_AnimationParameters(const ::android::view::animation::GridLayoutAnimationController_AnimationParameters& x) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController_AnimationParameters((jobject)0) {obj = x.obj;}
    GridLayoutAnimationController_AnimationParameters(::android::view::animation::GridLayoutAnimationController_AnimationParameters&& x) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController_AnimationParameters((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::GridLayoutAnimationController_AnimationParameters& operator=(const ::android::view::animation::GridLayoutAnimationController_AnimationParameters& x) {obj = x.obj; return *this;}
    ::android::view::animation::GridLayoutAnimationController_AnimationParameters& operator=(::android::view::animation::GridLayoutAnimationController_AnimationParameters&& x) {obj = std::move(x.obj); return *this;}
    
    GridLayoutAnimationController_AnimationParameters();

};
}
}
}


