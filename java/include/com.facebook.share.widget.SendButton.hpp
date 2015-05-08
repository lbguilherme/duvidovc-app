#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.widget.ShareButtonBase.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class SendButton : public virtual ::java::lang::Object,
                   public virtual ::com::facebook::share::widget::ShareButtonBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SendButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::TextView(_obj), ::com::facebook::FacebookButtonBase(_obj), ::com::facebook::share::widget::ShareButtonBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SendButton(const ::com::facebook::share::widget::SendButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {obj = x.obj;}
    SendButton(::com::facebook::share::widget::SendButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::SendButton& operator=(const ::com::facebook::share::widget::SendButton& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::SendButton& operator=(::com::facebook::share::widget::SendButton&& x) {obj = std::move(x.obj); return *this;}
    
    SendButton(const ::android::content::Context&);
    SendButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    SendButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);

};
}
}
}
}


