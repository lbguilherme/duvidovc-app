#include "java-core.hpp"
#include <memory>
#include "android.support.v4.internal.view.SupportMenu.hpp"
#include "android.support.v4.internal.view.SupportMenuItem.hpp"
#include "android.support.v4.internal.view.SupportSubMenu.hpp"
#include "android.support.v4.view.ActionProvider.hpp"
#include "android.support.v4.view.MenuItemCompat.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.View.hpp"

jclass android::support::v4::internal::view::SupportMenu::_class = nullptr;
jclass android::support::v4::internal::view::SupportMenuItem::_class = nullptr;
jclass android::support::v4::internal::view::SupportSubMenu::_class = nullptr;

void android::support::v4::internal::view::SupportMenuItem::setShowAsAction(int32_t arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::MenuItem android::support::v4::internal::view::SupportMenuItem::setShowAsActionFlags(int32_t arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowAsActionFlags", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::internal::view::SupportMenuItem::setActionView(const ::android::view::View& arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(Landroid/view/View;)Landroid/view/MenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::MenuItem android::support::v4::internal::view::SupportMenuItem::setActionView(int32_t arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionView", "(I)Landroid/view/MenuItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::MenuItem _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::internal::view::SupportMenuItem::getActionView() const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::support::v4::internal::view::SupportMenuItem android::support::v4::internal::view::SupportMenuItem::setSupportActionProvider(const ::android::support::v4::view::ActionProvider& arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSupportActionProvider", "(Landroid/support/v4/view/ActionProvider;)Landroid/support/v4/internal/view/SupportMenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::internal::view::SupportMenuItem _ret(ret);
    return _ret;
}

::android::support::v4::view::ActionProvider android::support::v4::internal::view::SupportMenuItem::getSupportActionProvider() const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSupportActionProvider", "()Landroid/support/v4/view/ActionProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::ActionProvider _ret(ret);
    return _ret;
}

bool android::support::v4::internal::view::SupportMenuItem::expandActionView() const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandActionView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::internal::view::SupportMenuItem::collapseActionView() const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseActionView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::internal::view::SupportMenuItem::isActionViewExpanded() const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isActionViewExpanded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::internal::view::SupportMenuItem android::support::v4::internal::view::SupportMenuItem::setSupportOnActionExpandListener(const ::android::support::v4::view::MenuItemCompat_OnActionExpandListener& arg0) const {
    if (!::android::support::v4::internal::view::SupportMenuItem::_class) ::android::support::v4::internal::view::SupportMenuItem::_class = java::fetch_class("android/support/v4/internal/view/SupportMenuItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSupportOnActionExpandListener", "(Landroid/support/v4/view/MenuItemCompat$OnActionExpandListener;)Landroid/support/v4/internal/view/SupportMenuItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::internal::view::SupportMenuItem _ret(ret);
    return _ret;
}

