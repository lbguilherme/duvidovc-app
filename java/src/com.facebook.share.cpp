#include "java-core.hpp"
#include <memory>
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.share.ShareApi.hpp"
#include "com.facebook.share.ShareBuilder.hpp"
#include "com.facebook.share.Sharer.hpp"
#include "com.facebook.share.model.ShareContent.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass com::facebook::share::ShareApi::_class = nullptr;
jclass com::facebook::share::ShareBuilder::_class = nullptr;
jclass com::facebook::share::Sharer_Result::_class = nullptr;
jclass com::facebook::share::Sharer::_class = nullptr;

void com::facebook::share::ShareApi::share(const ::com::facebook::share::model::ShareContent& arg0, const ::com::facebook::FacebookCallback& arg1){
    if (!::com::facebook::share::ShareApi::_class) ::com::facebook::share::ShareApi::_class = java::fetch_class("com/facebook/share/ShareApi");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "share", "(Lcom/facebook/share/model/ShareContent;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::ShareApi::ShareApi(const ::com::facebook::share::model::ShareContent& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::ShareApi::_class) ::com::facebook::share::ShareApi::_class = java::fetch_class("com/facebook/share/ShareApi");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareContent com::facebook::share::ShareApi::getShareContent() const {
    if (!::com::facebook::share::ShareApi::_class) ::com::facebook::share::ShareApi::_class = java::fetch_class("com/facebook/share/ShareApi");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShareContent", "()Lcom/facebook/share/model/ShareContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareContent _ret(ret);
    return _ret;
}

bool com::facebook::share::ShareApi::canShare() const {
    if (!::com::facebook::share::ShareApi::_class) ::com::facebook::share::ShareApi::_class = java::fetch_class("com/facebook/share/ShareApi");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShare", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::ShareApi::share(const ::com::facebook::FacebookCallback& arg0) const {
    if (!::com::facebook::share::ShareApi::_class) ::com::facebook::share::ShareApi::_class = java::fetch_class("com/facebook/share/ShareApi");
    static jmethodID mid = java::jni->GetMethodID(_class, "share", "(Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object com::facebook::share::ShareBuilder::build() const {
    if (!::com::facebook::share::ShareBuilder::_class) ::com::facebook::share::ShareBuilder::_class = java::fetch_class("com/facebook/share/ShareBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::Sharer_Result::Sharer_Result(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::Sharer_Result::_class) ::com::facebook::share::Sharer_Result::_class = java::fetch_class("com/facebook/share/Sharer$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::share::Sharer_Result::getPostId() const {
    if (!::com::facebook::share::Sharer_Result::_class) ::com::facebook::share::Sharer_Result::_class = java::fetch_class("com/facebook/share/Sharer$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPostId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::share::Sharer::getShouldFailOnDataError() const {
    if (!::com::facebook::share::Sharer::_class) ::com::facebook::share::Sharer::_class = java::fetch_class("com/facebook/share/Sharer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShouldFailOnDataError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::Sharer::setShouldFailOnDataError(bool arg0) const {
    if (!::com::facebook::share::Sharer::_class) ::com::facebook::share::Sharer::_class = java::fetch_class("com/facebook/share/Sharer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShouldFailOnDataError", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

