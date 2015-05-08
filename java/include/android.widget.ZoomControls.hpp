#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View_OnClickListener; } }

namespace android {
namespace widget {
class ZoomControls : public virtual ::java::lang::Object,
                     public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZoomControls(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZoomControls(const ::android::widget::ZoomControls& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    ZoomControls(::android::widget::ZoomControls&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ZoomControls& operator=(const ::android::widget::ZoomControls& x) {obj = x.obj; return *this;}
    ::android::widget::ZoomControls& operator=(::android::widget::ZoomControls&& x) {obj = std::move(x.obj); return *this;}
    
    ZoomControls(const ::android::content::Context&);
    ZoomControls(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setOnZoomInClickListener(const ::android::view::View_OnClickListener&) const ;
    void setOnZoomOutClickListener(const ::android::view::View_OnClickListener&) const ;
    void setZoomSpeed(int64_t) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void show() const ;
    void hide() const ;
    void setIsZoomInEnabled(bool) const ;
    void setIsZoomOutEnabled(bool) const ;
    bool hasFocus() const ;

};
}
}


