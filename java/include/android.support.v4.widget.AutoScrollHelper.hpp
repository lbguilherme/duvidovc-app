#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnTouchListener.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class AutoScrollHelper; } } } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class AutoScrollHelper : public virtual ::java::lang::Object,
                         public virtual ::android::view::View_OnTouchListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoScrollHelper(jobject _obj) : ::java::lang::Object(_obj), ::android::view::View_OnTouchListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoScrollHelper(const ::android::support::v4::widget::AutoScrollHelper& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj;}
    AutoScrollHelper(::android::support::v4::widget::AutoScrollHelper&& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::AutoScrollHelper& operator=(const ::android::support::v4::widget::AutoScrollHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::AutoScrollHelper& operator=(::android::support::v4::widget::AutoScrollHelper&& x) {obj = std::move(x.obj); return *this;}
    
    AutoScrollHelper(const ::android::view::View&);
    ::android::support::v4::widget::AutoScrollHelper setEnabled(bool) const ;
    bool isEnabled() const ;
    ::android::support::v4::widget::AutoScrollHelper setExclusive(bool) const ;
    bool isExclusive() const ;
    ::android::support::v4::widget::AutoScrollHelper setMaximumVelocity(float, float) const ;
    ::android::support::v4::widget::AutoScrollHelper setMinimumVelocity(float, float) const ;
    ::android::support::v4::widget::AutoScrollHelper setRelativeVelocity(float, float) const ;
    ::android::support::v4::widget::AutoScrollHelper setEdgeType(int32_t) const ;
    ::android::support::v4::widget::AutoScrollHelper setRelativeEdges(float, float) const ;
    ::android::support::v4::widget::AutoScrollHelper setMaximumEdges(float, float) const ;
    ::android::support::v4::widget::AutoScrollHelper setActivationDelay(int32_t) const ;
    ::android::support::v4::widget::AutoScrollHelper setRampUpDuration(int32_t) const ;
    ::android::support::v4::widget::AutoScrollHelper setRampDownDuration(int32_t) const ;
    bool onTouch(const ::android::view::View&, const ::android::view::MotionEvent&) const ;
    void scrollTargetBy(int32_t, int32_t) const ;
    bool canTargetScrollHorizontally(int32_t) const ;
    bool canTargetScrollVertically(int32_t) const ;

};
}
}
}
}

#include "android.support.v4.widget.AutoScrollHelper_ClampedScroller.hpp"
#include "android.support.v4.widget.AutoScrollHelper_ScrollAnimationRunnable.hpp"

