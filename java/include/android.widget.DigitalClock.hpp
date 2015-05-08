#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.TextView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace widget {
class DigitalClock : public virtual ::java::lang::Object,
                     public virtual ::android::widget::TextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DigitalClock(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DigitalClock(const ::android::widget::DigitalClock& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    DigitalClock(::android::widget::DigitalClock&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::DigitalClock& operator=(const ::android::widget::DigitalClock& x) {obj = x.obj; return *this;}
    ::android::widget::DigitalClock& operator=(::android::widget::DigitalClock&& x) {obj = std::move(x.obj); return *this;}
    
    DigitalClock(const ::android::content::Context&);
    DigitalClock(const ::android::content::Context&, const ::android::util::AttributeSet&);

};
}
}


