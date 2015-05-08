#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace view {
namespace animation {
class LayoutAnimationController_AnimationParameters : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutAnimationController_AnimationParameters(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutAnimationController_AnimationParameters(const ::android::view::animation::LayoutAnimationController_AnimationParameters& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutAnimationController_AnimationParameters(::android::view::animation::LayoutAnimationController_AnimationParameters&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::LayoutAnimationController_AnimationParameters& operator=(const ::android::view::animation::LayoutAnimationController_AnimationParameters& x) {obj = x.obj; return *this;}
    ::android::view::animation::LayoutAnimationController_AnimationParameters& operator=(::android::view::animation::LayoutAnimationController_AnimationParameters&& x) {obj = std::move(x.obj); return *this;}
    
    LayoutAnimationController_AnimationParameters();

};
}
}
}


