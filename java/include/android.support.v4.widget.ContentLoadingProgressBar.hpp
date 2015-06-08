#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ProgressBar.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class ContentLoadingProgressBar : public virtual ::java::lang::Object,
                                  public virtual ::android::widget::ProgressBar {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentLoadingProgressBar(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::ProgressBar(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentLoadingProgressBar(const ::android::support::v4::widget::ContentLoadingProgressBar& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj;}
    ContentLoadingProgressBar(::android::support::v4::widget::ContentLoadingProgressBar&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::ContentLoadingProgressBar& operator=(const ::android::support::v4::widget::ContentLoadingProgressBar& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::ContentLoadingProgressBar& operator=(::android::support::v4::widget::ContentLoadingProgressBar&& x) {obj = std::move(x.obj); return *this;}
    
    ContentLoadingProgressBar(const ::android::content::Context&);
    ContentLoadingProgressBar(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void onAttachedToWindow() const;
    void onDetachedFromWindow() const;
    void hide() const;
    void show() const;

};
}
}
}
}


