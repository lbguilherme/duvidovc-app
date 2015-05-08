#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace widget { class TimePicker_OnTimeChangedListener; } }
namespace java { namespace lang { class Boolean; } }
namespace java { namespace lang { class Integer; } }

namespace android {
namespace widget {
class TimePicker : public virtual ::java::lang::Object,
                   public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TimePicker(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TimePicker(const ::android::widget::TimePicker& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    TimePicker(::android::widget::TimePicker&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::TimePicker& operator=(const ::android::widget::TimePicker& x) {obj = x.obj; return *this;}
    ::android::widget::TimePicker& operator=(::android::widget::TimePicker&& x) {obj = std::move(x.obj); return *this;}
    
    TimePicker(const ::android::content::Context&);
    TimePicker(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TimePicker(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setEnabled(bool) const ;
    bool isEnabled() const ;
    void setOnTimeChangedListener(const ::android::widget::TimePicker_OnTimeChangedListener&) const ;
    ::java::lang::Integer getCurrentHour() const ;
    void setCurrentHour(const ::java::lang::Integer&) const ;
    void setIs24HourView(const ::java::lang::Boolean&) const ;
    bool is24HourView() const ;
    ::java::lang::Integer getCurrentMinute() const ;
    void setCurrentMinute(const ::java::lang::Integer&) const ;
    int32_t getBaseline() const ;
    bool dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const ;

};
}
}

#include "android.widget.TimePicker_OnTimeChangedListener.hpp"

