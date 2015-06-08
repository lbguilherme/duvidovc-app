#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class ViewDragHelper; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class ViewDragHelper_Callback; } } } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ViewDragHelper : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDragHelper(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDragHelper(const ::android::support::v4::widget::ViewDragHelper& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewDragHelper(::android::support::v4::widget::ViewDragHelper&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ViewDragHelper& operator=(const ::android::support::v4::widget::ViewDragHelper& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ViewDragHelper& operator=(::android::support::v4::widget::ViewDragHelper&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::widget::ViewDragHelper create(const ::android::view::ViewGroup&, const ::android::support::v4::widget::ViewDragHelper_Callback&);
    static ::android::support::v4::widget::ViewDragHelper create(const ::android::view::ViewGroup&, float, const ::android::support::v4::widget::ViewDragHelper_Callback&);
    void setMinVelocity(float) const;
    float getMinVelocity() const;
    int32_t getViewDragState() const;
    void setEdgeTrackingEnabled(int32_t) const;
    int32_t getEdgeSize() const;
    void captureChildView(const ::android::view::View&, int32_t) const;
    ::android::view::View getCapturedView() const;
    int32_t getActivePointerId() const;
    int32_t getTouchSlop() const;
    void cancel() const;
    void abort() const;
    bool smoothSlideViewTo(const ::android::view::View&, int32_t, int32_t) const;
    bool settleCapturedViewAt(int32_t, int32_t) const;
    void flingCapturedView(int32_t, int32_t, int32_t, int32_t) const;
    bool continueSettling(bool) const;
    bool isPointerDown(int32_t) const;
    bool shouldInterceptTouchEvent(const ::android::view::MotionEvent&) const;
    void processTouchEvent(const ::android::view::MotionEvent&) const;
    bool checkTouchSlop(int32_t) const;
    bool checkTouchSlop(int32_t, int32_t) const;
    bool isEdgeTouched(int32_t) const;
    bool isEdgeTouched(int32_t, int32_t) const;
    bool isCapturedViewUnder(int32_t, int32_t) const;
    bool isViewUnder(const ::android::view::View&, int32_t, int32_t) const;
    ::android::view::View findTopChildUnder(int32_t, int32_t) const;

};
}
}
}
}

#include "android.support.v4.widget.ViewDragHelper_Callback.hpp"

