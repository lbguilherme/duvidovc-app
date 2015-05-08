#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { namespace animation { class Animation; } } }
namespace android { namespace view { namespace animation { class Interpolator; } } }

namespace android {
namespace view {
namespace animation {
class LayoutAnimationController : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayoutAnimationController(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayoutAnimationController(const ::android::view::animation::LayoutAnimationController& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    LayoutAnimationController(::android::view::animation::LayoutAnimationController&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::LayoutAnimationController& operator=(const ::android::view::animation::LayoutAnimationController& x) {obj = x.obj; return *this;}
    ::android::view::animation::LayoutAnimationController& operator=(::android::view::animation::LayoutAnimationController&& x) {obj = std::move(x.obj); return *this;}
    
    LayoutAnimationController(const ::android::content::Context&, const ::android::util::AttributeSet&);
    LayoutAnimationController(const ::android::view::animation::Animation&);
    LayoutAnimationController(const ::android::view::animation::Animation&, float);
    int32_t getOrder() const ;
    void setOrder(int32_t) const ;
    void setAnimation(const ::android::content::Context&, int32_t) const ;
    void setAnimation(const ::android::view::animation::Animation&) const ;
    ::android::view::animation::Animation getAnimation() const ;
    void setInterpolator(const ::android::content::Context&, int32_t) const ;
    void setInterpolator(const ::android::view::animation::Interpolator&) const ;
    ::android::view::animation::Interpolator getInterpolator() const ;
    float getDelay() const ;
    void setDelay(float) const ;
    bool willOverlap() const ;
    void start() const ;
    ::android::view::animation::Animation getAnimationForView(const ::android::view::View&) const ;
    bool isDone() const ;

};
}
}
}

#include "android.view.animation.LayoutAnimationController_AnimationParameters.hpp"

