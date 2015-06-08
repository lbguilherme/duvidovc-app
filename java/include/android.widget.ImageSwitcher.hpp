#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.ViewSwitcher.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace widget {
class ImageSwitcher : public virtual ::java::lang::Object,
                      public virtual ::android::widget::ViewSwitcher {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageSwitcher(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj), ::android::widget::ViewAnimator(_obj), ::android::widget::ViewSwitcher(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageSwitcher(const ::android::widget::ImageSwitcher& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {obj = x.obj;}
    ImageSwitcher(::android::widget::ImageSwitcher&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ImageSwitcher& operator=(const ::android::widget::ImageSwitcher& x) {obj = x.obj; return *this;}
    ::android::widget::ImageSwitcher& operator=(::android::widget::ImageSwitcher&& x) {obj = std::move(x.obj); return *this;}
    
    ImageSwitcher(const ::android::content::Context&);
    ImageSwitcher(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setImageResource(int32_t) const;
    void setImageURI(const ::android::net::Uri&) const;
    void setImageDrawable(const ::android::graphics::drawable::Drawable&) const;

};
}
}


