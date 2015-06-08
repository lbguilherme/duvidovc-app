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
namespace android { namespace widget { class Chronometer_OnChronometerTickListener; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace widget {
class Chronometer : public virtual ::java::lang::Object,
                    public virtual ::android::widget::TextView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Chronometer(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Chronometer(const ::android::widget::Chronometer& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    Chronometer(::android::widget::Chronometer&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::Chronometer& operator=(const ::android::widget::Chronometer& x) {obj = x.obj; return *this;}
    ::android::widget::Chronometer& operator=(::android::widget::Chronometer&& x) {obj = std::move(x.obj); return *this;}
    
    Chronometer(const ::android::content::Context&);
    Chronometer(const ::android::content::Context&, const ::android::util::AttributeSet&);
    Chronometer(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setBase(int64_t) const;
    int64_t getBase() const;
    void setFormat(const ::java::lang::String&) const;
    ::java::lang::String getFormat() const;
    void setOnChronometerTickListener(const ::android::widget::Chronometer_OnChronometerTickListener&) const;
    ::android::widget::Chronometer_OnChronometerTickListener getOnChronometerTickListener() const;
    void start() const;
    void stop() const;

};
}
}

#include "android.widget.Chronometer_OnChronometerTickListener.hpp"

