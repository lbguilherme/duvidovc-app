#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace animation { class Animator_AnimatorListener; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace android { namespace view { class ViewPropertyAnimator; } }

namespace android {
namespace view {
class ViewPropertyAnimator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewPropertyAnimator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewPropertyAnimator(const ::android::view::ViewPropertyAnimator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewPropertyAnimator(::android::view::ViewPropertyAnimator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::ViewPropertyAnimator& operator=(const ::android::view::ViewPropertyAnimator& x) {obj = x.obj; return *this;}
    ::android::view::ViewPropertyAnimator& operator=(::android::view::ViewPropertyAnimator&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::view::ViewPropertyAnimator setDuration(int64_t) const ;
    int64_t getDuration() const ;
    int64_t getStartDelay() const ;
    ::android::view::ViewPropertyAnimator setStartDelay(int64_t) const ;
    ::android::view::ViewPropertyAnimator setInterpolator(const ::android::animation::TimeInterpolator&) const ;
    ::android::view::ViewPropertyAnimator setListener(const ::android::animation::Animator_AnimatorListener&) const ;
    void start() const ;
    void cancel() const ;
    ::android::view::ViewPropertyAnimator x(float) const ;
    ::android::view::ViewPropertyAnimator xBy(float) const ;
    ::android::view::ViewPropertyAnimator y(float) const ;
    ::android::view::ViewPropertyAnimator yBy(float) const ;
    ::android::view::ViewPropertyAnimator rotation(float) const ;
    ::android::view::ViewPropertyAnimator rotationBy(float) const ;
    ::android::view::ViewPropertyAnimator rotationX(float) const ;
    ::android::view::ViewPropertyAnimator rotationXBy(float) const ;
    ::android::view::ViewPropertyAnimator rotationY(float) const ;
    ::android::view::ViewPropertyAnimator rotationYBy(float) const ;
    ::android::view::ViewPropertyAnimator translationX(float) const ;
    ::android::view::ViewPropertyAnimator translationXBy(float) const ;
    ::android::view::ViewPropertyAnimator translationY(float) const ;
    ::android::view::ViewPropertyAnimator translationYBy(float) const ;
    ::android::view::ViewPropertyAnimator scaleX(float) const ;
    ::android::view::ViewPropertyAnimator scaleXBy(float) const ;
    ::android::view::ViewPropertyAnimator scaleY(float) const ;
    ::android::view::ViewPropertyAnimator scaleYBy(float) const ;
    ::android::view::ViewPropertyAnimator alpha(float) const ;
    ::android::view::ViewPropertyAnimator alphaBy(float) const ;

};
}
}


