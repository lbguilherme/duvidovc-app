#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.CompoundButton.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }

namespace android {
namespace widget {
class RadioButton : public virtual ::java::lang::Object,
                    public virtual ::android::widget::CompoundButton {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RadioButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::Checkable(_obj), ::android::widget::CompoundButton(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RadioButton(const ::android::widget::RadioButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    RadioButton(::android::widget::RadioButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::RadioButton& operator=(const ::android::widget::RadioButton& x) {obj = x.obj; return *this;}
    ::android::widget::RadioButton& operator=(::android::widget::RadioButton&& x) {obj = std::move(x.obj); return *this;}
    
    RadioButton(const ::android::content::Context&);
    RadioButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    RadioButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void toggle() const ;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}


