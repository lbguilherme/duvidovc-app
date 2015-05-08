#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.Dialog.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.content.res.Resources.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.os.Bundle.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.ContextMenu.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.Menu.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.view.WindowManager.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.reflect.Method.hpp"
#include "org.qtproject.qt5.android.bindings.QtActivity.hpp"
#include "org.qtproject.qt5.android.bindings.QtApplication.hpp"

jclass org::qtproject::qt5::android::bindings::QtApplication_InvokeResult::_class = nullptr;
jclass org::qtproject::qt5::android::bindings::QtApplication::_class = nullptr;
jclass org::qtproject::qt5::android::bindings::QtActivity::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult::QtApplication_InvokeResult() : ::java::lang::Object((jobject)0) {
    if (!::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult::_class) ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication$InvokeResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::qtproject::qt5::android::bindings::QtApplication::QtApplication() : ::java::lang::Object((jobject)0), ::android::app::Application((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::org::qtproject::qt5::android::bindings::QtApplication::_class) ::org::qtproject::qt5::android::bindings::QtApplication::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void org::qtproject::qt5::android::bindings::QtApplication::setQtActivityDelegate(const ::java::lang::Object& arg0){
    if (!::org::qtproject::qt5::android::bindings::QtApplication::_class) ::org::qtproject::qt5::android::bindings::QtApplication::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setQtActivityDelegate", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtApplication::onTerminate() const {
    if (!::org::qtproject::qt5::android::bindings::QtApplication::_class) ::org::qtproject::qt5::android::bindings::QtApplication::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTerminate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult org::qtproject::qt5::android::bindings::QtApplication::invokeDelegate(const std::vector< ::java::lang::Object>& arg0){
    if (!::org::qtproject::qt5::android::bindings::QtApplication::_class) ::org::qtproject::qt5::android::bindings::QtApplication::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeDelegate", "([Ljava/lang/Object;)Lorg/qtproject/qt5/android/bindings/QtApplication$InvokeResult;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::qtproject::qt5::android::bindings::QtApplication_InvokeResult _ret(ret);
    return _ret;
}

::java::lang::Object org::qtproject::qt5::android::bindings::QtApplication::invokeDelegateMethod(const ::java::lang::reflect::Method& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::org::qtproject::qt5::android::bindings::QtApplication::_class) ::org::qtproject::qt5::android::bindings::QtApplication::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtApplication");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeDelegateMethod", "(Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::qtproject::qt5::android::bindings::QtActivity::QtActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool org::qtproject::qt5::android::bindings::QtActivity::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onApplyThemeResource(const ::android::content::res::Resources_Theme& arg0, int32_t arg1, bool arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onApplyThemeResource", "(Landroid/content/res/Resources$Theme;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onChildTitleChanged(const ::android::app::Activity& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onChildTitleChanged", "(Landroid/app/Activity;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::qtproject::qt5::android::bindings::QtActivity::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onContentChanged() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onContentChanged() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onContextItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onContextItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onContextMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContextMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onContextMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onContextMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onCreateContextMenu(const ::android::view::ContextMenu& arg0, const ::android::view::View& arg1, const ::android::view::ContextMenu_ContextMenuInfo& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateContextMenu", "(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::CharSequence org::qtproject::qt5::android::bindings::QtActivity::onCreateDescription() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence org::qtproject::qt5::android::bindings::QtActivity::super_onCreateDescription() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::app::Dialog org::qtproject::qt5::android::bindings::QtActivity::super_onCreateDialog(int32_t arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateDialog", "(I)Landroid/app/Dialog;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

bool org::qtproject::qt5::android::bindings::QtActivity::onCreateOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onCreateOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onCreatePanelMenu(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreatePanelMenu", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::view::View org::qtproject::qt5::android::bindings::QtActivity::onCreatePanelView(int32_t arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreatePanelView", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View org::qtproject::qt5::android::bindings::QtActivity::super_onCreatePanelView(int32_t arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreatePanelView", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

bool org::qtproject::qt5::android::bindings::QtActivity::onCreateThumbnail(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateThumbnail", "(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onCreateThumbnail(const ::android::graphics::Bitmap& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateThumbnail", "(Landroid/graphics/Bitmap;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::view::View org::qtproject::qt5::android::bindings::QtActivity::onCreateView(const ::java::lang::String& arg0, const ::android::content::Context& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View org::qtproject::qt5::android::bindings::QtActivity::super_onCreateView(const ::java::lang::String& arg0, const ::android::content::Context& arg1, const ::android::util::AttributeSet& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateView", "(Ljava/lang/String;Landroid/content/Context;Landroid/util/AttributeSet;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

bool org::qtproject::qt5::android::bindings::QtActivity::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void org::qtproject::qt5::android::bindings::QtActivity::onLowMemory() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLowMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onMenuItemSelected(int32_t arg0, const ::android::view::MenuItem& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onMenuItemSelected", "(ILandroid/view/MenuItem;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onMenuOpened(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuOpened", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onMenuOpened(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onMenuOpened", "(ILandroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onNewIntent(const ::android::content::Intent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onNewIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onOptionsItemSelected(const ::android::view::MenuItem& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onOptionsItemSelected", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onOptionsMenuClosed(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onOptionsMenuClosed", "(Landroid/view/Menu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onPanelClosed(int32_t arg0, const ::android::view::Menu& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onPanelClosed", "(ILandroid/view/Menu;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onPrepareDialog(int32_t arg0, const ::android::app::Dialog& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onPrepareDialog", "(ILandroid/app/Dialog;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onPrepareOptionsMenu(const ::android::view::Menu& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onPrepareOptionsMenu", "(Landroid/view/Menu;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onPreparePanel(int32_t arg0, const ::android::view::View& arg1, const ::android::view::Menu& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onPreparePanel", "(ILandroid/view/View;Landroid/view/Menu;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onRestoreInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onRestoreInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object org::qtproject::qt5::android::bindings::QtActivity::onRetainNonConfigurationInstance() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRetainNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::qtproject::qt5::android::bindings::QtActivity::super_onRetainNonConfigurationInstance() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onRetainNonConfigurationInstance", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onSearchRequested() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSearchRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onSearchRequested() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onSearchRequested", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onTitleChanged(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onTitleChanged", "(Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onUserInteraction() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUserInteraction", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onUserInteraction() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onUserInteraction", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onUserLeaveHint() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onUserLeaveHint", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowAttributesChanged", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onWindowAttributesChanged(const ::android::view::WindowManager_LayoutParams& arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onWindowAttributesChanged", "(Landroid/view/WindowManager$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onWindowFocusChanged(bool arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onWindowFocusChanged(bool arg0) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::qtproject::qt5::android::bindings::QtActivity::onAttachedToWindow() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onAttachedToWindow() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::onBackPressed() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBackPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onBackPressed() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onBackPressed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::onDetachedFromWindow() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onDetachedFromWindow() const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::qtproject::qt5::android::bindings::QtActivity::onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool org::qtproject::qt5::android::bindings::QtActivity::super_onKeyLongPress(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onKeyLongPress", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::app::Dialog org::qtproject::qt5::android::bindings::QtActivity::super_onCreateDialog(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onCreateDialog", "(ILandroid/os/Bundle;)Landroid/app/Dialog;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void org::qtproject::qt5::android::bindings::QtActivity::super_onPrepareDialog(int32_t arg0, const ::android::app::Dialog& arg1, const ::android::os::Bundle& arg2) const {
    if (!::org::qtproject::qt5::android::bindings::QtActivity::_class) ::org::qtproject::qt5::android::bindings::QtActivity::_class = java::fetch_class("org/qtproject/qt5/android/bindings/QtActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "super_onPrepareDialog", "(ILandroid/app/Dialog;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

