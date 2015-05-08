#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.CompoundButton.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Typeface; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class Switch : public virtual ::java::lang::Object,
               public virtual ::android::widget::CompoundButton {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Switch(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::Checkable(_obj), ::android::widget::CompoundButton(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Switch(const ::android::widget::Switch& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    Switch(::android::widget::Switch&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Switch& operator=(const ::android::widget::Switch& x) {obj = x.obj; return *this;}
    ::android::widget::Switch& operator=(::android::widget::Switch&& x) {obj = std::move(x.obj); return *this;}
    
    Switch(const ::android::content::Context&);
    Switch(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Switch(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setSwitchTextAppearance(const ::android::content::Context&, int32_t) const ;
    void setSwitchTypeface(const ::android::graphics::Typeface&, int32_t) const ;
    void setSwitchTypeface(const ::android::graphics::Typeface&) const ;
    ::java::lang::CharSequence getTextOn() const ;
    void setTextOn(const ::java::lang::CharSequence&) const ;
    ::java::lang::CharSequence getTextOff() const ;
    void setTextOff(const ::java::lang::CharSequence&) const ;
    void onMeasure(int32_t, int32_t) const ;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    void setChecked(bool) const ;
    int32_t getCompoundPaddingRight() const ;
    void jumpDrawablesToCurrentState() const ;

};
}
}


