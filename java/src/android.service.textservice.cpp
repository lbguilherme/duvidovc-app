#include "java-core.hpp"
#include <memory>
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.service.textservice.SpellCheckerService.hpp"
#include "android.view.textservice.SuggestionsInfo.hpp"
#include "android.view.textservice.TextInfo.hpp"
#include "java.lang.String.hpp"

jclass android::service::textservice::SpellCheckerService::_class = nullptr;
jclass android::service::textservice::SpellCheckerService_Session::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::service::textservice::SpellCheckerService::SpellCheckerService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::service::textservice::SpellCheckerService::_class) ::android::service::textservice::SpellCheckerService::_class = java::fetch_class("android/service/textservice/SpellCheckerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::IBinder android::service::textservice::SpellCheckerService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::service::textservice::SpellCheckerService::_class) ::android::service::textservice::SpellCheckerService::_class = java::fetch_class("android/service/textservice/SpellCheckerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::service::textservice::SpellCheckerService_Session android::service::textservice::SpellCheckerService::createSession() const {
    if (!::android::service::textservice::SpellCheckerService::_class) ::android::service::textservice::SpellCheckerService::_class = java::fetch_class("android/service/textservice/SpellCheckerService");
    static jmethodID mid = java::jni->GetMethodID(_class, "createSession", "()Landroid/service/textservice/SpellCheckerService$Session;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::service::textservice::SpellCheckerService_Session _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::service::textservice::SpellCheckerService_Session::SpellCheckerService_Session() : ::java::lang::Object((jobject)0) {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::service::textservice::SpellCheckerService_Session::onCreate() const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::textservice::SuggestionsInfo android::service::textservice::SpellCheckerService_Session::onGetSuggestions(const ::android::view::textservice::TextInfo& arg0, int32_t arg1) const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetSuggestions", "(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::textservice::SuggestionsInfo _ret(ret);
    return _ret;
}

std::vector< ::android::view::textservice::SuggestionsInfo> android::service::textservice::SpellCheckerService_Session::onGetSuggestionsMultiple(const std::vector< ::android::view::textservice::TextInfo>& arg0, int32_t arg1, bool arg2) const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetSuggestionsMultiple", "([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;");
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
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::view::textservice::SuggestionsInfo> _ret(rets, ::android::view::textservice::SuggestionsInfo((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::view::textservice::SuggestionsInfo retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::service::textservice::SpellCheckerService_Session::onCancel() const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::service::textservice::SpellCheckerService_Session::onClose() const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String android::service::textservice::SpellCheckerService_Session::getLocale() const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle android::service::textservice::SpellCheckerService_Session::getBundle() const {
    if (!::android::service::textservice::SpellCheckerService_Session::_class) ::android::service::textservice::SpellCheckerService_Session::_class = java::fetch_class("android/service/textservice/SpellCheckerService$Session");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

