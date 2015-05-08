#include "java-core.hpp"
#include <memory>
#include "android.app.Dialog.hpp"
#include "android.app.Fragment.hpp"
#include "android.content.Context.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.content.Intent.hpp"
#include "android.content.SharedPreferences.hpp"
#include "android.content.res.Resources.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.preference.CheckBoxPreference.hpp"
#include "android.preference.DialogPreference.hpp"
#include "android.preference.EditTextPreference.hpp"
#include "android.preference.ListPreference.hpp"
#include "android.preference.MultiSelectListPreference.hpp"
#include "android.preference.Preference.hpp"
#include "android.preference.PreferenceActivity.hpp"
#include "android.preference.PreferenceCategory.hpp"
#include "android.preference.PreferenceFragment.hpp"
#include "android.preference.PreferenceGroup.hpp"
#include "android.preference.PreferenceManager.hpp"
#include "android.preference.PreferenceScreen.hpp"
#include "android.preference.RingtonePreference.hpp"
#include "android.preference.SwitchPreference.hpp"
#include "android.preference.TwoStatePreference.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.widget.AdapterView.hpp"
#include "android.widget.EditText.hpp"
#include "android.widget.ListAdapter.hpp"
#include "android.widget.ListView.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.Set.hpp"

jclass android::preference::PreferenceManager_OnActivityDestroyListener::_class = nullptr;
jclass android::preference::CheckBoxPreference::_class = nullptr;
jclass android::preference::Preference::_class = nullptr;
jclass android::preference::Preference_BaseSavedState::_class = nullptr;
jclass android::preference::PreferenceCategory::_class = nullptr;
jclass android::preference::PreferenceActivity_Header::_class = nullptr;
jclass android::preference::PreferenceManager::_class = nullptr;
jclass android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback::_class = nullptr;
jclass android::preference::PreferenceGroup::_class = nullptr;
jclass android::preference::Preference_OnPreferenceClickListener::_class = nullptr;
jclass android::preference::PreferenceManager_OnActivityResultListener::_class = nullptr;
jclass android::preference::SwitchPreference::_class = nullptr;
jclass android::preference::DialogPreference::_class = nullptr;
jclass android::preference::PreferenceManager_OnActivityStopListener::_class = nullptr;
jclass android::preference::Preference_OnPreferenceChangeListener::_class = nullptr;
jclass android::preference::EditTextPreference::_class = nullptr;
jclass android::preference::MultiSelectListPreference::_class = nullptr;
jclass android::preference::ListPreference::_class = nullptr;
jclass android::preference::PreferenceScreen::_class = nullptr;
jclass android::preference::PreferenceActivity::_class = nullptr;
jclass android::preference::PreferenceFragment::_class = nullptr;
jclass android::preference::RingtonePreference::_class = nullptr;
jclass android::preference::TwoStatePreference::_class = nullptr;

