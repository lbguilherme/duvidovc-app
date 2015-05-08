#include "java-core.hpp"
#include <memory>
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.pm.ApplicationInfo.hpp"
#include "android.content.pm.PackageManager.hpp"
#include "android.content.pm.ServiceInfo.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.view.textservice.SpellCheckerInfo.hpp"
#include "android.view.textservice.SpellCheckerSession.hpp"
#include "android.view.textservice.SpellCheckerSubtype.hpp"
#include "android.view.textservice.SuggestionsInfo.hpp"
#include "android.view.textservice.TextInfo.hpp"
#include "android.view.textservice.TextServicesManager.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Locale.hpp"

jclass android::view::textservice::SpellCheckerSubtype::_class = nullptr;
jclass android::view::textservice::SpellCheckerSession::_class = nullptr;
jclass android::view::textservice::TextServicesManager::_class = nullptr;
jclass android::view::textservice::SuggestionsInfo::_class = nullptr;
jclass android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener::_class = nullptr;
jclass android::view::textservice::TextInfo::_class = nullptr;
jclass android::view::textservice::SpellCheckerInfo::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::SpellCheckerSubtype::SpellCheckerSubtype(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::view::textservice::SpellCheckerSubtype::getNameResId() const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNameResId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::textservice::SpellCheckerSubtype::getLocale() const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::view::textservice::SpellCheckerSubtype::getExtraValue() const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtraValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::textservice::SpellCheckerSubtype::hashCode() const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::view::textservice::SpellCheckerSubtype::equals(const ::java::lang::Object& arg0) const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::view::textservice::SpellCheckerSubtype::getDisplayName(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::content::pm::ApplicationInfo& arg2) const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(Landroid/content/Context;Ljava/lang/String;Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::view::textservice::SpellCheckerSubtype::describeContents() const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::textservice::SpellCheckerSubtype::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::textservice::SpellCheckerSubtype::_class) ::android::view::textservice::SpellCheckerSubtype::_class = java::fetch_class("android/view/textservice/SpellCheckerSubtype");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::view::textservice::SpellCheckerSession::isSessionDisconnected() const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSessionDisconnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::textservice::SpellCheckerInfo android::view::textservice::SpellCheckerSession::getSpellChecker() const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpellChecker", "()Landroid/view/textservice/SpellCheckerInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::textservice::SpellCheckerInfo _ret(ret);
    return _ret;
}

