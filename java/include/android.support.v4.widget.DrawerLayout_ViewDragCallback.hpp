#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.widget.ViewDragHelper_Callback.hpp"

namespace android { namespace support { namespace v4 { namespace widget { class DrawerLayout; } } } }
namespace android { namespace support { namespace v4 { namespace widget { class ViewDragHelper; } } } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class DrawerLayout_ViewDragCallback : public virtual ::java::lang::Object,
                                      public virtual ::android::support::v4::widget::ViewDragHelper_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawerLayout_ViewDragCallback(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::widget::ViewDragHelper_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawerLayout_ViewDragCallback(const ::android::support::v4::widget::DrawerLayout_ViewDragCallback& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ViewDragHelper_Callback((jobject)0) {obj = x.obj;}
    DrawerLayout_ViewDragCallback(::android::support::v4::widget::DrawerLayout_ViewDragCallback&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ViewDragHelper_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::DrawerLayout_ViewDragCallback& operator=(const ::android::support::v4::widget::DrawerLayout_ViewDragCallback& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::DrawerLayout_ViewDragCallback& operator=(::android::support::v4::widget::DrawerLayout_ViewDragCallback&& x) {obj = std::move(x.obj); return *this;}
    
    DrawerLayout_ViewDragCallback(const ::android::support::v4::widget::DrawerLayout&, int32_t);
    void setDragger(const ::android::support::v4::widget::ViewDragHelper&) const ;
    void removeCallbacks() const ;
    bool tryCaptureView(const ::android::view::View&, int32_t) const ;
    void onViewDragStateChanged(int32_t) const ;
    void onViewPositionChanged(const ::android::view::View&, int32_t, int32_t, int32_t, int32_t) const ;
    void onViewCaptured(const ::android::view::View&, int32_t) const ;
    void onViewReleased(const ::android::view::View&, float, float) const ;
    void onEdgeTouched(int32_t, int32_t) const ;
    bool onEdgeLock(int32_t) const ;
    void onEdgeDragStarted(int32_t, int32_t) const ;
    int32_t getViewHorizontalDragRange(const ::android::view::View&) const ;
    int32_t clampViewPositionHorizontal(const ::android::view::View&, int32_t, int32_t) const ;
    int32_t clampViewPositionVertical(const ::android::view::View&, int32_t, int32_t) const ;

};
}
}
}
}


