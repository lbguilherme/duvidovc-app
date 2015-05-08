#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ImageView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace widget {
class ImageButton : public virtual ::java::lang::Object,
                    public virtual ::android::widget::ImageView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ImageView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageButton(const ::android::widget::ImageButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj;}
    ImageButton(::android::widget::ImageButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ImageButton& operator=(const ::android::widget::ImageButton& x) {obj = x.obj; return *this;}
    ::android::widget::ImageButton& operator=(::android::widget::ImageButton&& x) {obj = std::move(x.obj); return *this;}
    
    ImageButton(const ::android::content::Context&);
    ImageButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ImageButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);

};
}
}


