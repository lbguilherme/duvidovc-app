#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.FrameLayout.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace login { namespace widget { class ToolTipPopup; } } } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class ToolTipPopup_PopupContentView : public virtual ::java::lang::Object,
                                      public virtual ::android::widget::FrameLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ToolTipPopup_PopupContentView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewGroup(_obj), ::android::view::ViewManager(_obj), ::android::view::ViewParent(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::FrameLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ToolTipPopup_PopupContentView(const ::com::facebook::login::widget::ToolTipPopup_PopupContentView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj;}
    ToolTipPopup_PopupContentView(::com::facebook::login::widget::ToolTipPopup_PopupContentView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::ToolTipPopup_PopupContentView& operator=(const ::com::facebook::login::widget::ToolTipPopup_PopupContentView& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::ToolTipPopup_PopupContentView& operator=(::com::facebook::login::widget::ToolTipPopup_PopupContentView&& x) {obj = std::move(x.obj); return *this;}
    
    ToolTipPopup_PopupContentView(const ::com::facebook::login::widget::ToolTipPopup&, const ::android::content::Context&);
    void showTopArrow() const ;
    void showBottomArrow() const ;

};
}
}
}
}


