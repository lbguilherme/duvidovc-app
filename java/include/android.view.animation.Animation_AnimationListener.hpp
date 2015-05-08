#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { namespace animation { class Animation; } } }

namespace android {
namespace view {
namespace animation {
class Animation_AnimationListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animation_AnimationListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animation_AnimationListener(const ::android::view::animation::Animation_AnimationListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Animation_AnimationListener(::android::view::animation::Animation_AnimationListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::Animation_AnimationListener& operator=(const ::android::view::animation::Animation_AnimationListener& x) {obj = x.obj; return *this;}
    ::android::view::animation::Animation_AnimationListener& operator=(::android::view::animation::Animation_AnimationListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAnimationStart(const ::android::view::animation::Animation&) const ;
    void onAnimationEnd(const ::android::view::animation::Animation&) const ;
    void onAnimationRepeat(const ::android::view::animation::Animation&) const ;

};
}
}
}


