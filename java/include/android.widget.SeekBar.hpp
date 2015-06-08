#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.AbsSeekBar.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace widget { class SeekBar_OnSeekBarChangeListener; } }

namespace android {
namespace widget {
class SeekBar : public virtual ::java::lang::Object,
                public virtual ::android::widget::AbsSeekBar {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SeekBar(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::AbsSeekBar(_obj), ::android::widget::ProgressBar(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SeekBar(const ::android::widget::SeekBar& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj;}
    SeekBar(::android::widget::SeekBar&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::SeekBar& operator=(const ::android::widget::SeekBar& x) {obj = x.obj; return *this;}
    ::android::widget::SeekBar& operator=(::android::widget::SeekBar&& x) {obj = std::move(x.obj); return *this;}
    
    SeekBar(const ::android::content::Context&);
    SeekBar(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SeekBar(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setOnSeekBarChangeListener(const ::android::widget::SeekBar_OnSeekBarChangeListener&) const;

};
}
}

#include "android.widget.SeekBar_OnSeekBarChangeListener.hpp"

