#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.Animator.hpp"

namespace android { namespace animation { class PropertyValuesHolder; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace android { namespace animation { class TypeEvaluator; } }
namespace android { namespace animation { class ValueAnimator; } }
namespace android { namespace animation { class ValueAnimator_AnimatorUpdateListener; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace animation {
class ValueAnimator : public virtual ::java::lang::Object,
                      public virtual ::android::animation::Animator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ValueAnimator(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::Animator(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ValueAnimator(const ::android::animation::ValueAnimator& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    ValueAnimator(::android::animation::ValueAnimator&& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::ValueAnimator& operator=(const ::android::animation::ValueAnimator& x) {obj = x.obj; return *this;}
    ::android::animation::ValueAnimator& operator=(::android::animation::ValueAnimator&& x) {obj = std::move(x.obj); return *this;}
    
    ValueAnimator();
    static ::android::animation::ValueAnimator ofInt(const std::vector< int32_t>&);
    static ::android::animation::ValueAnimator ofFloat(const std::vector< float>&);
    static ::android::animation::ValueAnimator ofPropertyValuesHolder(const std::vector< ::android::animation::PropertyValuesHolder>&);
    static ::android::animation::ValueAnimator ofObject(const ::android::animation::TypeEvaluator&, const std::vector< ::java::lang::Object>&);
    void setIntValues(const std::vector< int32_t>&) const ;
    void setFloatValues(const std::vector< float>&) const ;
    void setObjectValues(const std::vector< ::java::lang::Object>&) const ;
    void setValues(const std::vector< ::android::animation::PropertyValuesHolder>&) const ;
    std::vector< ::android::animation::PropertyValuesHolder> getValues() const ;
    ::android::animation::ValueAnimator setDuration(int64_t) const ;
    int64_t getDuration() const ;
    void setCurrentPlayTime(int64_t) const ;
    int64_t getCurrentPlayTime() const ;
    int64_t getStartDelay() const ;
    void setStartDelay(int64_t) const ;
    static int64_t getFrameDelay();
    static void setFrameDelay(int64_t);
    ::java::lang::Object getAnimatedValue() const ;
    ::java::lang::Object getAnimatedValue(const ::java::lang::String&) const ;
    void setRepeatCount(int32_t) const ;
    int32_t getRepeatCount() const ;
    void setRepeatMode(int32_t) const ;
    int32_t getRepeatMode() const ;
    void addUpdateListener(const ::android::animation::ValueAnimator_AnimatorUpdateListener&) const ;
    void removeAllUpdateListeners() const ;
    void removeUpdateListener(const ::android::animation::ValueAnimator_AnimatorUpdateListener&) const ;
    void setInterpolator(const ::android::animation::TimeInterpolator&) const ;
    ::android::animation::TimeInterpolator getInterpolator() const ;
    void setEvaluator(const ::android::animation::TypeEvaluator&) const ;
    void start() const ;
    void cancel() const ;
    void end() const ;
    bool isRunning() const ;
    bool isStarted() const ;
    void reverse() const ;
    float getAnimatedFraction() const ;
    ::android::animation::ValueAnimator clone() const ;
    ::java::lang::String toString() const ;

};
}
}

#include "android.animation.ValueAnimator_AnimatorUpdateListener.hpp"

