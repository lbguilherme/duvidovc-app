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
class OverScroller : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OverScroller(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OverScroller(const ::android::widget::OverScroller& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    OverScroller(::android::widget::OverScroller&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::OverScroller& operator=(const ::android::widget::OverScroller& x) {obj = x.obj; return *this;}
    ::android::widget::OverScroller& operator=(::android::widget::OverScroller&& x) {obj = std::move(x.obj); return *this;}
    
    OverScroller(const ::android::content::Context&);
    OverScroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&);
    OverScroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&, float, float);
    OverScroller(const ::android::content::Context&, const ::android::view::animation::Interpolator&, float, float, bool);
    void setFriction(float) const;
    bool isFinished() const;
    void forceFinished(bool) const;
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
    bool springBack(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void fling(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void fling(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void notifyHorizontalEdgeReached(int32_t, int32_t, int32_t) const;
    void notifyVerticalEdgeReached(int32_t, int32_t, int32_t) const;
    bool isOverScrolled() const;
    void abortAnimation() const;

};
}
}


