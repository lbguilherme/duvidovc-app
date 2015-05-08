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
class Button : public virtual ::java::lang::Object,
               public virtual ::android::widget::TextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Button(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Button(const ::android::widget::Button& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    Button(::android::widget::Button&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Button& operator=(const ::android::widget::Button& x) {obj = x.obj; return *this;}
    ::android::widget::Button& operator=(::android::widget::Button&& x) {obj = std::move(x.obj); return *this;}
    
    Button(const ::android::content::Context&);
    Button(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Button(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);

};
}
}


