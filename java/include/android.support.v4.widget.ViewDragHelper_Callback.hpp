#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ViewDragHelper_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ViewDragHelper_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ViewDragHelper_Callback(const ::android::support::v4::widget::ViewDragHelper_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ViewDragHelper_Callback(::android::support::v4::widget::ViewDragHelper_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ViewDragHelper_Callback& operator=(const ::android::support::v4::widget::ViewDragHelper_Callback& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ViewDragHelper_Callback& operator=(::android::support::v4::widget::ViewDragHelper_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    ViewDragHelper_Callback();
    void onViewDragStateChanged(int32_t) const ;
    void onViewPositionChanged(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const ;
    void onViewCaptured(const ::android::view::View&, int32_t) const ;
    void onViewReleased(const ::android::view::View&, float, float) const ;
    void onEdgeTouched(int32_t, int32_t) const ;
    bool onEdgeLock(int32_t) const ;
    void onEdgeDragStarted(int32_t, int32_t) const ;
    int32_t getOrderedChildIndex(int32_t) const ;
    int32_t getViewHorizontalDragRange(const ::android::view::View&) const ;
    int32_t getViewVerticalDragRange(const ::android::view::View&) const ;
    bool tryCaptureView(const ::android::view::View&, int32_t) const ;
    int32_t clampViewPositionHorizontal(const ::android::view::View&, int32_t, int32_t) const ;
    int32_t clampViewPositionVertical(const ::android::view::View&, int32_t, int32_t) const ;

};
}
}
}
}


