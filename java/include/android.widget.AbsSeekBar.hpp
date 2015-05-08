#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ProgressBar.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class MotionEvent; } }

namespace android {
namespace widget {
class AbsSeekBar : public virtual ::java::lang::Object,
                   public virtual ::android::widget::ProgressBar {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbsSeekBar(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ProgressBar(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbsSeekBar(const ::android::widget::AbsSeekBar& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj;}
    AbsSeekBar(::android::widget::AbsSeekBar&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AbsSeekBar& operator=(const ::android::widget::AbsSeekBar& x) {obj = x.obj; return *this;}
    ::android::widget::AbsSeekBar& operator=(::android::widget::AbsSeekBar&& x) {obj = std::move(x.obj); return *this;}
    
    AbsSeekBar(const ::android::content::Context&);
    AbsSeekBar(const ::android::content::Context&, const ::android::util::AttributeSet&);
    AbsSeekBar(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setThumb(const ::android::graphics::drawable::Drawable&) const ;
    int32_t getThumbOffset() const ;
    void setThumbOffset(int32_t) const ;
    void setKeyProgressIncrement(int32_t) const ;
    int32_t getKeyProgressIncrement() const ;
    void setMax(int32_t) const ;
    void jumpDrawablesToCurrentState() const ;
    bool onTouchEvent(const ::android::view::MotionEvent&) const ;
    bool onKeyDown(int32_t, const ::android::view::KeyEvent&) const ;

};
}
}


