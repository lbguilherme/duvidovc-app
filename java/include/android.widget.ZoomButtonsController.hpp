#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnTouchListener.hpp"

namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }
namespace android { namespace view { class ViewGroup; } }
namespace android { namespace widget { class ZoomButtonsController_OnZoomListener; } }

namespace android {
namespace widget {
class ZoomButtonsController : public virtual ::java::lang::Object,
                              public virtual ::android::view::View_OnTouchListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZoomButtonsController(jobject _obj) : ::java::lang::Object(_obj), ::android::view::View_OnTouchListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZoomButtonsController(const ::android::widget::ZoomButtonsController& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj;}
    ZoomButtonsController(::android::widget::ZoomButtonsController&& x) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ZoomButtonsController& operator=(const ::android::widget::ZoomButtonsController& x) {obj = x.obj; return *this;}
    ::android::widget::ZoomButtonsController& operator=(::android::widget::ZoomButtonsController&& x) {obj = std::move(x.obj); return *this;}
    
    ZoomButtonsController(const ::android::view::View&);
    void setZoomInEnabled(bool) const ;
    void setZoomOutEnabled(bool) const ;
    void setZoomSpeed(int64_t) const ;
    void setOnZoomListener(const ::android::widget::ZoomButtonsController_OnZoomListener&) const ;
    void setFocusable(bool) const ;
    bool isAutoDismissed() const ;
    void setAutoDismissed(bool) const ;
    bool isVisible() const ;
    void setVisible(bool) const ;
    ::android::view::ViewGroup getContainer() const ;
    ::android::view::View getZoomControls() const ;
    bool onTouch(const ::android::view::View&, const ::android::view::MotionEvent&) const ;

};
}
}

#include "android.widget.ZoomButtonsController_OnZoomListener.hpp"

