#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.animation.LayoutAnimationController.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace animation { class Animation; } } }

namespace android {
namespace view {
namespace animation {
class GridLayoutAnimationController : public virtual ::java::lang::Object,
                                      public virtual ::android::view::animation::LayoutAnimationController {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GridLayoutAnimationController(jobject _obj) : ::java::lang::Object(_obj), ::android::view::animation::LayoutAnimationController(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GridLayoutAnimationController(const ::android::view::animation::GridLayoutAnimationController& x) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController((jobject)0) {obj = x.obj;}
    GridLayoutAnimationController(::android::view::animation::GridLayoutAnimationController&& x) : ::java::lang::Object((jobject)0), ::android::view::animation::LayoutAnimationController((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::GridLayoutAnimationController& operator=(const ::android::view::animation::GridLayoutAnimationController& x) {obj = x.obj; return *this;}
    ::android::view::animation::GridLayoutAnimationController& operator=(::android::view::animation::GridLayoutAnimationController&& x) {obj = std::move(x.obj); return *this;}
    
    GridLayoutAnimationController(const ::android::content::Context&, const ::android::util::AttributeSet&);
    GridLayoutAnimationController(const ::android::view::animation::Animation&);
    GridLayoutAnimationController(const ::android::view::animation::Animation&, float, float);
    float getColumnDelay() const ;
    void setColumnDelay(float) const ;
    float getRowDelay() const ;
    void setRowDelay(float) const ;
    int32_t getDirection() const ;
    void setDirection(int32_t) const ;
    int32_t getDirectionPriority() const ;
    void setDirectionPriority(int32_t) const ;
    bool willOverlap() const ;

};
}
}
}

#include "android.view.animation.GridLayoutAnimationController_AnimationParameters.hpp"

