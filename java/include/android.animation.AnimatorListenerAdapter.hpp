#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.Animator_AnimatorListener.hpp"

namespace android { namespace animation { class Animator; } }

namespace android {
namespace animation {
class AnimatorListenerAdapter : public virtual ::java::lang::Object,
                                public virtual ::android::animation::Animator_AnimatorListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimatorListenerAdapter(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::Animator_AnimatorListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimatorListenerAdapter(const ::android::animation::AnimatorListenerAdapter& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator_AnimatorListener((jobject)0) {obj = x.obj;}
    AnimatorListenerAdapter(::android::animation::AnimatorListenerAdapter&& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator_AnimatorListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::AnimatorListenerAdapter& operator=(const ::android::animation::AnimatorListenerAdapter& x) {obj = x.obj; return *this;}
    ::android::animation::AnimatorListenerAdapter& operator=(::android::animation::AnimatorListenerAdapter&& x) {obj = std::move(x.obj); return *this;}
    
    AnimatorListenerAdapter();
    void onAnimationCancel(const ::android::animation::Animator&) const;
    void onAnimationEnd(const ::android::animation::Animator&) const;
    void onAnimationRepeat(const ::android::animation::Animator&) const;
    void onAnimationStart(const ::android::animation::Animator&) const;

};
}
}


