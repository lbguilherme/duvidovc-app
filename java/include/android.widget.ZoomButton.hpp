#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View_OnLongClickListener.hpp"
#include "android.widget.ImageButton.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { class View; } }

namespace android {
namespace widget {
class ZoomButton : public virtual ::java::lang::Object,
                   public virtual ::android::view::View_OnLongClickListener,
                   public virtual ::android::widget::ImageButton {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZoomButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::View_OnLongClickListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ImageButton(_obj), ::android::widget::ImageView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZoomButton(const ::android::widget::ZoomButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnLongClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageButton((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj;}
    ZoomButton(::android::widget::ZoomButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnLongClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageButton((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ZoomButton& operator=(const ::android::widget::ZoomButton& x) {obj = x.obj; return *this;}
    ::android::widget::ZoomButton& operator=(::android::widget::ZoomButton&& x) {obj = std::move(x.obj); return *this;}
    
    ZoomButton(const ::android::content::Context&);
    ZoomButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ZoomButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void setZoomSpeed(int64_t) const ;
    bool onLongClick(const ::android::view::View&) const ;
    bool onKeyUp(int32_t, const ::android::view::KeyEvent&) const ;
    void setEnabled(bool) const ;
    bool dispatchUnhandledMove(const ::android::view::View&, int32_t) const ;

};
}
}


