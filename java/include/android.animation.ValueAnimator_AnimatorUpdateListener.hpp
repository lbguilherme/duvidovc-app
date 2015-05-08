#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class ValueAnimator; } }

namespace android {
namespace animation {
class ValueAnimator_AnimatorUpdateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ValueAnimator_AnimatorUpdateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ValueAnimator_AnimatorUpdateListener(const ::android::animation::ValueAnimator_AnimatorUpdateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ValueAnimator_AnimatorUpdateListener(::android::animation::ValueAnimator_AnimatorUpdateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::ValueAnimator_AnimatorUpdateListener& operator=(const ::android::animation::ValueAnimator_AnimatorUpdateListener& x) {obj = x.obj; return *this;}
    ::android::animation::ValueAnimator_AnimatorUpdateListener& operator=(::android::animation::ValueAnimator_AnimatorUpdateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAnimationUpdate(const ::android::animation::ValueAnimator&) const ;

};
}
}


