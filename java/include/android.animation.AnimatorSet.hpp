#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.animation.Animator.hpp"

namespace android { namespace animation { class Animator; } }
namespace android { namespace animation { class AnimatorSet; } }
namespace android { namespace animation { class AnimatorSet_Builder; } }
namespace android { namespace animation { class TimeInterpolator; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class List; } }

namespace android {
namespace animation {
class AnimatorSet : public virtual ::java::lang::Object,
                    public virtual ::android::animation::Animator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimatorSet(jobject _obj) : ::java::lang::Object(_obj), ::android::animation::Animator(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimatorSet(const ::android::animation::AnimatorSet& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    AnimatorSet(::android::animation::AnimatorSet&& x) : ::java::lang::Object((jobject)0), ::android::animation::Animator((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::animation::AnimatorSet& operator=(const ::android::animation::AnimatorSet& x) {obj = x.obj; return *this;}
    ::android::animation::AnimatorSet& operator=(::android::animation::AnimatorSet&& x) {obj = std::move(x.obj); return *this;}
    
    AnimatorSet();
    void playTogether(const std::vector< ::android::animation::Animator>&) const ;
    void playTogether(const ::java::util::Collection&) const ;
    void playSequentially(const std::vector< ::android::animation::Animator>&) const ;
    void playSequentially(const ::java::util::List&) const ;
    ::java::util::ArrayList getChildAnimations() const ;
    void setTarget(const ::java::lang::Object&) const ;
    void setInterpolator(const ::android::animation::TimeInterpolator&) const ;
    ::android::animation::AnimatorSet_Builder play(const ::android::animation::Animator&) const ;
    void cancel() const ;
    void end() const ;
    bool isRunning() const ;
    bool isStarted() const ;
    int64_t getStartDelay() const ;
    void setStartDelay(int64_t) const ;
    int64_t getDuration() const ;
    ::android::animation::AnimatorSet setDuration(int64_t) const ;
    void setupStartValues() const ;
    void setupEndValues() const ;
    void start() const ;
    ::android::animation::AnimatorSet clone() const ;

};
}
}

#include "android.animation.AnimatorSet_Builder.hpp"

