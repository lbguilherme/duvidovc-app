#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.Button.hpp"

namespace android { namespace support { namespace v4 { namespace app { class Fragment; } } } }
namespace android { namespace view { class View_OnClickListener; } }

namespace com {
namespace facebook {
class FacebookButtonBase : public virtual ::java::lang::Object,
                           public virtual ::android::widget::Button {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookButtonBase(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::TextView(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookButtonBase(const ::com::facebook::FacebookButtonBase& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj;}
    FacebookButtonBase(::com::facebook::FacebookButtonBase&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookButtonBase& operator=(const ::com::facebook::FacebookButtonBase& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookButtonBase& operator=(::com::facebook::FacebookButtonBase&& x) {obj = std::move(x.obj); return *this;}
    
    void setFragment(const ::android::support::v4::app::Fragment&) const;
    ::android::support::v4::app::Fragment getFragment() const;
    void setOnClickListener(const ::android::view::View_OnClickListener&) const;
    int32_t getRequestCode() const;
    int32_t getCompoundPaddingLeft() const;
    int32_t getCompoundPaddingRight() const;

};
}
}


