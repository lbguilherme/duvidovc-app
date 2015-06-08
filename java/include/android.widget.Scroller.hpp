#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace view { namespace animation { class Interpolator; } } }

namespace android {
namespace widget {
class Scroller : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Scroller(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Scroller(const ::android::widget::Scroller& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Scroller(::android::widget::Scroller&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Scroller& operator=(const ::android::widget::Scroller& x) {obj = x.obj; return *this;}
    ::android::widget::Scroller& operator=(::android::widget::Scroller&& x) {obj = std::move(x.obj); return *this;}
    
    Scroller(const ::android::content::Context&);
    Scroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&);
    Scroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&, bool);
    void setFriction(float) const;
    bool isFinished() const;
    void forceFinished(bool) const;
    int32_t getDuration() const;
    int32_t getCurrX() const;
    int32_t getCurrY() const;
    float getCurrVelocity() const;
    int32_t getStartX() const;
    int32_t getStartY() const;
    int32_t getFinalX() const;
    int32_t getFinalY() const;
    bool computeScrollOffset() const;
    void startScroll(int32_t, int32_t, int32_t, int32_t) const;
    void startScroll(int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void fling(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void abortAnimation() const;
    void extendDuration(int32_t) const;
    int32_t timePassed() const;
    void setFinalX(int32_t) const;
    void setFinalY(int32_t) const;

};
}
}


