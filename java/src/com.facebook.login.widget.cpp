#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.View.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.FacebookException.hpp"
#include "com.facebook.login.DefaultAudience.hpp"
#include "com.facebook.login.LoginBehavior.hpp"
#include "com.facebook.login.widget.LoginButton.hpp"
#include "com.facebook.login.widget.ProfilePictureView.hpp"
#include "com.facebook.login.widget.ToolTipPopup.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = nullptr;
jclass com::facebook::login::widget::LoginButton_LoginClickListener::_class = nullptr;
jclass com::facebook::login::widget::LoginButton_ToolTipMode::_class = nullptr;
jclass com::facebook::login::widget::LoginButton::_class = nullptr;
jclass com::facebook::login::widget::ProfilePictureView_OnErrorListener::_class = nullptr;
jclass com::facebook::login::widget::ProfilePictureView::_class = nullptr;
jclass com::facebook::login::widget::ToolTipPopup_PopupContentView::_class = nullptr;
jclass com::facebook::login::widget::ToolTipPopup_Style::_class = nullptr;
jclass com::facebook::login::widget::ToolTipPopup::_class = nullptr;

void com::facebook::login::widget::LoginButton_LoginButtonProperties::setDefaultAudience(const ::com::facebook::login::DefaultAudience& arg0) const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultAudience", "(Lcom/facebook/login/DefaultAudience;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::DefaultAudience com::facebook::login::widget::LoginButton_LoginButtonProperties::getDefaultAudience() const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultAudience", "()Lcom/facebook/login/DefaultAudience;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::DefaultAudience _ret(ret);
    return _ret;
}

void com::facebook::login::widget::LoginButton_LoginButtonProperties::setReadPermissions(const ::java::util::List& arg0) const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadPermissions", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton_LoginButtonProperties::setPublishPermissions(const ::java::util::List& arg0) const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublishPermissions", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton_LoginButtonProperties::clearPermissions() const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPermissions", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::widget::LoginButton_LoginButtonProperties::setLoginBehavior(const ::com::facebook::login::LoginBehavior& arg0) const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoginBehavior", "(Lcom/facebook/login/LoginBehavior;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::LoginBehavior com::facebook::login::widget::LoginButton_LoginButtonProperties::getLoginBehavior() const {
    if (!::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class) ::com::facebook::login::widget::LoginButton_LoginButtonProperties::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginButtonProperties");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoginBehavior", "()Lcom/facebook/login/LoginBehavior;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::LoginBehavior _ret(ret);
    return _ret;
}