void android::view::textservice::SpellCheckerSession::cancel() const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::textservice::SpellCheckerSession::close() const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::view::textservice::SpellCheckerSession::getSuggestions(const ::android::view::textservice::TextInfo& arg0, int32_t arg1) const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestions", "(Landroid/view/textservice/TextInfo;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::textservice::SpellCheckerSession::getSuggestions(const std::vector< ::android::view::textservice::TextInfo>& arg0, int32_t arg1, bool arg2) const {
    if (!::android::view::textservice::SpellCheckerSession::_class) ::android::view::textservice::SpellCheckerSession::_class = java::fetch_class("android/view/textservice/SpellCheckerSession");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestions", "([Landroid/view/textservice/TextInfo;IZ)V");
    unsigned arg0s = arg0.size();
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::view::textservice::TextInfo::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::view::textservice::TextInfo& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::textservice::SpellCheckerSession android::view::textservice::TextServicesManager::newSpellCheckerSession(const ::android::os::Bundle& arg0, const ::java::util::Locale& arg1, const ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener& arg2, bool arg3) const {
    if (!::android::view::textservice::TextServicesManager::_class) ::android::view::textservice::TextServicesManager::_class = java::fetch_class("android/view/textservice/TextServicesManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSpellCheckerSession", "(Landroid/os/Bundle;Ljava/util/Locale;Landroid/view/textservice/SpellCheckerSession$SpellCheckerSessionListener;Z)Landroid/view/textservice/SpellCheckerSession;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::textservice::SpellCheckerSession _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::SuggestionsInfo::SuggestionsInfo(int32_t arg0, const std::vector< ::java::lang::String>& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::SuggestionsInfo::SuggestionsInfo(int32_t arg0, const std::vector< ::java::lang::String>& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I[Ljava/lang/String;II)V");
    int32_t _arg0 = arg0;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::SuggestionsInfo::SuggestionsInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::textservice::SuggestionsInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::view::textservice::SuggestionsInfo::setCookieAndSequence(int32_t arg0, int32_t arg1) const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookieAndSequence", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::view::textservice::SuggestionsInfo::getCookie() const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookie", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::textservice::SuggestionsInfo::getSequence() const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequence", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::textservice::SuggestionsInfo::getSuggestionsAttributes() const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestionsAttributes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::textservice::SuggestionsInfo::getSuggestionsCount() const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestionsCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::textservice::SuggestionsInfo::getSuggestionAt(int32_t arg0) const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestionAt", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::textservice::SuggestionsInfo::describeContents() const {
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener::onGetSuggestions(const std::vector< ::android::view::textservice::SuggestionsInfo>& arg0) const {
    if (!::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener::_class) ::android::view::textservice::SpellCheckerSession_SpellCheckerSessionListener::_class = java::fetch_class("android/view/textservice/SpellCheckerSession$SpellCheckerSessionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetSuggestions", "([Landroid/view/textservice/SuggestionsInfo;)V");
    unsigned arg0s = arg0.size();
    if (!::android::view::textservice::SuggestionsInfo::_class) ::android::view::textservice::SuggestionsInfo::_class = java::fetch_class("android/view/textservice/SuggestionsInfo");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::view::textservice::SuggestionsInfo::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::view::textservice::SuggestionsInfo& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::TextInfo::TextInfo(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::TextInfo::TextInfo(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::view::textservice::TextInfo::TextInfo(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::view::textservice::TextInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::view::textservice::TextInfo::getText() const {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::textservice::TextInfo::getCookie() const {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookie", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::textservice::TextInfo::getSequence() const {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSequence", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::view::textservice::TextInfo::describeContents() const {
    if (!::android::view::textservice::TextInfo::_class) ::android::view::textservice::TextInfo::_class = java::fetch_class("android/view/textservice/TextInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::view::textservice::SpellCheckerInfo::getId() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::ComponentName android::view::textservice::SpellCheckerInfo::getComponent() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getComponent", "()Landroid/content/ComponentName;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::ComponentName _ret(ret);
    return _ret;
}

::java::lang::String android::view::textservice::SpellCheckerInfo::getPackageName() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackageName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::view::textservice::SpellCheckerInfo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::view::textservice::SpellCheckerInfo::loadLabel(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadLabel", "(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::graphics::drawable::Drawable android::view::textservice::SpellCheckerInfo::loadIcon(const ::android::content::pm::PackageManager& arg0) const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadIcon", "(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::android::content::pm::ServiceInfo android::view::textservice::SpellCheckerInfo::getServiceInfo() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getServiceInfo", "()Landroid/content/pm/ServiceInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::pm::ServiceInfo _ret(ret);
    return _ret;
}

::java::lang::String android::view::textservice::SpellCheckerInfo::getSettingsActivity() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettingsActivity", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::view::textservice::SpellCheckerInfo::getSubtypeCount() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::textservice::SpellCheckerSubtype android::view::textservice::SpellCheckerInfo::getSubtypeAt(int32_t arg0) const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubtypeAt", "(I)Landroid/view/textservice/SpellCheckerSubtype;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::textservice::SpellCheckerSubtype _ret(ret);
    return _ret;
}

int32_t android::view::textservice::SpellCheckerInfo::describeContents() const {
    if (!::android::view::textservice::SpellCheckerInfo::_class) ::android::view::textservice::SpellCheckerInfo::_class = java::fetch_class("android/view/textservice/SpellCheckerInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

