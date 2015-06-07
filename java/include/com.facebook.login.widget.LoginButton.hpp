#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.FacebookButtonBase.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace util { class AttributeSet; } }
namespace com { namespace facebook { class CallbackManager; } }
namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { namespace login { class DefaultAudience; } } }
namespace com { namespace facebook { namespace login { class LoginBehavior; } } }
namespace com { namespace facebook { namespace login { namespace widget { class LoginButton_ToolTipMode; } } } }
namespace com { namespace facebook { namespace login { namespace widget { class ToolTipPopup_Style; } } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace com {
namespace facebook {
namespace login {
namespace widget {
class LoginButton : public virtual ::java::lang::Object,
                    public virtual ::com::facebook::FacebookButtonBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginButton(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::ViewTreeObserver_OnPreDrawListener(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj), ::android::widget::Button(_obj), ::android::widget::TextView(_obj), ::com::facebook::FacebookButtonBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginButton(const ::com::facebook::login::widget::LoginButton& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {obj = x.obj;}
    LoginButton(::com::facebook::login::widget::LoginButton&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::login::widget::LoginButton& operator=(const ::com::facebook::login::widget::LoginButton& x) {obj = x.obj; return *this;}
    ::com::facebook::login::widget::LoginButton& operator=(::com::facebook::login::widget::LoginButton&& x) {obj = std::move(x.obj); return *this;}
    
    LoginButton(const ::android::content::Context&);
    LoginButton(const ::android::content::Context&, const ::android::util::AttributeSet&);
    LoginButton(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void setDefaultAudience(const ::com::facebook::login::DefaultAudience&) const ;
    ::com::facebook::login::DefaultAudience getDefaultAudience() const ;
    void setReadPermissions(const ::java::util::List&) const ;
    void setReadPermissions(const std::vector< ::java::lang::String>&) const ;
    void setPublishPermissions(const ::java::util::List&) const ;
    void setPublishPermissions(const std::vector< ::java::lang::String>&) const ;
    void clearPermissions() const ;
    void setLoginBehavior(const ::com::facebook::login::LoginBehavior&) const ;
    ::com::facebook::login::LoginBehavior getLoginBehavior() const ;
    void setToolTipStyle(const ::com::facebook::login::widget::ToolTipPopup_Style&) const ;
    void setToolTipMode(const ::com::facebook::login::widget::LoginButton_ToolTipMode&) const ;
    ::com::facebook::login::widget::LoginButton_ToolTipMode getToolTipMode() const ;
    void setToolTipDisplayTime(int64_t) const ;
    int64_t getToolTipDisplayTime() const ;
    void dismissToolTip() const ;
    void registerCallback(const ::com::facebook::CallbackManager&, const ::com::facebook::FacebookCallback&) const ;

};
}
}
}
}

#include "com.facebook.login.widget.LoginButton_LoginButtonProperties.hpp"
#include "com.facebook.login.widget.LoginButton_LoginClickListener.hpp"
#include "com.facebook.login.widget.LoginButton_ToolTipMode.hpp"