void com::facebook::login::widget::LoginButton_LoginClickListener::onClick(const ::android::view::View& arg0) const {
    if (!::com::facebook::login::widget::LoginButton_LoginClickListener::_class) ::com::facebook::login::widget::LoginButton_LoginClickListener::_class = java::fetch_class("com/facebook/login/widget/LoginButton$LoginClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::com::facebook::login::widget::LoginButton_ToolTipMode> com::facebook::login::widget::LoginButton_ToolTipMode::values(){
    if (!::com::facebook::login::widget::LoginButton_ToolTipMode::_class) ::com::facebook::login::widget::LoginButton_ToolTipMode::_class = java::fetch_class("com/facebook/login/widget/LoginButton$ToolTipMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/login/widget/LoginButton$ToolTipMode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::login::widget::LoginButton_ToolTipMode> _ret(rets, ::com::facebook::login::widget::LoginButton_ToolTipMode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::login::widget::LoginButton_ToolTipMode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::login::widget::LoginButton_ToolTipMode com::facebook::login::widget::LoginButton_ToolTipMode::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::login::widget::LoginButton_ToolTipMode::_class) ::com::facebook::login::widget::LoginButton_ToolTipMode::_class = java::fetch_class("com/facebook/login/widget/LoginButton$ToolTipMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/login/widget/LoginButton$ToolTipMode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::widget::LoginButton_ToolTipMode _ret(ret);
    return _ret;
}

::com::facebook::login::widget::LoginButton_ToolTipMode com::facebook::login::widget::LoginButton_ToolTipMode::fromInt(int32_t arg0){
    if (!::com::facebook::login::widget::LoginButton_ToolTipMode::_class) ::com::facebook::login::widget::LoginButton_ToolTipMode::_class = java::fetch_class("com/facebook/login/widget/LoginButton$ToolTipMode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromInt", "(I)Lcom/facebook/login/widget/LoginButton$ToolTipMode;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::widget::LoginButton_ToolTipMode _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::login::widget::LoginButton_ToolTipMode::toString() const {
    if (!::com::facebook::login::widget::LoginButton_ToolTipMode::_class) ::com::facebook::login::widget::LoginButton_ToolTipMode::_class = java::fetch_class("com/facebook/login/widget/LoginButton$ToolTipMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::login::widget::LoginButton_ToolTipMode::getValue() const {
    if (!::com::facebook::login::widget::LoginButton_ToolTipMode::_class) ::com::facebook::login::widget::LoginButton_ToolTipMode::_class = java::fetch_class("com/facebook/login/widget/LoginButton$ToolTipMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::LoginButton::LoginButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::LoginButton::LoginButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::LoginButton::LoginButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void com::facebook::login::widget::LoginButton::setDefaultAudience(const ::com::facebook::login::DefaultAudience& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultAudience", "(Lcom/facebook/login/DefaultAudience;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::DefaultAudience com::facebook::login::widget::LoginButton::getDefaultAudience() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultAudience", "()Lcom/facebook/login/DefaultAudience;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::DefaultAudience _ret(ret);
    return _ret;
}

void com::facebook::login::widget::LoginButton::setReadPermissions(const ::java::util::List& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadPermissions", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton::setReadPermissions(const std::vector< ::java::lang::String>& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadPermissions", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton::setPublishPermissions(const ::java::util::List& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublishPermissions", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton::setPublishPermissions(const std::vector< ::java::lang::String>& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPublishPermissions", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton::clearPermissions() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearPermissions", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::widget::LoginButton::setLoginBehavior(const ::com::facebook::login::LoginBehavior& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoginBehavior", "(Lcom/facebook/login/LoginBehavior;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::LoginBehavior com::facebook::login::widget::LoginButton::getLoginBehavior() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoginBehavior", "()Lcom/facebook/login/LoginBehavior;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::LoginBehavior _ret(ret);
    return _ret;
}

void com::facebook::login::widget::LoginButton::setToolTipStyle(const ::com::facebook::login::widget::ToolTipPopup_Style& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToolTipStyle", "(Lcom/facebook/login/widget/ToolTipPopup$Style;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::LoginButton::setToolTipMode(const ::com::facebook::login::widget::LoginButton_ToolTipMode& arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToolTipMode", "(Lcom/facebook/login/widget/LoginButton$ToolTipMode;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::widget::LoginButton_ToolTipMode com::facebook::login::widget::LoginButton::getToolTipMode() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolTipMode", "()Lcom/facebook/login/widget/LoginButton$ToolTipMode;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::widget::LoginButton_ToolTipMode _ret(ret);
    return _ret;
}

void com::facebook::login::widget::LoginButton::setToolTipDisplayTime(int64_t arg0) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToolTipDisplayTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t com::facebook::login::widget::LoginButton::getToolTipDisplayTime() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToolTipDisplayTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void com::facebook::login::widget::LoginButton::dismissToolTip() const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismissToolTip", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::widget::LoginButton::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::login::widget::LoginButton::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1, int32_t arg2) const {
    if (!::com::facebook::login::widget::LoginButton::_class) ::com::facebook::login::widget::LoginButton::_class = java::fetch_class("com/facebook/login/widget/LoginButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::login::widget::ProfilePictureView_OnErrorListener::onError(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView_OnErrorListener::_class) ::com::facebook::login::widget::ProfilePictureView_OnErrorListener::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::ProfilePictureView::ProfilePictureView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::ProfilePictureView::ProfilePictureView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::ProfilePictureView::ProfilePictureView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t com::facebook::login::widget::ProfilePictureView::getPresetSize() const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPresetSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::login::widget::ProfilePictureView::setPresetSize(int32_t arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPresetSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::login::widget::ProfilePictureView::isCropped() const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCropped", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::login::widget::ProfilePictureView::setCropped(bool arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCropped", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::login::widget::ProfilePictureView::getProfileId() const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProfileId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::login::widget::ProfilePictureView::setProfileId(const ::java::lang::String& arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProfileId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::login::widget::ProfilePictureView_OnErrorListener com::facebook::login::widget::ProfilePictureView::getOnErrorListener() const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnErrorListener", "()Lcom/facebook/login/widget/ProfilePictureView$OnErrorListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::login::widget::ProfilePictureView_OnErrorListener _ret(ret);
    return _ret;
}

void com::facebook::login::widget::ProfilePictureView::setOnErrorListener(const ::com::facebook::login::widget::ProfilePictureView_OnErrorListener& arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Lcom/facebook/login/widget/ProfilePictureView$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::ProfilePictureView::setDefaultProfilePicture(const ::android::graphics::Bitmap& arg0) const {
    if (!::com::facebook::login::widget::ProfilePictureView::_class) ::com::facebook::login::widget::ProfilePictureView::_class = java::fetch_class("com/facebook/login/widget/ProfilePictureView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultProfilePicture", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::ToolTipPopup_PopupContentView::ToolTipPopup_PopupContentView(const ::com::facebook::login::widget::ToolTipPopup& arg0, const ::android::content::Context& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class) ::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup$PopupContentView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/login/widget/ToolTipPopup;Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void com::facebook::login::widget::ToolTipPopup_PopupContentView::showTopArrow() const {
    if (!::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class) ::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup$PopupContentView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showTopArrow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::widget::ToolTipPopup_PopupContentView::showBottomArrow() const {
    if (!::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class) ::com::facebook::login::widget::ToolTipPopup_PopupContentView::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup$PopupContentView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showBottomArrow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::com::facebook::login::widget::ToolTipPopup_Style> com::facebook::login::widget::ToolTipPopup_Style::values(){
    if (!::com::facebook::login::widget::ToolTipPopup_Style::_class) ::com::facebook::login::widget::ToolTipPopup_Style::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/login/widget/ToolTipPopup$Style;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::login::widget::ToolTipPopup_Style> _ret(rets, ::com::facebook::login::widget::ToolTipPopup_Style((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::login::widget::ToolTipPopup_Style retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::login::widget::ToolTipPopup_Style com::facebook::login::widget::ToolTipPopup_Style::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::login::widget::ToolTipPopup_Style::_class) ::com::facebook::login::widget::ToolTipPopup_Style::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/login/widget/ToolTipPopup$Style;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::login::widget::ToolTipPopup_Style _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::login::widget::ToolTipPopup::ToolTipPopup(const ::java::lang::String& arg0, const ::android::view::View& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::login::widget::ToolTipPopup::_class) ::com::facebook::login::widget::ToolTipPopup::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void com::facebook::login::widget::ToolTipPopup::setStyle(const ::com::facebook::login::widget::ToolTipPopup_Style& arg0) const {
    if (!::com::facebook::login::widget::ToolTipPopup::_class) ::com::facebook::login::widget::ToolTipPopup::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStyle", "(Lcom/facebook/login/widget/ToolTipPopup$Style;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::ToolTipPopup::show() const {
    if (!::com::facebook::login::widget::ToolTipPopup::_class) ::com::facebook::login::widget::ToolTipPopup::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::login::widget::ToolTipPopup::setNuxDisplayTime(int64_t arg0) const {
    if (!::com::facebook::login::widget::ToolTipPopup::_class) ::com::facebook::login::widget::ToolTipPopup::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNuxDisplayTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::login::widget::ToolTipPopup::dismiss() const {
    if (!::com::facebook::login::widget::ToolTipPopup::_class) ::com::facebook::login::widget::ToolTipPopup::_class = java::fetch_class("com/facebook/login/widget/ToolTipPopup");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

