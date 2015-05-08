#include "java-core.hpp"
#include <memory>
#include "android.graphics.Rect.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.view.View.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.accessibility.AccessibilityEventSource.hpp"
#include "android.view.accessibility.AccessibilityManager.hpp"
#include "android.view.accessibility.AccessibilityNodeInfo.hpp"
#include "android.view.accessibility.AccessibilityRecord.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"

jclass android::view::accessibility::AccessibilityEvent::_class = nullptr;
jclass android::view::accessibility::AccessibilityRecord::_class = nullptr;
jclass android::view::accessibility::AccessibilityNodeInfo::_class = nullptr;
jclass android::view::accessibility::AccessibilityEventSource::_class = nullptr;
jclass android::view::accessibility::AccessibilityManager::_class = nullptr;
jclass android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener::_class = nullptr;

int32_t android::view::accessibility::AccessibilityEvent::getRecordCount() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecordCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityEvent::appendRecord(const ::android::view::accessibility::AccessibilityRecord& arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendRecord", "(Landroid/view/accessibility/AccessibilityRecord;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::accessibility::AccessibilityRecord android::view::accessibility::AccessibilityEvent::getRecord(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecord", "(I)Landroid/view/accessibility/AccessibilityRecord;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::accessibility::AccessibilityRecord _ret(ret);
    return _ret;
}

int32_t android::view::accessibility::AccessibilityEvent::getEventType() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityEvent::setEventType(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEventType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::view::accessibility::AccessibilityEvent::getEventTime() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEventTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::view::accessibility::AccessibilityEvent::setEventTime(int64_t arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEventTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityEvent::getPackageName() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityEvent::setPackageName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::accessibility::AccessibilityEvent android::view::accessibility::AccessibilityEvent::obtain(int32_t arg0){
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(I)Landroid/view/accessibility/AccessibilityEvent;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::accessibility::AccessibilityEvent _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityEvent android::view::accessibility::AccessibilityEvent::obtain(const ::android::view::accessibility::AccessibilityEvent& arg0){
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/accessibility/AccessibilityEvent;)Landroid/view/accessibility/AccessibilityEvent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::accessibility::AccessibilityEvent _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityEvent android::view::accessibility::AccessibilityEvent::obtain(){
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/view/accessibility/AccessibilityEvent;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::view::accessibility::AccessibilityEvent _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityEvent::recycle() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::accessibility::AccessibilityEvent::initFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "initFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityEvent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::accessibility::AccessibilityEvent::describeContents() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::accessibility::AccessibilityEvent::toString() const {
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::accessibility::AccessibilityEvent::eventTypeToString(int32_t arg0){
    if (!::android::view::accessibility::AccessibilityEvent::_class) ::android::view::accessibility::AccessibilityEvent::_class = java::fetch_class("android/view/accessibility/AccessibilityEvent");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "eventTypeToString", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::setSource(const ::android::view::View& arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityRecord::getSource() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

int32_t android::view::accessibility::AccessibilityRecord::getWindowId() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::accessibility::AccessibilityRecord::isChecked() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setChecked(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityRecord::isEnabled() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setEnabled(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityRecord::isPassword() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setPassword(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityRecord::isFullScreen() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFullScreen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setFullScreen(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFullScreen", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityRecord::isScrollable() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setScrollable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getItemCount() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setItemCount(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getCurrentItemIndex() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItemIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setCurrentItemIndex(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentItemIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getFromIndex() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFromIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setFromIndex(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFromIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getToIndex() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setToIndex(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setToIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getScrollX() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setScrollX(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getScrollY() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScrollY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setScrollY(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getMaxScrollX() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setMaxScrollX(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getMaxScrollY() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setMaxScrollY(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxScrollY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getAddedCount() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAddedCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setAddedCount(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAddedCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityRecord::getRemovedCount() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRemovedCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityRecord::setRemovedCount(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemovedCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityRecord::getClassName() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::setClassName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List android::view::accessibility::AccessibilityRecord::getText() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::view::accessibility::AccessibilityRecord::getBeforeText() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBeforeText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::setBeforeText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBeforeText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityRecord::getContentDescription() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::view::accessibility::AccessibilityRecord::getParcelableData() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParcelableData", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::setParcelableData(const ::android::os::Parcelable& arg0) const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParcelableData", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::accessibility::AccessibilityRecord android::view::accessibility::AccessibilityRecord::obtain(const ::android::view::accessibility::AccessibilityRecord& arg0){
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/accessibility/AccessibilityRecord;)Landroid/view/accessibility/AccessibilityRecord;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::accessibility::AccessibilityRecord _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityRecord android::view::accessibility::AccessibilityRecord::obtain(){
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/view/accessibility/AccessibilityRecord;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::view::accessibility::AccessibilityRecord _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityRecord::recycle() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::view::accessibility::AccessibilityRecord::toString() const {
    if (!::android::view::accessibility::AccessibilityRecord::_class) ::android::view::accessibility::AccessibilityRecord::_class = java::fetch_class("android/view/accessibility/AccessibilityRecord");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setSource(const ::android::view::View& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSource", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityNodeInfo::getWindowId() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWindowId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::accessibility::AccessibilityNodeInfo::getChildCount() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityNodeInfo::getChild(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(I)Landroid/view/accessibility/AccessibilityNodeInfo;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::addChild(const ::android::view::View& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "addChild", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityNodeInfo::getActions() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::addAction(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::performAction(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::List android::view::accessibility::AccessibilityNodeInfo::findAccessibilityNodeInfosByText(const ::java::lang::String& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAccessibilityNodeInfosByText", "(Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityNodeInfo::getParent() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParent", "()Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setParent(const ::android::view::View& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParent", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityNodeInfo::getBoundsInParent(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInParent", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityNodeInfo::setBoundsInParent(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInParent", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityNodeInfo::getBoundsInScreen(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundsInScreen", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityNodeInfo::setBoundsInScreen(const ::android::graphics::Rect& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoundsInScreen", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isCheckable() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCheckable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setCheckable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isChecked() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setChecked(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isFocusable() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setFocusable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isFocused() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocused", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setFocused(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocused", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isSelected() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setSelected(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isClickable() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setClickable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isLongClickable() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLongClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setLongClickable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLongClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isEnabled() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setEnabled(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isPassword() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setPassword(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPassword", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityNodeInfo::isScrollable() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::setScrollable(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityNodeInfo::getPackageName() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setPackageName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPackageName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityNodeInfo::getClassName() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setClassName(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClassName", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityNodeInfo::getText() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::accessibility::AccessibilityNodeInfo::getContentDescription() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::setContentDescription(const ::java::lang::CharSequence& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityNodeInfo::describeContents() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityNodeInfo::obtain(const ::android::view::View& arg0){
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/View;)Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityNodeInfo::obtain(){
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "()Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

::android::view::accessibility::AccessibilityNodeInfo android::view::accessibility::AccessibilityNodeInfo::obtain(const ::android::view::accessibility::AccessibilityNodeInfo& arg0){
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "obtain", "(Landroid/view/accessibility/AccessibilityNodeInfo;)Landroid/view/accessibility/AccessibilityNodeInfo;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::accessibility::AccessibilityNodeInfo _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityNodeInfo::recycle() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "recycle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::accessibility::AccessibilityNodeInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::accessibility::AccessibilityNodeInfo::equals(const ::java::lang::Object& arg0) const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::view::accessibility::AccessibilityNodeInfo::hashCode() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::accessibility::AccessibilityNodeInfo::toString() const {
    if (!::android::view::accessibility::AccessibilityNodeInfo::_class) ::android::view::accessibility::AccessibilityNodeInfo::_class = java::fetch_class("android/view/accessibility/AccessibilityNodeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::accessibility::AccessibilityEventSource::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityEventSource::_class) ::android::view::accessibility::AccessibilityEventSource::_class = java::fetch_class("android/view/accessibility/AccessibilityEventSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityEventSource::sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::accessibility::AccessibilityEventSource::_class) ::android::view::accessibility::AccessibilityEventSource::_class = java::fetch_class("android/view/accessibility/AccessibilityEventSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityManager::isEnabled() const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::view::accessibility::AccessibilityManager::isTouchExplorationEnabled() const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTouchExplorationEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::view::accessibility::AccessibilityManager::sendAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityManager::interrupt() const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "interrupt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::List android::view::accessibility::AccessibilityManager::getAccessibilityServiceList() const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityServiceList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::view::accessibility::AccessibilityManager::getInstalledAccessibilityServiceList() const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInstalledAccessibilityServiceList", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List android::view::accessibility::AccessibilityManager::getEnabledAccessibilityServiceList(int32_t arg0) const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEnabledAccessibilityServiceList", "(I)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

bool android::view::accessibility::AccessibilityManager::addAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& arg0) const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::view::accessibility::AccessibilityManager::removeAccessibilityStateChangeListener(const ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener& arg0) const {
    if (!::android::view::accessibility::AccessibilityManager::_class) ::android::view::accessibility::AccessibilityManager::_class = java::fetch_class("android/view/accessibility/AccessibilityManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAccessibilityStateChangeListener", "(Landroid/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener::onAccessibilityStateChanged(bool arg0) const {
    if (!::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener::_class) ::android::view::accessibility::AccessibilityManager_AccessibilityStateChangeListener::_class = java::fetch_class("android/view/accessibility/AccessibilityManager$AccessibilityStateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAccessibilityStateChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