void android::preference::PreferenceManager_OnActivityDestroyListener::onActivityDestroy() const {
    if (!::android::preference::PreferenceManager_OnActivityDestroyListener::_class) ::android::preference::PreferenceManager_OnActivityDestroyListener::_class = java::fetch_class("android/preference/PreferenceManager$OnActivityDestroyListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::CheckBoxPreference::CheckBoxPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::CheckBoxPreference::_class) ::android::preference::CheckBoxPreference::_class = java::fetch_class("android/preference/CheckBoxPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::CheckBoxPreference::CheckBoxPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::CheckBoxPreference::_class) ::android::preference::CheckBoxPreference::_class = java::fetch_class("android/preference/CheckBoxPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::CheckBoxPreference::CheckBoxPreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::CheckBoxPreference::_class) ::android::preference::CheckBoxPreference::_class = java::fetch_class("android/preference/CheckBoxPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::Preference::Preference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::Preference::Preference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::Preference::Preference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::Preference::setIntent(const ::android::content::Intent& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Intent android::preference::Preference::getIntent() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::preference::Preference::setFragment(const ::java::lang::String& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFragment", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::Preference::getFragment() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::preference::Preference::getExtras() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle android::preference::Preference::peekExtras() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekExtras", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void android::preference::Preference::setLayoutResource(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::Preference::getLayoutResource() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::Preference::setWidgetLayoutResource(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWidgetLayoutResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::Preference::getWidgetLayoutResource() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidgetLayoutResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::View android::preference::Preference::getView(const ::android::view::View& arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(Landroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::preference::Preference::setOrder(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrder", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::Preference::getOrder() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrder", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::Preference::setTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::setTitle(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::Preference::getTitleRes() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitleRes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::preference::Preference::getTitle() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::Preference::setIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::setIcon(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIcon", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::preference::Preference::getIcon() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::Preference::getSummary() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSummary", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::Preference::setSummary(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummary", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::setSummary(int32_t arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummary", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::setEnabled(bool arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::Preference::isEnabled() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::Preference::setSelectable(bool arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::Preference::isSelectable() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSelectable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::Preference::setShouldDisableView(bool arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShouldDisableView", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::Preference::getShouldDisableView() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShouldDisableView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::Preference::setKey(const ::java::lang::String& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKey", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::Preference::getKey() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::preference::Preference::hasKey() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasKey", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::preference::Preference::isPersistent() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPersistent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::Preference::setPersistent(bool arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPersistent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::setOnPreferenceChangeListener(const ::android::preference::Preference_OnPreferenceChangeListener& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnPreferenceChangeListener", "(Landroid/preference/Preference$OnPreferenceChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::preference::Preference_OnPreferenceChangeListener android::preference::Preference::getOnPreferenceChangeListener() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnPreferenceChangeListener", "()Landroid/preference/Preference$OnPreferenceChangeListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::Preference_OnPreferenceChangeListener _ret(ret);
    return _ret;
}

void android::preference::Preference::setOnPreferenceClickListener(const ::android::preference::Preference_OnPreferenceClickListener& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnPreferenceClickListener", "(Landroid/preference/Preference$OnPreferenceClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::preference::Preference_OnPreferenceClickListener android::preference::Preference::getOnPreferenceClickListener() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnPreferenceClickListener", "()Landroid/preference/Preference$OnPreferenceClickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::Preference_OnPreferenceClickListener _ret(ret);
    return _ret;
}

::android::content::Context android::preference::Preference::getContext() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::preference::Preference::getSharedPreferences() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferences", "()Landroid/content/SharedPreferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::android::content::SharedPreferences_Editor android::preference::Preference::getEditor() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEditor", "()Landroid/content/SharedPreferences$Editor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::SharedPreferences_Editor _ret(ret);
    return _ret;
}

bool android::preference::Preference::shouldCommit() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldCommit", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::preference::Preference::compareTo(const ::android::preference::Preference& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Landroid/preference/Preference;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::preference::PreferenceManager android::preference::Preference::getPreferenceManager() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceManager", "()Landroid/preference/PreferenceManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceManager _ret(ret);
    return _ret;
}

void android::preference::Preference::notifyDependencyChange(bool arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDependencyChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::onDependencyChanged(const ::android::preference::Preference& arg0, bool arg1) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDependencyChanged", "(Landroid/preference/Preference;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::preference::Preference::shouldDisableDependents() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDisableDependents", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::Preference::setDependency(const ::java::lang::String& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDependency", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::Preference::getDependency() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDependency", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::preference::Preference::setDefaultValue(const ::java::lang::Object& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultValue", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::Preference::toString() const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::preference::Preference::saveHierarchyState(const ::android::os::Bundle& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveHierarchyState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::Preference::restoreHierarchyState(const ::android::os::Bundle& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreHierarchyState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::Preference::compareTo(const ::java::lang::Object& arg0) const {
    if (!::android::preference::Preference::_class) ::android::preference::Preference::_class = java::fetch_class("android/preference/Preference");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::Preference_BaseSavedState::Preference_BaseSavedState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {
    if (!::android::preference::Preference_BaseSavedState::_class) ::android::preference::Preference_BaseSavedState::_class = java::fetch_class("android/preference/Preference$BaseSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::Preference_BaseSavedState::Preference_BaseSavedState(const ::android::os::Parcelable& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0) {
    if (!::android::preference::Preference_BaseSavedState::_class) ::android::preference::Preference_BaseSavedState::_class = java::fetch_class("android/preference/Preference$BaseSavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceCategory::PreferenceCategory(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::PreferenceCategory::_class) ::android::preference::PreferenceCategory::_class = java::fetch_class("android/preference/PreferenceCategory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceCategory::PreferenceCategory(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::PreferenceCategory::_class) ::android::preference::PreferenceCategory::_class = java::fetch_class("android/preference/PreferenceCategory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceCategory::PreferenceCategory(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceGroup((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::PreferenceCategory::_class) ::android::preference::PreferenceCategory::_class = java::fetch_class("android/preference/PreferenceCategory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::preference::PreferenceCategory::isEnabled() const {
    if (!::android::preference::PreferenceCategory::_class) ::android::preference::PreferenceCategory::_class = java::fetch_class("android/preference/PreferenceCategory");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceActivity_Header::PreferenceActivity_Header() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::CharSequence android::preference::PreferenceActivity_Header::getTitle(const ::android::content::res::Resources& arg0) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "(Landroid/content/res/Resources;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::PreferenceActivity_Header::getSummary(const ::android::content::res::Resources& arg0) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSummary", "(Landroid/content/res/Resources;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::PreferenceActivity_Header::getBreadCrumbTitle(const ::android::content::res::Resources& arg0) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbTitle", "(Landroid/content/res/Resources;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::PreferenceActivity_Header::getBreadCrumbShortTitle(const ::android::content::res::Resources& arg0) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBreadCrumbShortTitle", "(Landroid/content/res/Resources;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::preference::PreferenceActivity_Header::describeContents() const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::PreferenceActivity_Header::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::PreferenceActivity_Header::readFromParcel(const ::android::os::Parcel& arg0) const {
    if (!::android::preference::PreferenceActivity_Header::_class) ::android::preference::PreferenceActivity_Header::_class = java::fetch_class("android/preference/PreferenceActivity$Header");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFromParcel", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::preference::PreferenceScreen android::preference::PreferenceManager::createPreferenceScreen(const ::android::content::Context& arg0) const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "createPreferenceScreen", "(Landroid/content/Context;)Landroid/preference/PreferenceScreen;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::PreferenceScreen _ret(ret);
    return _ret;
}

::java::lang::String android::preference::PreferenceManager::getSharedPreferencesName() const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferencesName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::preference::PreferenceManager::setSharedPreferencesName(const ::java::lang::String& arg0) const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSharedPreferencesName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::PreferenceManager::getSharedPreferencesMode() const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferencesMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::PreferenceManager::setSharedPreferencesMode(int32_t arg0) const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSharedPreferencesMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::SharedPreferences android::preference::PreferenceManager::getSharedPreferences() const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSharedPreferences", "()Landroid/content/SharedPreferences;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::android::content::SharedPreferences android::preference::PreferenceManager::getDefaultSharedPreferences(const ::android::content::Context& arg0){
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultSharedPreferences", "(Landroid/content/Context;)Landroid/content/SharedPreferences;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::SharedPreferences _ret(ret);
    return _ret;
}

::android::preference::Preference android::preference::PreferenceManager::findPreference(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPreference", "(Ljava/lang/CharSequence;)Landroid/preference/Preference;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::Preference _ret(ret);
    return _ret;
}

void android::preference::PreferenceManager::setDefaultValues(const ::android::content::Context& arg0, int32_t arg1, bool arg2){
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultValues", "(Landroid/content/Context;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::preference::PreferenceManager::setDefaultValues(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, bool arg4){
    if (!::android::preference::PreferenceManager::_class) ::android::preference::PreferenceManager::_class = java::fetch_class("android/preference/PreferenceManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultValues", "(Landroid/content/Context;Ljava/lang/String;IIZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback::onPreferenceStartFragment(const ::android::preference::PreferenceFragment& arg0, const ::android::preference::Preference& arg1) const {
    if (!::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback::_class) ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback::_class = java::fetch_class("android/preference/PreferenceFragment$OnPreferenceStartFragmentCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceStartFragment", "(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceGroup::PreferenceGroup(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceGroup::PreferenceGroup(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::preference::PreferenceGroup::setOrderingAsAdded(bool arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrderingAsAdded", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::PreferenceGroup::isOrderingAsAdded() const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOrderingAsAdded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::PreferenceGroup::addItemFromInflater(const ::android::preference::Preference& arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addItemFromInflater", "(Landroid/preference/Preference;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::PreferenceGroup::getPreferenceCount() const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::preference::Preference android::preference::PreferenceGroup::getPreference(int32_t arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreference", "(I)Landroid/preference/Preference;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::Preference _ret(ret);
    return _ret;
}

bool android::preference::PreferenceGroup::addPreference(const ::android::preference::Preference& arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreference", "(Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::preference::PreferenceGroup::removePreference(const ::android::preference::Preference& arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePreference", "(Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::preference::PreferenceGroup::removeAll() const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::preference::Preference android::preference::PreferenceGroup::findPreference(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPreference", "(Ljava/lang/CharSequence;)Landroid/preference/Preference;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::Preference _ret(ret);
    return _ret;
}

void android::preference::PreferenceGroup::setEnabled(bool arg0) const {
    if (!::android::preference::PreferenceGroup::_class) ::android::preference::PreferenceGroup::_class = java::fetch_class("android/preference/PreferenceGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::Preference_OnPreferenceClickListener::onPreferenceClick(const ::android::preference::Preference& arg0) const {
    if (!::android::preference::Preference_OnPreferenceClickListener::_class) ::android::preference::Preference_OnPreferenceClickListener::_class = java::fetch_class("android/preference/Preference$OnPreferenceClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceClick", "(Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::preference::PreferenceManager_OnActivityResultListener::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::preference::PreferenceManager_OnActivityResultListener::_class) ::android::preference::PreferenceManager_OnActivityResultListener::_class = java::fetch_class("android/preference/PreferenceManager$OnActivityResultListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::SwitchPreference::SwitchPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::SwitchPreference::SwitchPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::SwitchPreference::SwitchPreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::TwoStatePreference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::SwitchPreference::setSwitchTextOn(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTextOn", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::SwitchPreference::setSwitchTextOff(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTextOff", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::SwitchPreference::setSwitchTextOn(int32_t arg0) const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTextOn", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::SwitchPreference::setSwitchTextOff(int32_t arg0) const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTextOff", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::SwitchPreference::getSwitchTextOn() const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSwitchTextOn", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::SwitchPreference::getSwitchTextOff() const {
    if (!::android::preference::SwitchPreference::_class) ::android::preference::SwitchPreference::_class = java::fetch_class("android/preference/SwitchPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSwitchTextOff", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::DialogPreference::DialogPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::DialogPreference::DialogPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::preference::DialogPreference::setDialogTitle(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogTitle", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::DialogPreference::setDialogTitle(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogTitle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::DialogPreference::getDialogTitle() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogTitle", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::setDialogMessage(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogMessage", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::DialogPreference::setDialogMessage(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogMessage", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::DialogPreference::getDialogMessage() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogMessage", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::setDialogIcon(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogIcon", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::DialogPreference::setDialogIcon(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogIcon", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::preference::DialogPreference::getDialogIcon() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogIcon", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::setPositiveButtonText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositiveButtonText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::DialogPreference::setPositiveButtonText(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPositiveButtonText", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::DialogPreference::getPositiveButtonText() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositiveButtonText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::setNegativeButtonText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativeButtonText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::DialogPreference::setNegativeButtonText(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativeButtonText", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::DialogPreference::getNegativeButtonText() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNegativeButtonText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::setDialogLayoutResource(int32_t arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialogLayoutResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::preference::DialogPreference::getDialogLayoutResource() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogLayoutResource", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::DialogPreference::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::DialogPreference::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Dialog android::preference::DialogPreference::getDialog() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialog", "()Landroid/app/Dialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void android::preference::DialogPreference::onActivityDestroy() const {
    if (!::android::preference::DialogPreference::_class) ::android::preference::DialogPreference::_class = java::fetch_class("android/preference/DialogPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceManager_OnActivityStopListener::onActivityStop() const {
    if (!::android::preference::PreferenceManager_OnActivityStopListener::_class) ::android::preference::PreferenceManager_OnActivityStopListener::_class = java::fetch_class("android/preference/PreferenceManager$OnActivityStopListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::preference::Preference_OnPreferenceChangeListener::onPreferenceChange(const ::android::preference::Preference& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::preference::Preference_OnPreferenceChangeListener::_class) ::android::preference::Preference_OnPreferenceChangeListener::_class = java::fetch_class("android/preference/Preference$OnPreferenceChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceChange", "(Landroid/preference/Preference;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::EditTextPreference::EditTextPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::EditTextPreference::EditTextPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::EditTextPreference::EditTextPreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::EditTextPreference::setText(const ::java::lang::String& arg0) const {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::EditTextPreference::getText() const {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::preference::EditTextPreference::shouldDisableDependents() const {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDisableDependents", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::widget::EditText android::preference::EditTextPreference::getEditText() const {
    if (!::android::preference::EditTextPreference::_class) ::android::preference::EditTextPreference::_class = java::fetch_class("android/preference/EditTextPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEditText", "()Landroid/widget/EditText;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::EditText _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::MultiSelectListPreference::MultiSelectListPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::MultiSelectListPreference::MultiSelectListPreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::MultiSelectListPreference::setEntries(const std::vector< ::java::lang::CharSequence>& arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntries", "([Ljava/lang/CharSequence;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::MultiSelectListPreference::setEntries(int32_t arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntries", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::CharSequence> android::preference::MultiSelectListPreference::getEntries() const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntries", "()[Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::preference::MultiSelectListPreference::setEntryValues(const std::vector< ::java::lang::CharSequence>& arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntryValues", "([Ljava/lang/CharSequence;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::MultiSelectListPreference::setEntryValues(int32_t arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntryValues", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::CharSequence> android::preference::MultiSelectListPreference::getEntryValues() const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntryValues", "()[Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::preference::MultiSelectListPreference::setValues(const ::java::util::Set& arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValues", "(Ljava/util/Set;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Set android::preference::MultiSelectListPreference::getValues() const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValues", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t android::preference::MultiSelectListPreference::findIndexOfValue(const ::java::lang::String& arg0) const {
    if (!::android::preference::MultiSelectListPreference::_class) ::android::preference::MultiSelectListPreference::_class = java::fetch_class("android/preference/MultiSelectListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "findIndexOfValue", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::ListPreference::ListPreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::ListPreference::ListPreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::preference::DialogPreference((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityDestroyListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::ListPreference::setEntries(const std::vector< ::java::lang::CharSequence>& arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntries", "([Ljava/lang/CharSequence;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::ListPreference::setEntries(int32_t arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntries", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::CharSequence> android::preference::ListPreference::getEntries() const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntries", "()[Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::preference::ListPreference::setEntryValues(const std::vector< ::java::lang::CharSequence>& arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntryValues", "([Ljava/lang/CharSequence;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::CharSequence::_class) ::java::lang::CharSequence::_class = java::fetch_class("java/lang/CharSequence");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::CharSequence::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::CharSequence& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::ListPreference::setEntryValues(int32_t arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEntryValues", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::CharSequence> android::preference::ListPreference::getEntryValues() const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntryValues", "()[Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::CharSequence> _ret(rets, ::java::lang::CharSequence((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::CharSequence retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::preference::ListPreference::setValue(const ::java::lang::String& arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::ListPreference::getSummary() const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSummary", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::ListPreference::setSummary(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummary", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::ListPreference::setValueIndex(int32_t arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValueIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::preference::ListPreference::getValue() const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::preference::ListPreference::getEntry() const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntry", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::preference::ListPreference::findIndexOfValue(const ::java::lang::String& arg0) const {
    if (!::android::preference::ListPreference::_class) ::android::preference::ListPreference::_class = java::fetch_class("android/preference/ListPreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "findIndexOfValue", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::preference::PreferenceScreen::getRootAdapter() const {
    if (!::android::preference::PreferenceScreen::_class) ::android::preference::PreferenceScreen::_class = java::fetch_class("android/preference/PreferenceScreen");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRootAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::preference::PreferenceScreen::bind(const ::android::widget::ListView& arg0) const {
    if (!::android::preference::PreferenceScreen::_class) ::android::preference::PreferenceScreen::_class = java::fetch_class("android/preference/PreferenceScreen");
    static jmethodID mid = java::jni->GetMethodID(_class, "bind", "(Landroid/widget/ListView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceScreen::onDismiss(const ::android::content::DialogInterface& arg0) const {
    if (!::android::preference::PreferenceScreen::_class) ::android::preference::PreferenceScreen::_class = java::fetch_class("android/preference/PreferenceScreen");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/content/DialogInterface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Dialog android::preference::PreferenceScreen::getDialog() const {
    if (!::android::preference::PreferenceScreen::_class) ::android::preference::PreferenceScreen::_class = java::fetch_class("android/preference/PreferenceScreen");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialog", "()Landroid/app/Dialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void android::preference::PreferenceScreen::onItemClick(const ::android::widget::AdapterView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::preference::PreferenceScreen::_class) ::android::preference::PreferenceScreen::_class = java::fetch_class("android/preference/PreferenceScreen");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemClick", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceActivity::PreferenceActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::app::ListActivity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::preference::PreferenceFragment_OnPreferenceStartFragmentCallback((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::preference::PreferenceActivity::hasHeaders() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasHeaders", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::preference::PreferenceActivity::isMultiPane() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMultiPane", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::preference::PreferenceActivity::onIsMultiPane() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onIsMultiPane", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::preference::PreferenceActivity::onIsHidingHeaders() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onIsHidingHeaders", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::preference::PreferenceActivity_Header android::preference::PreferenceActivity::onGetInitialHeader() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetInitialHeader", "()Landroid/preference/PreferenceActivity$Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceActivity_Header _ret(ret);
    return _ret;
}

::android::preference::PreferenceActivity_Header android::preference::PreferenceActivity::onGetNewHeader() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetNewHeader", "()Landroid/preference/PreferenceActivity$Header;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceActivity_Header _ret(ret);
    return _ret;
}

void android::preference::PreferenceActivity::onBuildHeaders(const ::java::util::List& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBuildHeaders", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceActivity::invalidateHeaders() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateHeaders", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceActivity::loadHeadersFromResource(int32_t arg0, const ::java::util::List& arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadHeadersFromResource", "(ILjava/util/List;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::PreferenceActivity::setListFooter(const ::android::view::View& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListFooter", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceActivity::onContentChanged() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onContentChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceActivity::onHeaderClick(const ::android::preference::PreferenceActivity_Header& arg0, int32_t arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHeaderClick", "(Landroid/preference/PreferenceActivity$Header;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::content::Intent android::preference::PreferenceActivity::onBuildStartFragmentIntent(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBuildStartFragmentIntent", "(Ljava/lang/String;Landroid/os/Bundle;II)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void android::preference::PreferenceActivity::startWithFragment(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::app::Fragment& arg2, int32_t arg3) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startWithFragment", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::preference::PreferenceActivity::startWithFragment(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, const ::android::app::Fragment& arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startWithFragment", "(Ljava/lang/String;Landroid/os/Bundle;Landroid/app/Fragment;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::preference::PreferenceActivity::showBreadCrumbs(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "showBreadCrumbs", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::PreferenceActivity::setParentTitle(const ::java::lang::CharSequence& arg0, const ::java::lang::CharSequence& arg1, const ::android::view::View_OnClickListener& arg2) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParentTitle", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::preference::PreferenceActivity::switchToHeader(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "switchToHeader", "(Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::PreferenceActivity::switchToHeader(const ::android::preference::PreferenceActivity_Header& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "switchToHeader", "(Landroid/preference/PreferenceActivity$Header;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceActivity::startPreferenceFragment(const ::android::app::Fragment& arg0, bool arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPreferenceFragment", "(Landroid/app/Fragment;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::preference::PreferenceActivity::startPreferencePanel(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1, int32_t arg2, const ::java::lang::CharSequence& arg3, const ::android::app::Fragment& arg4, int32_t arg5) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "startPreferencePanel", "(Ljava/lang/String;Landroid/os/Bundle;ILjava/lang/CharSequence;Landroid/app/Fragment;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::preference::PreferenceActivity::finishPreferencePanel(const ::android::app::Fragment& arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishPreferencePanel", "(Landroid/app/Fragment;ILandroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::preference::PreferenceActivity::onPreferenceStartFragment(const ::android::preference::PreferenceFragment& arg0, const ::android::preference::Preference& arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceStartFragment", "(Landroid/preference/PreferenceFragment;Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::preference::PreferenceManager android::preference::PreferenceActivity::getPreferenceManager() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceManager", "()Landroid/preference/PreferenceManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceManager _ret(ret);
    return _ret;
}

void android::preference::PreferenceActivity::setPreferenceScreen(const ::android::preference::PreferenceScreen& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreferenceScreen", "(Landroid/preference/PreferenceScreen;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::preference::PreferenceScreen android::preference::PreferenceActivity::getPreferenceScreen() const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceScreen", "()Landroid/preference/PreferenceScreen;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceScreen _ret(ret);
    return _ret;
}

void android::preference::PreferenceActivity::addPreferencesFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferencesFromIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceActivity::addPreferencesFromResource(int32_t arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferencesFromResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::PreferenceActivity::onPreferenceTreeClick(const ::android::preference::PreferenceScreen& arg0, const ::android::preference::Preference& arg1) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceTreeClick", "(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::preference::Preference android::preference::PreferenceActivity::findPreference(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::PreferenceActivity::_class) ::android::preference::PreferenceActivity::_class = java::fetch_class("android/preference/PreferenceActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPreference", "(Ljava/lang/CharSequence;)Landroid/preference/Preference;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::Preference _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::PreferenceFragment::PreferenceFragment() : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::preference::PreferenceFragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::preference::PreferenceFragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::preference::PreferenceFragment::onActivityCreated(const ::android::os::Bundle& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityCreated", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceFragment::onStart() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceFragment::onStop() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceFragment::onDestroyView() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceFragment::onDestroy() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::preference::PreferenceFragment::onSaveInstanceState(const ::android::os::Bundle& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceFragment::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::preference::PreferenceManager android::preference::PreferenceFragment::getPreferenceManager() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceManager", "()Landroid/preference/PreferenceManager;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceManager _ret(ret);
    return _ret;
}

void android::preference::PreferenceFragment::setPreferenceScreen(const ::android::preference::PreferenceScreen& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreferenceScreen", "(Landroid/preference/PreferenceScreen;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::preference::PreferenceScreen android::preference::PreferenceFragment::getPreferenceScreen() const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreferenceScreen", "()Landroid/preference/PreferenceScreen;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::preference::PreferenceScreen _ret(ret);
    return _ret;
}

void android::preference::PreferenceFragment::addPreferencesFromIntent(const ::android::content::Intent& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferencesFromIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::PreferenceFragment::addPreferencesFromResource(int32_t arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPreferencesFromResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::PreferenceFragment::onPreferenceTreeClick(const ::android::preference::PreferenceScreen& arg0, const ::android::preference::Preference& arg1) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreferenceTreeClick", "(Landroid/preference/PreferenceScreen;Landroid/preference/Preference;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::preference::Preference android::preference::PreferenceFragment::findPreference(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::PreferenceFragment::_class) ::android::preference::PreferenceFragment::_class = java::fetch_class("android/preference/PreferenceFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "findPreference", "(Ljava/lang/CharSequence;)Landroid/preference/Preference;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::preference::Preference _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::RingtonePreference::RingtonePreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityResultListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::RingtonePreference::RingtonePreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityResultListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::RingtonePreference::RingtonePreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::android::preference::PreferenceManager_OnActivityResultListener((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::preference::RingtonePreference::getRingtoneType() const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRingtoneType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::preference::RingtonePreference::setRingtoneType(int32_t arg0) const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRingtoneType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::RingtonePreference::getShowDefault() const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowDefault", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::RingtonePreference::setShowDefault(bool arg0) const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowDefault", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::RingtonePreference::getShowSilent() const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowSilent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::RingtonePreference::setShowSilent(bool arg0) const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowSilent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::RingtonePreference::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::preference::RingtonePreference::_class) ::android::preference::RingtonePreference::_class = java::fetch_class("android/preference/RingtonePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::TwoStatePreference::TwoStatePreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::TwoStatePreference::TwoStatePreference(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::preference::TwoStatePreference::TwoStatePreference(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::preference::Preference((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::preference::TwoStatePreference::setChecked(bool arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::preference::TwoStatePreference::isChecked() const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::preference::TwoStatePreference::shouldDisableDependents() const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDisableDependents", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::TwoStatePreference::setSummaryOn(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryOn", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::TwoStatePreference::setSummaryOn(int32_t arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryOn", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::TwoStatePreference::getSummaryOn() const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSummaryOn", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::preference::TwoStatePreference::setSummaryOff(const ::java::lang::CharSequence& arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryOff", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::preference::TwoStatePreference::setSummaryOff(int32_t arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSummaryOff", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::preference::TwoStatePreference::getSummaryOff() const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSummaryOff", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

bool android::preference::TwoStatePreference::getDisableDependentsState() const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisableDependentsState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::preference::TwoStatePreference::setDisableDependentsState(bool arg0) const {
    if (!::android::preference::TwoStatePreference::_class) ::android::preference::TwoStatePreference::_class = java::fetch_class("android/preference/TwoStatePreference");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisableDependentsState", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

