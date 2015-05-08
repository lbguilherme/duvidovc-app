#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookButtonBase.hpp"

namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareContent; } } } }

namespace com {
namespace facebook {
namespace share {
namespace widget {
class ShareButtonBase : public virtual ::java::lang::Object,
                        public virtual ::com::facebook::FacebookButtonBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShareButtonBase(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::TextView(_obj), ::com::facebook::FacebookButtonBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShareButtonBase(const ::com::facebook::share::widget::ShareButtonBase& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {obj = x.obj;}
    ShareButtonBase(::com::facebook::share::widget::ShareButtonBase&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::widget::ShareButtonBase& operator=(const ::com::facebook::share::widget::ShareButtonBase& x) {obj = x.obj; return *this;}
    ::com::facebook::share::widget::ShareButtonBase& operator=(::com::facebook::share::widget::ShareButtonBase&& x) {obj = std::move(x.obj); return *this;}
    
    ::com::facebook::share::model::ShareContent getShareContent() const ;
    void setShareContent(const ::com::facebook::share::model::ShareContent&) const ;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&) const ;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&, int32_t) const ;

};
}
}
}
}


