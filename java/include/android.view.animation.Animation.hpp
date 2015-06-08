#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace animation { class Animation_AnimationListener; } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }
namespace android { namespace view { namespace animation { class Transformation; } } }

namespace android {
namespace view {
namespace animation {
class Animation : public virtual ::java::lang::Object,
                  public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Animation(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Animation(const ::android::view::animation::Animation& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Animation(::android::view::animation::Animation&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::Animation& operator=(const ::android::view::animation::Animation& x) {obj = x.obj; return *this;}
    ::android::view::animation::Animation& operator=(::android::view::animation::Animation&& x) {obj = std::move(x.obj); return *this;}
    
    Animation();
    Animation(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void reset() const;
    void cancel() const;
    bool isInitialized() const;
    void initialize(int32_t, int32_t, int32_t, int32_t) const;
    void setInterpolator(const ::android::content::Context&, int32_t) const;
    void setInterpolator(const ::android::view::animation::Interpolator&) const;
    void setStartOffset(int64_t) const;
    void setDuration(int64_t) const;
    void restrictDuration(int64_t) const;
    void scaleCurrentDuration(float) const;
    void setStartTime(int64_t) const;
    void start() const;
    void startNow() const;
    void setRepeatMode(int32_t) const;
    void setRepeatCount(int32_t) const;
    bool isFillEnabled() const;
    void setFillEnabled(bool) const;
    void setFillBefore(bool) const;
    void setFillAfter(bool) const;
    void setZAdjustment(int32_t) const;
    void setBackgroundColor(int32_t) const;
    void setDetachWallpaper(bool) const;
    ::android::view::animation::Interpolator getInterpolator() const;
    int64_t getStartTime() const;
    int64_t getDuration() const;
    int64_t getStartOffset() const;
    int32_t getRepeatMode() const;
    int32_t getRepeatCount() const;
    bool getFillBefore() const;
    bool getFillAfter() const;
    int32_t getZAdjustment() const;
    int32_t getBackgroundColor() const;
    bool getDetachWallpaper() const;
    bool willChangeTransformationMatrix() const;
    bool willChangeBounds() const;
    void setAnimationListener(const ::android::view::animation::Animation_AnimationListener&) const;
    int64_t computeDurationHint() const;
    bool getTransformation(int64_t, const ::android::view::animation::Transformation&) const;
    bool getTransformation(int64_t, const ::android::view::animation::Transformation&, float) const;
    bool hasStarted() const;
    bool hasEnded() const;

};
}
}
}

#include "android.view.animation.Animation_AnimationListener.hpp"
#include "android.view.animation.Animation_Description.hpp"

