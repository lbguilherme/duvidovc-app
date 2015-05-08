#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.LinearLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }
namespace android { namespace widget { class NumberPicker_Formatter; } }
namespace android { namespace widget { class NumberPicker_OnScrollListener; } }
namespace android { namespace widget { class NumberPicker_OnValueChangeListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class NumberPicker : public virtual ::java::lang::Object,
                     public virtual ::android::widget::LinearLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberPicker(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::LinearLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberPicker(const ::android::widget::NumberPicker& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj;}
    NumberPicker(::android::widget::NumberPicker&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::NumberPicker& operator=(const ::android::widget::NumberPicker& x) {obj = x.obj; return *this;}
    ::android::widget::NumberPicker& operator=(::android::widget::NumberPicker&& x) {obj = std::move(x.obj); return *this;}
    
    NumberPicker(const ::android::content::Context&);
    NumberPicker(const ::android::content::Context&, const ::android::util::AttributeSet&);
    NumberPicker(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool onInterceptTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchTouchEvent(const ::android::view::MotionEvent&) const ;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const ;
    bool dispatchTrackballEvent(const ::android::view::MotionEvent&) const ;
    void computeScroll() const ;
    void setEnabled(bool) const ;
    void scrollBy(int32_t, int32_t) const ;
    int32_t getSolidColor() const ;
    void setOnValueChangedListener(const ::android::widget::NumberPicker_OnValueChangeListener&) const ;
    void setOnScrollListener(const ::android::widget::NumberPicker_OnScrollListener&) const ;
    void setFormatter(const ::android::widget::NumberPicker_Formatter&) const ;
    void setValue(int32_t) const ;
    bool getWrapSelectorWheel() const ;
    void setWrapSelectorWheel(bool) const ;
    void setOnLongPressUpdateInterval(int64_t) const ;
    int32_t getValue() const ;
    int32_t getMinValue() const ;
    void setMinValue(int32_t) const ;
    int32_t getMaxValue() const ;
    void setMaxValue(int32_t) const ;
    std::vector< ::java::lang::String> getDisplayedValues() const ;
    void setDisplayedValues(const std::vector< ::java::lang::String>&) const ;
    void draw(const ::android::graphics::Canvas&) const ;
    void sendAccessibilityEvent(int32_t) const ;

};
}
}

#include "android.widget.NumberPicker_Formatter.hpp"
#include "android.widget.NumberPicker_OnScrollListener.hpp"
#include "android.widget.NumberPicker_OnValueChangeListener.hpp"

