#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.os.Bundle.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.util.AttributeSet.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.FacebookException.hpp"
#include "com.facebook.internal.AppCall.hpp"
#include "com.facebook.share.internal.LikeActionController.hpp"
#include "com.facebook.share.model.AppGroupCreationContent.hpp"
#include "com.facebook.share.model.AppInviteContent.hpp"
#include "com.facebook.share.model.GameRequestContent.hpp"
#include "com.facebook.share.model.ShareContent.hpp"
#include "com.facebook.share.widget.AppInviteDialog.hpp"
#include "com.facebook.share.widget.CreateAppGroupDialog.hpp"
#include "com.facebook.share.widget.GameRequestDialog.hpp"
#include "com.facebook.share.widget.JoinAppGroupDialog.hpp"
#include "com.facebook.share.widget.LikeView.hpp"
#include "com.facebook.share.widget.MessageDialog.hpp"
#include "com.facebook.share.widget.SendButton.hpp"
#include "com.facebook.share.widget.ShareButton.hpp"
#include "com.facebook.share.widget.ShareButtonBase.hpp"
#include "com.facebook.share.widget.ShareDialog.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass com::facebook::share::widget::AppInviteDialog_NativeHandler::_class = nullptr;
jclass com::facebook::share::widget::AppInviteDialog_Result::_class = nullptr;
jclass com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class = nullptr;
jclass com::facebook::share::widget::AppInviteDialog::_class = nullptr;
jclass com::facebook::share::widget::CreateAppGroupDialog_Result::_class = nullptr;
jclass com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class = nullptr;
jclass com::facebook::share::widget::CreateAppGroupDialog::_class = nullptr;
jclass com::facebook::share::widget::GameRequestDialog_Result::_class = nullptr;
jclass com::facebook::share::widget::GameRequestDialog_WebHandler::_class = nullptr;
jclass com::facebook::share::widget::GameRequestDialog::_class = nullptr;
jclass com::facebook::share::widget::JoinAppGroupDialog_Result::_class = nullptr;
jclass com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class = nullptr;
jclass com::facebook::share::widget::JoinAppGroupDialog::_class = nullptr;
jclass com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class = nullptr;
jclass com::facebook::share::widget::LikeView_HorizontalAlignment::_class = nullptr;
jclass com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::_class = nullptr;
jclass com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver::_class = nullptr;
jclass com::facebook::share::widget::LikeView_ObjectType::_class = nullptr;
jclass com::facebook::share::widget::LikeView_OnErrorListener::_class = nullptr;
jclass com::facebook::share::widget::LikeView_Style::_class = nullptr;
jclass com::facebook::share::widget::LikeView::_class = nullptr;
jclass com::facebook::share::widget::MessageDialog_NativeHandler::_class = nullptr;
jclass com::facebook::share::widget::MessageDialog::_class = nullptr;
jclass com::facebook::share::widget::SendButton::_class = nullptr;
jclass com::facebook::share::widget::ShareButton::_class = nullptr;
jclass com::facebook::share::widget::ShareButtonBase::_class = nullptr;
jclass com::facebook::share::widget::ShareDialog_FeedHandler::_class = nullptr;
jclass com::facebook::share::widget::ShareDialog_Mode::_class = nullptr;
jclass com::facebook::share::widget::ShareDialog_NativeHandler::_class = nullptr;
jclass com::facebook::share::widget::ShareDialog_WebShareHandler::_class = nullptr;
jclass com::facebook::share::widget::ShareDialog::_class = nullptr;

