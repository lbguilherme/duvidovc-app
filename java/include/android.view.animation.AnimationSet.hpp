#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.Animation.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace animation { class Animation; } } }
namespace android { namespace view { namespace animation { class Transformation; } } }
namespace java { namespace util { class List; } }

namespace android {
namespace view {
namespace animation {
class AnimationSet : public virtual ::java::lang::Object,
                     public virtual ::android::view::animation::Animation {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AnimationSet(jobject _obj) : ::java::lang::Object(_obj), ::android::view::animation::Animation(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AnimationSet(const ::android::view::animation::AnimationSet& x) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    AnimationSet(::android::view::animation::AnimationSet&& x) : ::java::lang::Object((jobject)0), ::android::view::animation::Animation((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::AnimationSet& operator=(const ::android::view::animation::AnimationSet& x) {obj = x.obj; return *this;}
    ::android::view::animation::AnimationSet& operator=(::android::view::animation::AnimationSet&& x) {obj = std::move(x.obj); return *this;}
    
    AnimationSet(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AnimationSet(bool);
    void setFillAfter(bool) const ;
    void setFillBefore(bool) const ;
    void setRepeatMode(int32_t) const ;
    void setStartOffset(int64_t) const ;
    void setDuration(int64_t) const ;
    void addAnimation(const ::android::view::animation::Animation&) const ;
    void setStartTime(int64_t) const ;
    int64_t getStartTime() const ;
    void restrictDuration(int64_t) const ;
    int64_t getDuration() const ;
    int64_t computeDurationHint() const ;
    bool getTransformation(int64_t, const ::android::view::animation::Transformation&) const ;
    void scaleCurrentDuration(float) const ;
    void initialize(int32_t, int32_t, int32_t, int32_t) const ;
    void reset() const ;
    ::java::util::List getAnimations() const ;
    bool willChangeTransformationMatrix() const ;
    bool willChangeBounds() const ;

};
}
}
}


