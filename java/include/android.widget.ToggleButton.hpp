#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.CompoundButton.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class ToggleButton : public virtual ::java::lang::Object,
                     public virtual ::android::widget::CompoundButton {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ToggleButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::Checkable(_obj), ::android::widget::CompoundButton(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ToggleButton(const ::android::widget::ToggleButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    ToggleButton(::android::widget::ToggleButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ToggleButton& operator=(const ::android::widget::ToggleButton& x) {obj = x.obj; return *this;}
    ::android::widget::ToggleButton& operator=(::android::widget::ToggleButton&& x) {obj = std::move(x.obj); return *this;}
    
    ToggleButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    ToggleButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ToggleButton(const ::android::content::Context&);
    void setChecked(bool) const;
    ::java::lang::CharSequence getTextOn() const;
    void setTextOn(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence getTextOff() const;
    void setTextOff(const ::java::lang::CharSequence&) const;
    void setBackgroundDrawable(const ::android::graphics::drawable::Drawable&) const;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;

};
}
}


