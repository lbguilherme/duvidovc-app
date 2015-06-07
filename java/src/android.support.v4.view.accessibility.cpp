#include "java-core.hpp"
#include <memory>
#include "android.graphics.Rect.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcelable.hpp"
#include "android.support.v4.view.accessibility.AccessibilityEventCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityManagerCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityRecordCompat.hpp"
#include "android.view.View.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.accessibility.AccessibilityManager.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderKitKatImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityEventCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = nullptr;
jclass android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = nullptr;

::java::lang::Object android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::newAccessiblityStateChangeListener(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityStateChangeListener", "(Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTouchExplorationEnabled", "(Landroid/view/accessibility/AccessibilityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl::newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat$AccessibilityNodeProviderImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityNodeProviderBridge", "(Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::getRecordCount(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecordCount", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::appendRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendRecord", "(Landroid/view/accessibility/AccessibilityEvent;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::getRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecord", "(Landroid/view/accessibility/AccessibilityEvent;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::AccessibilityNodeInfoCompat_AccessibilityActionCompat(int32_t arg0, const ::java::lang::CharSequence& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityActionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::getId() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityActionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::getLabel() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityActionCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::newAccessibilityAction(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityAction", "(ILjava/lang/CharSequence;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtain(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtain(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::findFocus(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::focusSearch(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getChildCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getChild(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getActions(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::addAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::addAction(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getAccessibilityActionId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getAccessibilityActionLabel(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionLabel", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setMovementGranularities(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMovementGranularities", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getMovementGranularities(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovementGranularities", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::findAccessibilityNodeInfosByText(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getParent(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isCheckable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setCheckable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isFocusable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setFocusable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isVisibleToUser(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisibleToUser", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setVisibleToUser(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibleToUser", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isAccessibilityFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAccessibilityFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setAccessibilityFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setSelected(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isLongClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setLongClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getPackageName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setPackageName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getViewIdResourceName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewIdResourceName", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setViewIdResourceName(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewIdResourceName", "(Ljava/lang/Object;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getLiveRegion(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLiveRegion", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setLiveRegion(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLiveRegion", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setCollectionInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionItemInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setCollectionItemInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionItemInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getRangeInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRangeInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getActionList(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionList", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtainCollectionInfo(int32_t arg0, int32_t arg1, bool arg2, int32_t arg3) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionInfo", "(IIZI)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionInfoColumnCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoColumnCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionInfoRowCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoRowCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isCollectionInfoHierarchical(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionInfoHierarchical", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::obtainCollectionItemInfo(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4, bool arg5) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionItemInfo", "(IIIIZZ)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionItemColumnIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionItemColumnSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionItemRowIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getCollectionItemRowSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isCollectionItemHeading(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemHeading", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isCollectionItemSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getTraversalBefore(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalBefore", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getTraversalAfter(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalAfter", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setContentInvalid(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInvalid", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::isContentInvalid(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isContentInvalid", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setError(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::getError(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityManagerCompat::AccessibilityManagerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::view::accessibility::AccessibilityManagerCompat::addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat::removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat::getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstalledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat::getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0, int32_t arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getEnabledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat::isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isTouchExplorationEnabled", "(Landroid/view/accessibility/AccessibilityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::onAccessibilityStateChanged(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccessibilityStateChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderKitKatImpl::newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat$AccessibilityNodeProviderKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityNodeProviderBridge", "(Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getAddedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getBeforeText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeforeText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getCurrentItemIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItemIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getFromIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getItemCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getMaxScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getMaxScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getParcelableData(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableData", "(Ljava/lang/Object;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getRemovedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemovedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getSource(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getToIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::isFullScreen(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullScreen", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setAddedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setBeforeText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeforeText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setCurrentItemIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItemIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setFromIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setFullScreen(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreen", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setItemCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setMaxScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setMaxScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setParcelableData(const ::java::lang::Object& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParcelableData", "(Ljava/lang/Object;Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setRemovedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemovedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::setToIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::getViewIdResourceName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanMr2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewIdResourceName", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::setViewIdResourceName(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanMr2Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanMr2Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewIdResourceName", "(Ljava/lang/Object;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getAddedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getBeforeText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeforeText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getCurrentItemIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItemIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getFromIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getItemCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getParcelableData(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableData", "(Ljava/lang/Object;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getRemovedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemovedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getSource(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getToIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::isFullScreen(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullScreen", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setAddedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setBeforeText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeforeText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setCurrentItemIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItemIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setFromIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setFullScreen(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreen", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setItemCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setParcelableData(const ::java::lang::Object& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParcelableData", "(Ljava/lang/Object;Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setRemovedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemovedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::setToIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityRecordCompat::AccessibilityRecordCompat(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat::getImpl() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImpl", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityRecordCompat android::support::v4::view::accessibility::AccessibilityRecordCompat::obtain(const ::android::support::v4::view::accessibility::AccessibilityRecordCompat& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;)Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityRecordCompat android::support::v4::view::accessibility::AccessibilityRecordCompat::obtain(){
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setSource(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setSource(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityRecordCompat::getSource() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getWindowId() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::isChecked() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setChecked(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::isEnabled() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setEnabled(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::isPassword() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setPassword(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::isFullScreen() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullScreen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setFullScreen(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreen", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::isScrollable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setScrollable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getItemCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setItemCount(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getCurrentItemIndex() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItemIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setCurrentItemIndex(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItemIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getFromIndex() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setFromIndex(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getToIndex() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setToIndex(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getScrollX() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setScrollX(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getScrollY() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setScrollY(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getMaxScrollX() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setMaxScrollX(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getMaxScrollY() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setMaxScrollY(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getAddedCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddedCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setAddedCount(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddedCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::getRemovedCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemovedCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setRemovedCount(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemovedCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat::getClassName() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setClassName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityRecordCompat::getText() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat::getBeforeText() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeforeText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setBeforeText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeforeText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat::getContentDescription() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::support::v4::view::accessibility::AccessibilityRecordCompat::getParcelableData() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableData", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::setParcelableData(const ::android::os::Parcelable& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParcelableData", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat::recycle() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat::hashCode() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::obtain(int32_t arg0, int32_t arg1, bool arg2, int32_t arg3){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(IIZI)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::getColumnCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::getRowCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::isHierarchical() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHierarchical", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::obtain(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::addAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::findAccessibilityNodeInfosByText(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getActions(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getChild(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getChildCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getPackageName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getParent(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isCheckable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isFocusable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isLongClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::isSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setCheckable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setFocusable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setLongClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setPackageName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setSelected(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::setText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::getTraversalBefore(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalBefore", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::getTraversalAfter(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalAfter", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi22Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi22Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordJellyBeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordJellyBeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::AccessibilityNodeProviderCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::AccessibilityNodeProviderCompat(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::getProvider() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProvider", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::createAccessibilityNodeInfo(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAccessibilityNodeInfo", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::performAction(int32_t arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(IILandroid/os/Bundle;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::findAccessibilityNodeInfosByText(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/String;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::findFocus(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::AccessibilityNodeInfoCompat(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getInfo() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInfo", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::obtain(const ::android::view::View& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::obtain(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/View;I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::obtain(){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::obtain(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setSource(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setSource(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::findFocus(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::focusSearch(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getWindowId() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getChildCount() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getChild(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::addChild(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::addChild(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getActions() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::addAction(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::addAction(const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityActionCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityActionCompat;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::performAction(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::performAction(int32_t arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(ILandroid/os/Bundle;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setMovementGranularities(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMovementGranularities", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getMovementGranularities() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovementGranularities", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::findAccessibilityNodeInfosByText(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getParent() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setParent(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setParent(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getBoundsInParent(const ::android::graphics::Rect& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInParent", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setBoundsInParent(const ::android::graphics::Rect& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInParent", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getBoundsInScreen(const ::android::graphics::Rect& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInScreen", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setBoundsInScreen(const ::android::graphics::Rect& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInScreen", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isCheckable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setCheckable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isChecked() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setChecked(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isFocusable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setFocusable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isFocused() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setFocused(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocused", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isVisibleToUser() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisibleToUser", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setVisibleToUser(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibleToUser", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isAccessibilityFocused() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAccessibilityFocused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setAccessibilityFocused(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityFocused", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isSelected() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setSelected(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isClickable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setClickable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isLongClickable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setLongClickable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isEnabled() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setEnabled(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isPassword() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setPassword(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isScrollable() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setScrollable(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getPackageName() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setPackageName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getClassName() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setClassName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getText() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getContentDescription() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::recycle() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setViewIdResourceName(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewIdResourceName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getViewIdResourceName() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewIdResourceName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getLiveRegion() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLiveRegion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setLiveRegion(int32_t arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLiveRegion", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getCollectionInfo() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfo", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionInfoCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setCollectionInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionInfo", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setCollectionItemInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionItemInfo", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getCollectionItemInfo() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemInfo", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getRangeInfo() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRangeInfo", "()Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$RangeInfoCompat;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getActionList() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setContentInvalid(bool arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInvalid", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::isContentInvalid() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isContentInvalid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setError(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::getError() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setLabelFor(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::setLabelFor(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::hashCode() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::equals(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::toString() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl::newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderJellyBeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat$AccessibilityNodeProviderJellyBeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityNodeProviderBridge", "(Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::newAccessiblityStateChangeListener(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityStateChangeListener", "(Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerVersionImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerVersionImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTouchExplorationEnabled", "(Landroid/view/accessibility/AccessibilityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getSource(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::isFullScreen(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullScreen", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setFullScreen(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreen", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getItemCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setItemCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getCurrentItemIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItemIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setCurrentItemIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItemIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getFromIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setFromIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getToIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setToIndex(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToIndex", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getMaxScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setMaxScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getMaxScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setMaxScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getAddedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setAddedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getRemovedCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemovedCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setRemovedCount(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemovedCount", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getBeforeText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeforeText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setBeforeText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeforeText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::getParcelableData(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableData", "(Ljava/lang/Object;)Landroid/os/Parcelable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::setParcelableData(const ::java::lang::Object& arg0, const ::android::os::Parcelable& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParcelableData", "(Ljava/lang/Object;Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::appendRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendRecord", "(Landroid/view/accessibility/AccessibilityEvent;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::getRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecord", "(Landroid/view/accessibility/AccessibilityEvent;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::getRecordCount(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecordCount", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::getCurrent() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$RangeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrent", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::getMax() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$RangeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMax", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::getMin() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$RangeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMin", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::getType() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_RangeInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$RangeInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::newAccessibilityAction(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityAction", "(ILjava/lang/CharSequence;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtain() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtain(const ::android::view::View& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtain(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtain(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::addAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::addAction(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getAccessibilityActionId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getAccessibilityActionLabel(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionLabel", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::findAccessibilityNodeInfosByText(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getActions(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getChild(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getChildCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getClassName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getContentDescription(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getPackageName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getParent(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getText(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getWindowId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isCheckable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isChecked(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isEnabled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isFocusable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isVisibleToUser(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisibleToUser", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isAccessibilityFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAccessibilityFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isLongClickable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isPassword(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isScrollable(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setMovementGranularities(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMovementGranularities", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getMovementGranularities(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovementGranularities", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setBoundsInParent(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInParent", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setBoundsInScreen(const ::java::lang::Object& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInScreen", "(Ljava/lang/Object;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setCheckable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setChecked(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setClassName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setContentDescription(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setEnabled(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setFocusable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setVisibleToUser(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibleToUser", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setAccessibilityFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setLongClickable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setPackageName(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setPassword(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setScrollable(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setSelected(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::findFocus(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::focusSearch(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setText(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::recycle(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getViewIdResourceName(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewIdResourceName", "(Ljava/lang/Object;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setViewIdResourceName(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewIdResourceName", "(Ljava/lang/Object;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getLiveRegion(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLiveRegion", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setLiveRegion(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLiveRegion", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setCollectionInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionItemInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setCollectionItemInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionItemInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getRangeInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRangeInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getActionList(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionList", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtainCollectionInfo(int32_t arg0, int32_t arg1, bool arg2, int32_t arg3) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionInfo", "(IIZI)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionInfoColumnCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoColumnCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionInfoRowCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoRowCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isCollectionInfoHierarchical(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionInfoHierarchical", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::obtainCollectionItemInfo(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4, bool arg5) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionItemInfo", "(IIIIZZ)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionItemColumnIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionItemColumnSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionItemRowIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getCollectionItemRowSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isCollectionItemHeading(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemHeading", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isCollectionItemSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getTraversalBefore(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalBefore", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setTraversalBefore(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalBefore", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getTraversalAfter(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTraversalAfter", "(Ljava/lang/Object;)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setTraversalAfter(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTraversalAfter", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setContentInvalid(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInvalid", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::isContentInvalid(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isContentInvalid", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setError(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::getError(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl::newAccessibilityNodeProviderBridge(const ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat_AccessibilityNodeProviderStubImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeProviderCompat$AccessibilityNodeProviderStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityNodeProviderBridge", "(Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::appendRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendRecord", "(Landroid/view/accessibility/AccessibilityEvent;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::getRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecord", "(Landroid/view/accessibility/AccessibilityEvent;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::getRecordCount(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecordCount", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::getMaxScrollX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::getMaxScrollY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::setMaxScrollX(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollX", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::setMaxScrollY(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class) ::android::support::v4::view::accessibility::AccessibilityRecordCompat_AccessibilityRecordIcsMr1Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityRecordCompat$AccessibilityRecordIcsMr1Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollY", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getLiveRegion(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLiveRegion", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::setLiveRegion(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLiveRegion", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::setCollectionInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::obtainCollectionInfo(int32_t arg0, int32_t arg1, bool arg2, int32_t arg3) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionInfo", "(IIZI)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::obtainCollectionItemInfo(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4, bool arg5) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionItemInfo", "(IIIIZZ)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionInfoColumnCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoColumnCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionInfoRowCount(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionInfoRowCount", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::isCollectionInfoHierarchical(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionInfoHierarchical", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionItemInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getRangeInfo(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRangeInfo", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionItemColumnIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionItemColumnSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemColumnSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionItemRowIndex(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowIndex", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::getCollectionItemRowSpan(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCollectionItemRowSpan", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::isCollectionItemHeading(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemHeading", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::setCollectionItemInfo(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCollectionItemInfo", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::setContentInvalid(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentInvalid", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::isContentInvalid(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isContentInvalid", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat::getRecordCount(const ::android::view::accessibility::AccessibilityEvent& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRecordCount", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityEventCompat::appendRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, const ::android::support::v4::view::accessibility::AccessibilityRecordCompat& arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "appendRecord", "(Landroid/view/accessibility/AccessibilityEvent;Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::android::support::v4::view::accessibility::AccessibilityRecordCompat android::support::v4::view::accessibility::AccessibilityEventCompat::getRecord(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getRecord", "(Landroid/view/accessibility/AccessibilityEvent;I)Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat _ret(ret);
    return _ret;
}

::android::support::v4::view::accessibility::AccessibilityRecordCompat android::support::v4::view::accessibility::AccessibilityEventCompat::asRecord(const ::android::view::accessibility::AccessibilityEvent& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asRecord", "(Landroid/view/accessibility/AccessibilityEvent;)Landroid/support/v4/view/accessibility/AccessibilityRecordCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityRecordCompat _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityEventCompat::setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat::getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0){
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::setContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::getContentChangeTypes(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::_class) ::android::support::v4::view::accessibility::AccessibilityEventCompat_AccessibilityEventKitKatImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityEventCompat$AccessibilityEventKitKatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentChangeTypes", "(Landroid/view/accessibility/AccessibilityEvent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::obtain(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4, bool arg5){
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(IIIIZZ)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat _ret(ret);
    return _ret;
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::getColumnIndex() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::getColumnSpan() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnSpan", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::getRowIndex() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::getRowSpan() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowSpan", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::isHeading() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isHeading", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::isSelected() const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_CollectionItemInfoCompat::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$CollectionItemInfoCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::obtain(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtain", "(Landroid/view/View;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::findFocus(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "findFocus", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::focusSearch(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusSearch", "(Ljava/lang/Object;I)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::addChild(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::setSource(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::isVisibleToUser(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisibleToUser", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::setVisibleToUser(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibleToUser", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::isAccessibilityFocused(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAccessibilityFocused", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::setAccessibilityFocused(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessibilityFocused", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::performAction(const ::java::lang::Object& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(Ljava/lang/Object;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::setMovementGranularities(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMovementGranularities", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::getMovementGranularities(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovementGranularities", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::setParent(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoJellybeanImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoJellybeanImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::newAccessiblityStateChangeListener(const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessiblityStateChangeListener", "(Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager& arg0, const ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityStateChangeListenerCompat& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager;Landroid/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityStateChangeListenerCompat;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::getEnabledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0, int32_t arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;I)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::getInstalledAccessibilityServiceList(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledAccessibilityServiceList", "(Landroid/view/accessibility/AccessibilityManager;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::isTouchExplorationEnabled(const ::android::view::accessibility::AccessibilityManager& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class) ::android::support::v4::view::accessibility::AccessibilityManagerCompat_AccessibilityManagerIcsImpl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityManagerCompat$AccessibilityManagerIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTouchExplorationEnabled", "(Landroid/view/accessibility/AccessibilityManager;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::newAccessibilityAction(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newAccessibilityAction", "(ILjava/lang/CharSequence;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::getActionList(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionList", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::obtainCollectionInfo(int32_t arg0, int32_t arg1, bool arg2, int32_t arg3) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionInfo", "(IIZI)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::addAction(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::getAccessibilityActionId(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionId", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::getAccessibilityActionLabel(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityActionLabel", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::obtainCollectionItemInfo(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4, bool arg5) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "obtainCollectionItemInfo", "(IIIIZZ)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    bool _arg5 = arg5;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::isCollectionItemSelected(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCollectionItemSelected", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::getError(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::setError(const ::java::lang::Object& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/Object;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::setLabelFor(const ::java::lang::Object& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class) ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat_AccessibilityNodeInfoApi21Impl::_class = java::fetch_class("android/support/v4/view/accessibility/AccessibilityNodeInfoCompat$AccessibilityNodeInfoApi21Impl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLabelFor", "(Ljava/lang/Object;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