bool com::facebook::share::widget::AppInviteDialog_NativeHandler::canShow(const ::com::facebook::share::model::AppInviteContent& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class) ::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/AppInviteContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::AppInviteDialog_NativeHandler::createAppCall(const ::com::facebook::share::model::AppInviteContent& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class) ::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/AppInviteContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::AppInviteDialog_NativeHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class) ::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::AppInviteDialog_NativeHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class) ::com::facebook::share::widget::AppInviteDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::AppInviteDialog_Result::AppInviteDialog_Result(const ::android::os::Bundle& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::widget::AppInviteDialog_Result::_class) ::com::facebook::share::widget::AppInviteDialog_Result::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::widget::AppInviteDialog_Result::getData() const {
    if (!::com::facebook::share::widget::AppInviteDialog_Result::_class) ::com::facebook::share::widget::AppInviteDialog_Result::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::canShow(const ::com::facebook::share::model::AppInviteContent& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class) ::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/AppInviteContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::createAppCall(const ::com::facebook::share::model::AppInviteContent& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class) ::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/AppInviteContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class) ::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class) ::com::facebook::share::widget::AppInviteDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::AppInviteDialog::canShow(){
    if (!::com::facebook::share::widget::AppInviteDialog::_class) ::com::facebook::share::widget::AppInviteDialog::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::share::widget::AppInviteDialog::show(const ::android::app::Activity& arg0, const ::com::facebook::share::model::AppInviteContent& arg1){
    if (!::com::facebook::share::widget::AppInviteDialog::_class) ::com::facebook::share::widget::AppInviteDialog::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Lcom/facebook/share/model/AppInviteContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::AppInviteDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::share::model::AppInviteContent& arg1){
    if (!::com::facebook::share::widget::AppInviteDialog::_class) ::com::facebook::share::widget::AppInviteDialog::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Lcom/facebook/share/model/AppInviteContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::AppInviteDialog::AppInviteDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::AppInviteDialog::_class) ::com::facebook::share::widget::AppInviteDialog::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::AppInviteDialog::AppInviteDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::AppInviteDialog::_class) ::com::facebook::share::widget::AppInviteDialog::_class = java::fetch_class("com/facebook/share/widget/AppInviteDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::share::widget::CreateAppGroupDialog_Result::getId() const {
    if (!::com::facebook::share::widget::CreateAppGroupDialog_Result::_class) ::com::facebook::share::widget::CreateAppGroupDialog_Result::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::CreateAppGroupDialog_WebHandler::canShow(const ::com::facebook::share::model::AppGroupCreationContent& arg0) const {
    if (!::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/AppGroupCreationContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::CreateAppGroupDialog_WebHandler::createAppCall(const ::com::facebook::share::model::AppGroupCreationContent& arg0) const {
    if (!::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/AppGroupCreationContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::CreateAppGroupDialog_WebHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::CreateAppGroupDialog_WebHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::CreateAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::CreateAppGroupDialog::canShow(){
    if (!::com::facebook::share::widget::CreateAppGroupDialog::_class) ::com::facebook::share::widget::CreateAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::share::widget::CreateAppGroupDialog::show(const ::android::app::Activity& arg0, const ::com::facebook::share::model::AppGroupCreationContent& arg1){
    if (!::com::facebook::share::widget::CreateAppGroupDialog::_class) ::com::facebook::share::widget::CreateAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Lcom/facebook/share/model/AppGroupCreationContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::CreateAppGroupDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::share::model::AppGroupCreationContent& arg1){
    if (!::com::facebook::share::widget::CreateAppGroupDialog::_class) ::com::facebook::share::widget::CreateAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Lcom/facebook/share/model/AppGroupCreationContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::CreateAppGroupDialog::CreateAppGroupDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::CreateAppGroupDialog::_class) ::com::facebook::share::widget::CreateAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::CreateAppGroupDialog::CreateAppGroupDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::CreateAppGroupDialog::_class) ::com::facebook::share::widget::CreateAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/CreateAppGroupDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::share::widget::GameRequestDialog_Result::getRequestId() const {
    if (!::com::facebook::share::widget::GameRequestDialog_Result::_class) ::com::facebook::share::widget::GameRequestDialog_Result::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::GameRequestDialog_WebHandler::canShow(const ::com::facebook::share::model::GameRequestContent& arg0) const {
    if (!::com::facebook::share::widget::GameRequestDialog_WebHandler::_class) ::com::facebook::share::widget::GameRequestDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/GameRequestContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::GameRequestDialog_WebHandler::createAppCall(const ::com::facebook::share::model::GameRequestContent& arg0) const {
    if (!::com::facebook::share::widget::GameRequestDialog_WebHandler::_class) ::com::facebook::share::widget::GameRequestDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/GameRequestContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::GameRequestDialog_WebHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::GameRequestDialog_WebHandler::_class) ::com::facebook::share::widget::GameRequestDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::GameRequestDialog_WebHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::GameRequestDialog_WebHandler::_class) ::com::facebook::share::widget::GameRequestDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::GameRequestDialog::canShow(){
    if (!::com::facebook::share::widget::GameRequestDialog::_class) ::com::facebook::share::widget::GameRequestDialog::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::share::widget::GameRequestDialog::show(const ::android::app::Activity& arg0, const ::com::facebook::share::model::GameRequestContent& arg1){
    if (!::com::facebook::share::widget::GameRequestDialog::_class) ::com::facebook::share::widget::GameRequestDialog::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Lcom/facebook/share/model/GameRequestContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::GameRequestDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::share::model::GameRequestContent& arg1){
    if (!::com::facebook::share::widget::GameRequestDialog::_class) ::com::facebook::share::widget::GameRequestDialog::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Lcom/facebook/share/model/GameRequestContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::GameRequestDialog::GameRequestDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::GameRequestDialog::_class) ::com::facebook::share::widget::GameRequestDialog::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::GameRequestDialog::GameRequestDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::GameRequestDialog::_class) ::com::facebook::share::widget::GameRequestDialog::_class = java::fetch_class("com/facebook/share/widget/GameRequestDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::widget::JoinAppGroupDialog_Result::getData() const {
    if (!::com::facebook::share::widget::JoinAppGroupDialog_Result::_class) ::com::facebook::share::widget::JoinAppGroupDialog_Result::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::JoinAppGroupDialog_WebHandler::canShow(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::JoinAppGroupDialog_WebHandler::createAppCall(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/String;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::JoinAppGroupDialog_WebHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::JoinAppGroupDialog_WebHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class) ::com::facebook::share::widget::JoinAppGroupDialog_WebHandler::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog$WebHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::JoinAppGroupDialog::canShow(){
    if (!::com::facebook::share::widget::JoinAppGroupDialog::_class) ::com::facebook::share::widget::JoinAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::share::widget::JoinAppGroupDialog::show(const ::android::app::Activity& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::share::widget::JoinAppGroupDialog::_class) ::com::facebook::share::widget::JoinAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::JoinAppGroupDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::share::widget::JoinAppGroupDialog::_class) ::com::facebook::share::widget::JoinAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::JoinAppGroupDialog::JoinAppGroupDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::JoinAppGroupDialog::_class) ::com::facebook::share::widget::JoinAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::JoinAppGroupDialog::JoinAppGroupDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0) {
    if (!::com::facebook::share::widget::JoinAppGroupDialog::_class) ::com::facebook::share::widget::JoinAppGroupDialog::_class = java::fetch_class("com/facebook/share/widget/JoinAppGroupDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition> com::facebook::share::widget::LikeView_AuxiliaryViewPosition::values(){
    if (!::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class) ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class = java::fetch_class("com/facebook/share/widget/LikeView$AuxiliaryViewPosition");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/widget/LikeView$AuxiliaryViewPosition;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition> _ret(rets, ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::widget::LikeView_AuxiliaryViewPosition com::facebook::share::widget::LikeView_AuxiliaryViewPosition::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class) ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class = java::fetch_class("com/facebook/share/widget/LikeView$AuxiliaryViewPosition");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/widget/LikeView$AuxiliaryViewPosition;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::widget::LikeView_AuxiliaryViewPosition::toString() const {
    if (!::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class) ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition::_class = java::fetch_class("com/facebook/share/widget/LikeView$AuxiliaryViewPosition");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::share::widget::LikeView_HorizontalAlignment> com::facebook::share::widget::LikeView_HorizontalAlignment::values(){
    if (!::com::facebook::share::widget::LikeView_HorizontalAlignment::_class) ::com::facebook::share::widget::LikeView_HorizontalAlignment::_class = java::fetch_class("com/facebook/share/widget/LikeView$HorizontalAlignment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/widget/LikeView$HorizontalAlignment;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::widget::LikeView_HorizontalAlignment> _ret(rets, ::com::facebook::share::widget::LikeView_HorizontalAlignment((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::widget::LikeView_HorizontalAlignment retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::widget::LikeView_HorizontalAlignment com::facebook::share::widget::LikeView_HorizontalAlignment::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::widget::LikeView_HorizontalAlignment::_class) ::com::facebook::share::widget::LikeView_HorizontalAlignment::_class = java::fetch_class("com/facebook/share/widget/LikeView$HorizontalAlignment");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/widget/LikeView$HorizontalAlignment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::LikeView_HorizontalAlignment _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::widget::LikeView_HorizontalAlignment::toString() const {
    if (!::com::facebook::share::widget::LikeView_HorizontalAlignment::_class) ::com::facebook::share::widget::LikeView_HorizontalAlignment::_class = java::fetch_class("com/facebook/share/widget/LikeView$HorizontalAlignment");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::cancel() const {
    if (!::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::_class) ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::_class = java::fetch_class("com/facebook/share/widget/LikeView$LikeActionControllerCreationCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::onComplete(const ::com::facebook::share::internal::LikeActionController& arg0, const ::com::facebook::FacebookException& arg1) const {
    if (!::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::_class) ::com::facebook::share::widget::LikeView_LikeActionControllerCreationCallback::_class = java::fetch_class("com/facebook/share/widget/LikeView$LikeActionControllerCreationCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "(Lcom/facebook/share/internal/LikeActionController;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver::_class) ::com::facebook::share::widget::LikeView_LikeControllerBroadcastReceiver::_class = java::fetch_class("com/facebook/share/widget/LikeView$LikeControllerBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::share::widget::LikeView_ObjectType> com::facebook::share::widget::LikeView_ObjectType::values(){
    if (!::com::facebook::share::widget::LikeView_ObjectType::_class) ::com::facebook::share::widget::LikeView_ObjectType::_class = java::fetch_class("com/facebook/share/widget/LikeView$ObjectType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/widget/LikeView$ObjectType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::widget::LikeView_ObjectType> _ret(rets, ::com::facebook::share::widget::LikeView_ObjectType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::widget::LikeView_ObjectType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::widget::LikeView_ObjectType com::facebook::share::widget::LikeView_ObjectType::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::widget::LikeView_ObjectType::_class) ::com::facebook::share::widget::LikeView_ObjectType::_class = java::fetch_class("com/facebook/share/widget/LikeView$ObjectType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/widget/LikeView$ObjectType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::LikeView_ObjectType _ret(ret);
    return _ret;
}

::com::facebook::share::widget::LikeView_ObjectType com::facebook::share::widget::LikeView_ObjectType::fromInt(int32_t arg0){
    if (!::com::facebook::share::widget::LikeView_ObjectType::_class) ::com::facebook::share::widget::LikeView_ObjectType::_class = java::fetch_class("com/facebook/share/widget/LikeView$ObjectType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromInt", "(I)Lcom/facebook/share/widget/LikeView$ObjectType;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::LikeView_ObjectType _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::widget::LikeView_ObjectType::toString() const {
    if (!::com::facebook::share::widget::LikeView_ObjectType::_class) ::com::facebook::share::widget::LikeView_ObjectType::_class = java::fetch_class("com/facebook/share/widget/LikeView$ObjectType");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::widget::LikeView_ObjectType::getValue() const {
    if (!::com::facebook::share::widget::LikeView_ObjectType::_class) ::com::facebook::share::widget::LikeView_ObjectType::_class = java::fetch_class("com/facebook/share/widget/LikeView$ObjectType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::widget::LikeView_OnErrorListener::onError(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::share::widget::LikeView_OnErrorListener::_class) ::com::facebook::share::widget::LikeView_OnErrorListener::_class = java::fetch_class("com/facebook/share/widget/LikeView$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::com::facebook::share::widget::LikeView_Style> com::facebook::share::widget::LikeView_Style::values(){
    if (!::com::facebook::share::widget::LikeView_Style::_class) ::com::facebook::share::widget::LikeView_Style::_class = java::fetch_class("com/facebook/share/widget/LikeView$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/widget/LikeView$Style;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::widget::LikeView_Style> _ret(rets, ::com::facebook::share::widget::LikeView_Style((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::widget::LikeView_Style retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::widget::LikeView_Style com::facebook::share::widget::LikeView_Style::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::widget::LikeView_Style::_class) ::com::facebook::share::widget::LikeView_Style::_class = java::fetch_class("com/facebook/share/widget/LikeView$Style");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/widget/LikeView$Style;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::LikeView_Style _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::widget::LikeView_Style::toString() const {
    if (!::com::facebook::share::widget::LikeView_Style::_class) ::com::facebook::share::widget::LikeView_Style::_class = java::fetch_class("com/facebook/share/widget/LikeView$Style");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::LikeView::LikeView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::LikeView::LikeView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void com::facebook::share::widget::LikeView::setObjectIdAndType(const ::java::lang::String& arg0, const ::com::facebook::share::widget::LikeView_ObjectType& arg1) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectIdAndType", "(Ljava/lang/String;Lcom/facebook/share/widget/LikeView$ObjectType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::widget::LikeView::setLikeViewStyle(const ::com::facebook::share::widget::LikeView_Style& arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLikeViewStyle", "(Lcom/facebook/share/widget/LikeView$Style;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::LikeView::setAuxiliaryViewPosition(const ::com::facebook::share::widget::LikeView_AuxiliaryViewPosition& arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAuxiliaryViewPosition", "(Lcom/facebook/share/widget/LikeView$AuxiliaryViewPosition;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::LikeView::setHorizontalAlignment(const ::com::facebook::share::widget::LikeView_HorizontalAlignment& arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalAlignment", "(Lcom/facebook/share/widget/LikeView$HorizontalAlignment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::LikeView::setForegroundColor(int32_t arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setForegroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::LikeView::setOnErrorListener(const ::com::facebook::share::widget::LikeView_OnErrorListener& arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Lcom/facebook/share/widget/LikeView$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::share::widget::LikeView_OnErrorListener com::facebook::share::widget::LikeView::getOnErrorListener() const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnErrorListener", "()Lcom/facebook/share/widget/LikeView$OnErrorListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::widget::LikeView_OnErrorListener _ret(ret);
    return _ret;
}

void com::facebook::share::widget::LikeView::setFragment(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFragment", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::LikeView::setEnabled(bool arg0) const {
    if (!::com::facebook::share::widget::LikeView::_class) ::com::facebook::share::widget::LikeView::_class = java::fetch_class("com/facebook/share/widget/LikeView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::MessageDialog_NativeHandler::canShow(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::MessageDialog_NativeHandler::_class) ::com::facebook::share::widget::MessageDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/MessageDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/ShareContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::MessageDialog_NativeHandler::createAppCall(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::MessageDialog_NativeHandler::_class) ::com::facebook::share::widget::MessageDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/MessageDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::MessageDialog_NativeHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::MessageDialog_NativeHandler::_class) ::com::facebook::share::widget::MessageDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/MessageDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::MessageDialog_NativeHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::MessageDialog_NativeHandler::_class) ::com::facebook::share::widget::MessageDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/MessageDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::MessageDialog::show(const ::android::app::Activity& arg0, const ::com::facebook::share::model::ShareContent& arg1){
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::MessageDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::share::model::ShareContent& arg1){
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::share::widget::MessageDialog::canShow(const ::java::lang::Class& arg0){
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::MessageDialog::MessageDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::MessageDialog::MessageDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool com::facebook::share::widget::MessageDialog::getShouldFailOnDataError() const {
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShouldFailOnDataError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::widget::MessageDialog::setShouldFailOnDataError(bool arg0) const {
    if (!::com::facebook::share::widget::MessageDialog::_class) ::com::facebook::share::widget::MessageDialog::_class = java::fetch_class("com/facebook/share/widget/MessageDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShouldFailOnDataError", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::SendButton::SendButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::SendButton::_class) ::com::facebook::share::widget::SendButton::_class = java::fetch_class("com/facebook/share/widget/SendButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::SendButton::SendButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::SendButton::_class) ::com::facebook::share::widget::SendButton::_class = java::fetch_class("com/facebook/share/widget/SendButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::SendButton::SendButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::SendButton::_class) ::com::facebook::share::widget::SendButton::_class = java::fetch_class("com/facebook/share/widget/SendButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::ShareButton::ShareButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::ShareButton::_class) ::com::facebook::share::widget::ShareButton::_class = java::fetch_class("com/facebook/share/widget/ShareButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::ShareButton::ShareButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::ShareButton::_class) ::com::facebook::share::widget::ShareButton::_class = java::fetch_class("com/facebook/share/widget/ShareButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::ShareButton::ShareButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0), ::com::facebook::share::widget::ShareButtonBase((jobject)0) {
    if (!::com::facebook::share::widget::ShareButton::_class) ::com::facebook::share::widget::ShareButton::_class = java::fetch_class("com/facebook/share/widget/ShareButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareContent com::facebook::share::widget::ShareButtonBase::getShareContent() const {
    if (!::com::facebook::share::widget::ShareButtonBase::_class) ::com::facebook::share::widget::ShareButtonBase::_class = java::fetch_class("com/facebook/share/widget/ShareButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShareContent", "()Lcom/facebook/share/model/ShareContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareContent _ret(ret);
    return _ret;
}

void com::facebook::share::widget::ShareButtonBase::setShareContent(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareButtonBase::_class) ::com::facebook::share::widget::ShareButtonBase::_class = java::fetch_class("com/facebook/share/widget/ShareButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShareContent", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::ShareButtonBase::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1) const {
    if (!::com::facebook::share::widget::ShareButtonBase::_class) ::com::facebook::share::widget::ShareButtonBase::_class = java::fetch_class("com/facebook/share/widget/ShareButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::widget::ShareButtonBase::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1, int32_t arg2) const {
    if (!::com::facebook::share::widget::ShareButtonBase::_class) ::com::facebook::share::widget::ShareButtonBase::_class = java::fetch_class("com/facebook/share/widget/ShareButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object com::facebook::share::widget::ShareDialog_FeedHandler::getMode() const {
    if (!::com::facebook::share::widget::ShareDialog_FeedHandler::_class) ::com::facebook::share::widget::ShareDialog_FeedHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$FeedHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_FeedHandler::canShow(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_FeedHandler::_class) ::com::facebook::share::widget::ShareDialog_FeedHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$FeedHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/ShareContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_FeedHandler::createAppCall(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_FeedHandler::_class) ::com::facebook::share::widget::ShareDialog_FeedHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$FeedHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_FeedHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_FeedHandler::_class) ::com::facebook::share::widget::ShareDialog_FeedHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$FeedHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_FeedHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_FeedHandler::_class) ::com::facebook::share::widget::ShareDialog_FeedHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$FeedHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::com::facebook::share::widget::ShareDialog_Mode> com::facebook::share::widget::ShareDialog_Mode::values(){
    if (!::com::facebook::share::widget::ShareDialog_Mode::_class) ::com::facebook::share::widget::ShareDialog_Mode::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/widget/ShareDialog$Mode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::widget::ShareDialog_Mode> _ret(rets, ::com::facebook::share::widget::ShareDialog_Mode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::widget::ShareDialog_Mode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::widget::ShareDialog_Mode com::facebook::share::widget::ShareDialog_Mode::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::widget::ShareDialog_Mode::_class) ::com::facebook::share::widget::ShareDialog_Mode::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/widget/ShareDialog$Mode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::widget::ShareDialog_Mode _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::share::widget::ShareDialog_NativeHandler::getMode() const {
    if (!::com::facebook::share::widget::ShareDialog_NativeHandler::_class) ::com::facebook::share::widget::ShareDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_NativeHandler::canShow(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_NativeHandler::_class) ::com::facebook::share::widget::ShareDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/ShareContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_NativeHandler::createAppCall(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_NativeHandler::_class) ::com::facebook::share::widget::ShareDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_NativeHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_NativeHandler::_class) ::com::facebook::share::widget::ShareDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_NativeHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_NativeHandler::_class) ::com::facebook::share::widget::ShareDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object com::facebook::share::widget::ShareDialog_WebShareHandler::getMode() const {
    if (!::com::facebook::share::widget::ShareDialog_WebShareHandler::_class) ::com::facebook::share::widget::ShareDialog_WebShareHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$WebShareHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_WebShareHandler::canShow(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_WebShareHandler::_class) ::com::facebook::share::widget::ShareDialog_WebShareHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$WebShareHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/ShareContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_WebShareHandler::createAppCall(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_WebShareHandler::_class) ::com::facebook::share::widget::ShareDialog_WebShareHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$WebShareHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::widget::ShareDialog_WebShareHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_WebShareHandler::_class) ::com::facebook::share::widget::ShareDialog_WebShareHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$WebShareHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::widget::ShareDialog_WebShareHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::widget::ShareDialog_WebShareHandler::_class) ::com::facebook::share::widget::ShareDialog_WebShareHandler::_class = java::fetch_class("com/facebook/share/widget/ShareDialog$WebShareHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::share::widget::ShareDialog::show(const ::android::app::Activity& arg0, const ::com::facebook::share::model::ShareContent& arg1){
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/app/Activity;Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::widget::ShareDialog::show(const ::android::support::v4::app::Fragment& arg0, const ::com::facebook::share::model::ShareContent& arg1){
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "show", "(Landroid/support/v4/app/Fragment;Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::share::widget::ShareDialog::canShow(const ::java::lang::Class& arg0){
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShow", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::ShareDialog::ShareDialog(const ::android::app::Activity& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::widget::ShareDialog::ShareDialog(const ::android::support::v4::app::Fragment& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookDialog((jobject)0), ::com::facebook::internal::FacebookDialogBase((jobject)0), ::com::facebook::share::Sharer((jobject)0) {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool com::facebook::share::widget::ShareDialog::getShouldFailOnDataError() const {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShouldFailOnDataError", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::widget::ShareDialog::setShouldFailOnDataError(bool arg0) const {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShouldFailOnDataError", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::share::widget::ShareDialog::canShow(const ::com::facebook::share::model::ShareContent& arg0, const ::com::facebook::share::widget::ShareDialog_Mode& arg1) const {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/model/ShareContent;Lcom/facebook/share/widget/ShareDialog$Mode;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::widget::ShareDialog::show(const ::com::facebook::share::model::ShareContent& arg0, const ::com::facebook::share::widget::ShareDialog_Mode& arg1) const {
    if (!::com::facebook::share::widget::ShareDialog::_class) ::com::facebook::share::widget::ShareDialog::_class = java::fetch_class("com/facebook/share/widget/ShareDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Lcom/facebook/share/model/ShareContent;Lcom/facebook/share/widget/ShareDialog$Mode;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

