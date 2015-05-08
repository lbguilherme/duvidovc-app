#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class Animator; } }

namespace android {
namespace animation {
class Animator_AnimatorListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animator_AnimatorListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animator_AnimatorListener(const ::android::animation::Animator_AnimatorListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Animator_AnimatorListener(::android::animation::Animator_AnimatorListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::Animator_AnimatorListener& operator=(const ::android::animation::Animator_AnimatorListener& x) {obj = x.obj; return *this;}
    ::android::animation::Animator_AnimatorListener& operator=(::android::animation::Animator_AnimatorListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onAnimationStart(const ::android::animation::Animator&) const ;
    void onAnimationEnd(const ::android::animation::Animator&) const ;
    void onAnimationCancel(const ::android::animation::Animator&) const ;
    void onAnimationRepeat(const ::android::animation::Animator&) const ;

};
}
}


