#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.util.Pair.hpp"
#include "com.facebook.AccessToken.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.FacebookException.hpp"
#include "com.facebook.GraphRequest.hpp"
#include "com.facebook.GraphResponse.hpp"
#include "com.facebook.internal.AppCall.hpp"
#include "com.facebook.share.internal.AppInviteDialogFeature.hpp"
#include "com.facebook.share.internal.GameRequestValidation.hpp"
#include "com.facebook.share.internal.LegacyNativeDialogParameters.hpp"
#include "com.facebook.share.internal.LikeActionController.hpp"
#include "com.facebook.share.internal.LikeBoxCountView.hpp"
#include "com.facebook.share.internal.LikeButton.hpp"
#include "com.facebook.share.internal.LikeContent.hpp"
#include "com.facebook.share.internal.LikeDialog.hpp"
#include "com.facebook.share.internal.LikeDialogFeature.hpp"
#include "com.facebook.share.internal.LikeStatusClient.hpp"
#include "com.facebook.share.internal.MessageDialogFeature.hpp"
#include "com.facebook.share.internal.NativeDialogParameters.hpp"
#include "com.facebook.share.internal.OpenGraphActionDialogFeature.hpp"
#include "com.facebook.share.internal.OpenGraphJSONUtility.hpp"
#include "com.facebook.share.internal.OpenGraphMessageDialogFeature.hpp"
#include "com.facebook.share.internal.ResultProcessor.hpp"
#include "com.facebook.share.internal.ShareConstants.hpp"
#include "com.facebook.share.internal.ShareContentValidation.hpp"
#include "com.facebook.share.internal.ShareDialogFeature.hpp"
#include "com.facebook.share.internal.ShareInternalUtility.hpp"
#include "com.facebook.share.internal.VideoUploader.hpp"
#include "com.facebook.share.internal.WebDialogParameters.hpp"
#include "com.facebook.share.model.AppGroupCreationContent.hpp"
#include "com.facebook.share.model.GameRequestContent.hpp"
#include "com.facebook.share.model.ShareContent.hpp"
#include "com.facebook.share.model.ShareLinkContent.hpp"
#include "com.facebook.share.model.ShareModel.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"
#include "com.facebook.share.model.ShareOpenGraphAction.hpp"
#include "com.facebook.share.model.ShareOpenGraphContent.hpp"
#include "com.facebook.share.model.ShareOpenGraphObject.hpp"
#include "com.facebook.share.model.ShareOpenGraphValueContainer.hpp"
#include "com.facebook.share.model.SharePhoto.hpp"
#include "com.facebook.share.model.SharePhotoContent.hpp"
#include "com.facebook.share.model.ShareVideo.hpp"
#include "com.facebook.share.model.ShareVideoContent.hpp"
#include "com.facebook.share.widget.LikeView.hpp"
#include "java.io.File.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.List.hpp"
#include "java.util.UUID.hpp"
#include "org.json.JSONArray.hpp"
#include "org.json.JSONObject.hpp"

jclass com::facebook::share::internal::AppInviteDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::GameRequestValidation::_class = nullptr;
jclass com::facebook::share::internal::LegacyNativeDialogParameters::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_AbstractRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_CreateLikeActionControllerWorkItem::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_CreationCallback::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_GetEngagementRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_GetOGObjectIdRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_GetOGObjectLikesRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_GetPageIdRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_MRUCacheWorkItem::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_PublishLikeRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_PublishUnlikeRequestWrapper::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_RequestCompletionCallback::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem::_class = nullptr;
jclass com::facebook::share::internal::LikeActionController::_class = nullptr;
jclass com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::_class = nullptr;
jclass com::facebook::share::internal::LikeBoxCountView::_class = nullptr;
jclass com::facebook::share::internal::LikeButton::_class = nullptr;
jclass com::facebook::share::internal::LikeContent_Builder::_class = nullptr;
jclass com::facebook::share::internal::LikeContent::_class = nullptr;
jclass com::facebook::share::internal::LikeDialog_NativeHandler::_class = nullptr;
jclass com::facebook::share::internal::LikeDialog_Result::_class = nullptr;
jclass com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class = nullptr;
jclass com::facebook::share::internal::LikeDialog::_class = nullptr;
jclass com::facebook::share::internal::LikeDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::LikeStatusClient::_class = nullptr;
jclass com::facebook::share::internal::MessageDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::NativeDialogParameters::_class = nullptr;
jclass com::facebook::share::internal::OpenGraphActionDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor::_class = nullptr;
jclass com::facebook::share::internal::OpenGraphJSONUtility::_class = nullptr;
jclass com::facebook::share::internal::OpenGraphMessageDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::ResultProcessor::_class = nullptr;
jclass com::facebook::share::internal::ShareConstants::_class = nullptr;
jclass com::facebook::share::internal::ShareContentValidation_ApiValidator::_class = nullptr;
jclass com::facebook::share::internal::ShareContentValidation_Validator::_class = nullptr;
jclass com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class = nullptr;
jclass com::facebook::share::internal::ShareContentValidation::_class = nullptr;
jclass com::facebook::share::internal::ShareDialogFeature::_class = nullptr;
jclass com::facebook::share::internal::ShareInternalUtility::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader_StartUploadWorkItem::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader_UploadContext::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader_UploadWorkItemBase::_class = nullptr;
jclass com::facebook::share::internal::VideoUploader::_class = nullptr;
jclass com::facebook::share::internal::WebDialogParameters::_class = nullptr;

std::vector< ::com::facebook::share::internal::AppInviteDialogFeature> com::facebook::share::internal::AppInviteDialogFeature::values(){
    if (!::com::facebook::share::internal::AppInviteDialogFeature::_class) ::com::facebook::share::internal::AppInviteDialogFeature::_class = java::fetch_class("com/facebook/share/internal/AppInviteDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/AppInviteDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::AppInviteDialogFeature> _ret(rets, ::com::facebook::share::internal::AppInviteDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::AppInviteDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::AppInviteDialogFeature com::facebook::share::internal::AppInviteDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::AppInviteDialogFeature::_class) ::com::facebook::share::internal::AppInviteDialogFeature::_class = java::fetch_class("com/facebook/share/internal/AppInviteDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/AppInviteDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::AppInviteDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::AppInviteDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::AppInviteDialogFeature::_class) ::com::facebook::share::internal::AppInviteDialogFeature::_class = java::fetch_class("com/facebook/share/internal/AppInviteDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::AppInviteDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::AppInviteDialogFeature::_class) ::com::facebook::share::internal::AppInviteDialogFeature::_class = java::fetch_class("com/facebook/share/internal/AppInviteDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::GameRequestValidation::GameRequestValidation() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::GameRequestValidation::_class) ::com::facebook::share::internal::GameRequestValidation::_class = java::fetch_class("com/facebook/share/internal/GameRequestValidation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::GameRequestValidation::validate(const ::com::facebook::share::model::GameRequestContent& arg0){
    if (!::com::facebook::share::internal::GameRequestValidation::_class) ::com::facebook::share::internal::GameRequestValidation::_class = java::fetch_class("com/facebook/share/internal/GameRequestValidation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validate", "(Lcom/facebook/share/model/GameRequestContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::LegacyNativeDialogParameters::LegacyNativeDialogParameters() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::LegacyNativeDialogParameters::_class) ::com::facebook::share::internal::LegacyNativeDialogParameters::_class = java::fetch_class("com/facebook/share/internal/LegacyNativeDialogParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::LegacyNativeDialogParameters::create(const ::java::util::UUID& arg0, const ::com::facebook::share::model::ShareContent& arg1, bool arg2){
    if (!::com::facebook::share::internal::LegacyNativeDialogParameters::_class) ::com::facebook::share::internal::LegacyNativeDialogParameters::_class = java::fetch_class("com/facebook/share/internal/LegacyNativeDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/util/UUID;Lcom/facebook/share/model/ShareContent;Z)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void com::facebook::share::internal::LikeActionController_CreateLikeActionControllerWorkItem::run() const {
    if (!::com::facebook::share::internal::LikeActionController_CreateLikeActionControllerWorkItem::_class) ::com::facebook::share::internal::LikeActionController_CreateLikeActionControllerWorkItem::_class = java::fetch_class("com/facebook/share/internal/LikeActionController$CreateLikeActionControllerWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::share::internal::LikeActionController_CreationCallback::onComplete(const ::com::facebook::share::internal::LikeActionController& arg0, const ::com::facebook::FacebookException& arg1) const {
    if (!::com::facebook::share::internal::LikeActionController_CreationCallback::_class) ::com::facebook::share::internal::LikeActionController_CreationCallback::_class = java::fetch_class("com/facebook/share/internal/LikeActionController$CreationCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "(Lcom/facebook/share/internal/LikeActionController;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::internal::LikeActionController_MRUCacheWorkItem::run() const {
    if (!::com::facebook::share::internal::LikeActionController_MRUCacheWorkItem::_class) ::com::facebook::share::internal::LikeActionController_MRUCacheWorkItem::_class = java::fetch_class("com/facebook/share/internal/LikeActionController$MRUCacheWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::share::internal::LikeActionController_RequestCompletionCallback::onComplete() const {
    if (!::com::facebook::share::internal::LikeActionController_RequestCompletionCallback::_class) ::com::facebook::share::internal::LikeActionController_RequestCompletionCallback::_class = java::fetch_class("com/facebook/share/internal/LikeActionController$RequestCompletionCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem::run() const {
    if (!::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem::_class) ::com::facebook::share::internal::LikeActionController_SerializeToDiskWorkItem::_class = java::fetch_class("com/facebook/share/internal/LikeActionController$SerializeToDiskWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::share::internal::LikeActionController::handleOnActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2){
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "handleOnActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::share::internal::LikeActionController::getControllerForObjectId(const ::java::lang::String& arg0, const ::com::facebook::share::widget::LikeView_ObjectType& arg1, const ::com::facebook::share::internal::LikeActionController_CreationCallback& arg2){
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getControllerForObjectId", "(Ljava/lang/String;Lcom/facebook/share/widget/LikeView$ObjectType;Lcom/facebook/share/internal/LikeActionController$CreationCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String com::facebook::share::internal::LikeActionController::getObjectId() const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::LikeActionController::getLikeCountString() const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLikeCountString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::LikeActionController::getSocialSentence() const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSocialSentence", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::share::internal::LikeActionController::isObjectLiked() const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isObjectLiked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool com::facebook::share::internal::LikeActionController::shouldEnableView() const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldEnableView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::internal::LikeActionController::toggleLike(const ::android::app::Activity& arg0, const ::android::support::v4::app::Fragment& arg1, const ::android::os::Bundle& arg2) const {
    if (!::com::facebook::share::internal::LikeActionController::_class) ::com::facebook::share::internal::LikeActionController::_class = java::fetch_class("com/facebook/share/internal/LikeActionController");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggleLike", "(Landroid/app/Activity;Landroid/support/v4/app/Fragment;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

std::vector< ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition> com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::values(){
    if (!::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::_class) ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::_class = java::fetch_class("com/facebook/share/internal/LikeBoxCountView$LikeBoxCountViewCaretPosition");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/LikeBoxCountView$LikeBoxCountViewCaretPosition;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition> _ret(rets, ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::_class) ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition::_class = java::fetch_class("com/facebook/share/internal/LikeBoxCountView$LikeBoxCountViewCaretPosition");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/LikeBoxCountView$LikeBoxCountViewCaretPosition;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::LikeBoxCountView::LikeBoxCountView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::com::facebook::share::internal::LikeBoxCountView::_class) ::com::facebook::share::internal::LikeBoxCountView::_class = java::fetch_class("com/facebook/share/internal/LikeBoxCountView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::LikeBoxCountView::setText(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::internal::LikeBoxCountView::_class) ::com::facebook::share::internal::LikeBoxCountView::_class = java::fetch_class("com/facebook/share/internal/LikeBoxCountView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::LikeBoxCountView::setCaretPosition(const ::com::facebook::share::internal::LikeBoxCountView_LikeBoxCountViewCaretPosition& arg0) const {
    if (!::com::facebook::share::internal::LikeBoxCountView::_class) ::com::facebook::share::internal::LikeBoxCountView::_class = java::fetch_class("com/facebook/share/internal/LikeBoxCountView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCaretPosition", "(Lcom/facebook/share/internal/LikeBoxCountView$LikeBoxCountViewCaretPosition;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::LikeButton::LikeButton(const ::android::content::Context& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::TextView((jobject)0), ::com::facebook::FacebookButtonBase((jobject)0) {
    if (!::com::facebook::share::internal::LikeButton::_class) ::com::facebook::share::internal::LikeButton::_class = java::fetch_class("com/facebook/share/internal/LikeButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::LikeButton::setSelected(bool arg0) const {
    if (!::com::facebook::share::internal::LikeButton::_class) ::com::facebook::share::internal::LikeButton::_class = java::fetch_class("com/facebook/share/internal/LikeButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::LikeContent_Builder::LikeContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::internal::LikeContent_Builder com::facebook::share::internal::LikeContent_Builder::setObjectId(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectId", "(Ljava/lang/String;)Lcom/facebook/share/internal/LikeContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::internal::LikeContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::internal::LikeContent_Builder com::facebook::share::internal::LikeContent_Builder::setObjectType(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectType", "(Ljava/lang/String;)Lcom/facebook/share/internal/LikeContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::internal::LikeContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::internal::LikeContent com::facebook::share::internal::LikeContent_Builder::build() const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/internal/LikeContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::internal::LikeContent _ret(ret);
    return _ret;
}

::com::facebook::share::internal::LikeContent_Builder com::facebook::share::internal::LikeContent_Builder::readFrom(const ::com::facebook::share::internal::LikeContent& arg0) const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/internal/LikeContent;)Lcom/facebook/share/internal/LikeContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::internal::LikeContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::internal::LikeContent_Builder com::facebook::share::internal::LikeContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/internal/LikeContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::internal::LikeContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::internal::LikeContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::internal::LikeContent_Builder::_class) ::com::facebook::share::internal::LikeContent_Builder::_class = java::fetch_class("com/facebook/share/internal/LikeContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::LikeContent::getObjectId() const {
    if (!::com::facebook::share::internal::LikeContent::_class) ::com::facebook::share::internal::LikeContent::_class = java::fetch_class("com/facebook/share/internal/LikeContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::LikeContent::getObjectType() const {
    if (!::com::facebook::share::internal::LikeContent::_class) ::com::facebook::share::internal::LikeContent::_class = java::fetch_class("com/facebook/share/internal/LikeContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::LikeContent::describeContents() const {
    if (!::com::facebook::share::internal::LikeContent::_class) ::com::facebook::share::internal::LikeContent::_class = java::fetch_class("com/facebook/share/internal/LikeContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::internal::LikeContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::internal::LikeContent::_class) ::com::facebook::share::internal::LikeContent::_class = java::fetch_class("com/facebook/share/internal/LikeContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool com::facebook::share::internal::LikeDialog_NativeHandler::canShow(const ::com::facebook::share::internal::LikeContent& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_NativeHandler::_class) ::com::facebook::share::internal::LikeDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/internal/LikeContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::internal::LikeDialog_NativeHandler::createAppCall(const ::com::facebook::share::internal::LikeContent& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_NativeHandler::_class) ::com::facebook::share::internal::LikeDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/internal/LikeContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::internal::LikeDialog_NativeHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_NativeHandler::_class) ::com::facebook::share::internal::LikeDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::internal::LikeDialog_NativeHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_NativeHandler::_class) ::com::facebook::share::internal::LikeDialog_NativeHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$NativeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::LikeDialog_Result::LikeDialog_Result() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::LikeDialog_Result::_class) ::com::facebook::share::internal::LikeDialog_Result::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$Result");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool com::facebook::share::internal::LikeDialog_WebFallbackHandler::canShow(const ::com::facebook::share::internal::LikeContent& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class) ::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Lcom/facebook/share/internal/LikeContent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::com::facebook::internal::AppCall com::facebook::share::internal::LikeDialog_WebFallbackHandler::createAppCall(const ::com::facebook::share::internal::LikeContent& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class) ::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Lcom/facebook/share/internal/LikeContent;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::share::internal::LikeDialog_WebFallbackHandler::createAppCall(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class) ::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAppCall", "(Ljava/lang/Object;)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

bool com::facebook::share::internal::LikeDialog_WebFallbackHandler::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class) ::com::facebook::share::internal::LikeDialog_WebFallbackHandler::_class = java::fetch_class("com/facebook/share/internal/LikeDialog$WebFallbackHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool com::facebook::share::internal::LikeDialog::canShowNativeDialog(){
    if (!::com::facebook::share::internal::LikeDialog::_class) ::com::facebook::share::internal::LikeDialog::_class = java::fetch_class("com/facebook/share/internal/LikeDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShowNativeDialog", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool com::facebook::share::internal::LikeDialog::canShowWebFallback(){
    if (!::com::facebook::share::internal::LikeDialog::_class) ::com::facebook::share::internal::LikeDialog::_class = java::fetch_class("com/facebook/share/internal/LikeDialog");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canShowWebFallback", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

std::vector< ::com::facebook::share::internal::LikeDialogFeature> com::facebook::share::internal::LikeDialogFeature::values(){
    if (!::com::facebook::share::internal::LikeDialogFeature::_class) ::com::facebook::share::internal::LikeDialogFeature::_class = java::fetch_class("com/facebook/share/internal/LikeDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/LikeDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::LikeDialogFeature> _ret(rets, ::com::facebook::share::internal::LikeDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::LikeDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::LikeDialogFeature com::facebook::share::internal::LikeDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::LikeDialogFeature::_class) ::com::facebook::share::internal::LikeDialogFeature::_class = java::fetch_class("com/facebook/share/internal/LikeDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/LikeDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::LikeDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::LikeDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::LikeDialogFeature::_class) ::com::facebook::share::internal::LikeDialogFeature::_class = java::fetch_class("com/facebook/share/internal/LikeDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::LikeDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::LikeDialogFeature::_class) ::com::facebook::share::internal::LikeDialogFeature::_class = java::fetch_class("com/facebook/share/internal/LikeDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::com::facebook::share::internal::MessageDialogFeature> com::facebook::share::internal::MessageDialogFeature::values(){
    if (!::com::facebook::share::internal::MessageDialogFeature::_class) ::com::facebook::share::internal::MessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/MessageDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/MessageDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::MessageDialogFeature> _ret(rets, ::com::facebook::share::internal::MessageDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::MessageDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::MessageDialogFeature com::facebook::share::internal::MessageDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::MessageDialogFeature::_class) ::com::facebook::share::internal::MessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/MessageDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/MessageDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::MessageDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::MessageDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::MessageDialogFeature::_class) ::com::facebook::share::internal::MessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/MessageDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::MessageDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::MessageDialogFeature::_class) ::com::facebook::share::internal::MessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/MessageDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::NativeDialogParameters::NativeDialogParameters() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::NativeDialogParameters::_class) ::com::facebook::share::internal::NativeDialogParameters::_class = java::fetch_class("com/facebook/share/internal/NativeDialogParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::NativeDialogParameters::create(const ::java::util::UUID& arg0, const ::com::facebook::share::model::ShareContent& arg1, bool arg2){
    if (!::com::facebook::share::internal::NativeDialogParameters::_class) ::com::facebook::share::internal::NativeDialogParameters::_class = java::fetch_class("com/facebook/share/internal/NativeDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Ljava/util/UUID;Lcom/facebook/share/model/ShareContent;Z)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::share::internal::OpenGraphActionDialogFeature> com::facebook::share::internal::OpenGraphActionDialogFeature::values(){
    if (!::com::facebook::share::internal::OpenGraphActionDialogFeature::_class) ::com::facebook::share::internal::OpenGraphActionDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphActionDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/OpenGraphActionDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::OpenGraphActionDialogFeature> _ret(rets, ::com::facebook::share::internal::OpenGraphActionDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::OpenGraphActionDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::OpenGraphActionDialogFeature com::facebook::share::internal::OpenGraphActionDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::OpenGraphActionDialogFeature::_class) ::com::facebook::share::internal::OpenGraphActionDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphActionDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/OpenGraphActionDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::OpenGraphActionDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::OpenGraphActionDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::OpenGraphActionDialogFeature::_class) ::com::facebook::share::internal::OpenGraphActionDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphActionDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::OpenGraphActionDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::OpenGraphActionDialogFeature::_class) ::com::facebook::share::internal::OpenGraphActionDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphActionDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::json::JSONObject com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor::toJSONObject(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor::_class) ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor::_class = java::fetch_class("com/facebook/share/internal/OpenGraphJSONUtility$PhotoJSONProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "toJSONObject", "(Lcom/facebook/share/model/SharePhoto;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::share::internal::OpenGraphJSONUtility::toJSONObject(const ::com::facebook::share::model::ShareOpenGraphAction& arg0, const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& arg1){
    if (!::com::facebook::share::internal::OpenGraphJSONUtility::_class) ::com::facebook::share::internal::OpenGraphJSONUtility::_class = java::fetch_class("com/facebook/share/internal/OpenGraphJSONUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toJSONObject", "(Lcom/facebook/share/model/ShareOpenGraphAction;Lcom/facebook/share/internal/OpenGraphJSONUtility$PhotoJSONProcessor;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::share::internal::OpenGraphJSONUtility::toJSONValue(const ::java::lang::Object& arg0, const ::com::facebook::share::internal::OpenGraphJSONUtility_PhotoJSONProcessor& arg1){
    if (!::com::facebook::share::internal::OpenGraphJSONUtility::_class) ::com::facebook::share::internal::OpenGraphJSONUtility::_class = java::fetch_class("com/facebook/share/internal/OpenGraphJSONUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toJSONValue", "(Ljava/lang/Object;Lcom/facebook/share/internal/OpenGraphJSONUtility$PhotoJSONProcessor;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::share::internal::OpenGraphMessageDialogFeature> com::facebook::share::internal::OpenGraphMessageDialogFeature::values(){
    if (!::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class) ::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphMessageDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/OpenGraphMessageDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::OpenGraphMessageDialogFeature> _ret(rets, ::com::facebook::share::internal::OpenGraphMessageDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::OpenGraphMessageDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::OpenGraphMessageDialogFeature com::facebook::share::internal::OpenGraphMessageDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class) ::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphMessageDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/OpenGraphMessageDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::OpenGraphMessageDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::OpenGraphMessageDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class) ::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphMessageDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::OpenGraphMessageDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class) ::com::facebook::share::internal::OpenGraphMessageDialogFeature::_class = java::fetch_class("com/facebook/share/internal/OpenGraphMessageDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::ResultProcessor::ResultProcessor(const ::com::facebook::FacebookCallback& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::ResultProcessor::_class) ::com::facebook::share::internal::ResultProcessor::_class = java::fetch_class("com/facebook/share/internal/ResultProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::ResultProcessor::onSuccess(const ::com::facebook::internal::AppCall& arg0, const ::android::os::Bundle& arg1) const {
    if (!::com::facebook::share::internal::ResultProcessor::_class) ::com::facebook::share::internal::ResultProcessor::_class = java::fetch_class("com/facebook/share/internal/ResultProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lcom/facebook/internal/AppCall;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::internal::ResultProcessor::onCancel(const ::com::facebook::internal::AppCall& arg0) const {
    if (!::com::facebook::share::internal::ResultProcessor::_class) ::com::facebook::share::internal::ResultProcessor::_class = java::fetch_class("com/facebook/share/internal/ResultProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "(Lcom/facebook/internal/AppCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ResultProcessor::onError(const ::com::facebook::internal::AppCall& arg0, const ::com::facebook::FacebookException& arg1) const {
    if (!::com::facebook::share::internal::ResultProcessor::_class) ::com::facebook::share::internal::ResultProcessor::_class = java::fetch_class("com/facebook/share/internal/ResultProcessor");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/internal/AppCall;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::ShareConstants::ShareConstants() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::ShareConstants::_class) ::com::facebook::share::internal::ShareConstants::_class = java::fetch_class("com/facebook/share/internal/ShareConstants");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::ShareContentValidation_ApiValidator::validate(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_ApiValidator::_class) ::com::facebook::share::internal::ShareContentValidation_ApiValidator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$ApiValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/SharePhoto;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareLinkContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareLinkContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::SharePhotoContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/SharePhotoContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareVideoContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareVideoContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareOpenGraphContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareOpenGraphContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareOpenGraphAction& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareOpenGraphAction;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareOpenGraphObject& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareOpenGraphObject;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareOpenGraphValueContainer& arg0, bool arg1) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareOpenGraphValueContainer;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/SharePhoto;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_Validator::validate(const ::com::facebook::share::model::ShareVideo& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareVideo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::share::internal::ShareContentValidation_Validator::isOpenGraphContent() const {
    if (!::com::facebook::share::internal::ShareContentValidation_Validator::_class) ::com::facebook::share::internal::ShareContentValidation_Validator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpenGraphContent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::share::internal::ShareContentValidation_WebShareValidator::validate(const ::com::facebook::share::model::SharePhotoContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class) ::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$WebShareValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/SharePhotoContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_WebShareValidator::validate(const ::com::facebook::share::model::ShareVideoContent& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class) ::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$WebShareValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/ShareVideoContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation_WebShareValidator::validate(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class) ::com::facebook::share::internal::ShareContentValidation_WebShareValidator::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation$WebShareValidator");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "(Lcom/facebook/share/model/SharePhoto;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::ShareContentValidation::ShareContentValidation() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::ShareContentValidation::_class) ::com::facebook::share::internal::ShareContentValidation::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::ShareContentValidation::validateForMessage(const ::com::facebook::share::model::ShareContent& arg0){
    if (!::com::facebook::share::internal::ShareContentValidation::_class) ::com::facebook::share::internal::ShareContentValidation::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validateForMessage", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation::validateForNativeShare(const ::com::facebook::share::model::ShareContent& arg0){
    if (!::com::facebook::share::internal::ShareContentValidation::_class) ::com::facebook::share::internal::ShareContentValidation::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validateForNativeShare", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation::validateForWebShare(const ::com::facebook::share::model::ShareContent& arg0){
    if (!::com::facebook::share::internal::ShareContentValidation::_class) ::com::facebook::share::internal::ShareContentValidation::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validateForWebShare", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::share::internal::ShareContentValidation::validateForApiShare(const ::com::facebook::share::model::ShareContent& arg0){
    if (!::com::facebook::share::internal::ShareContentValidation::_class) ::com::facebook::share::internal::ShareContentValidation::_class = java::fetch_class("com/facebook/share/internal/ShareContentValidation");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "validateForApiShare", "(Lcom/facebook/share/model/ShareContent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

std::vector< ::com::facebook::share::internal::ShareDialogFeature> com::facebook::share::internal::ShareDialogFeature::values(){
    if (!::com::facebook::share::internal::ShareDialogFeature::_class) ::com::facebook::share::internal::ShareDialogFeature::_class = java::fetch_class("com/facebook/share/internal/ShareDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/internal/ShareDialogFeature;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::internal::ShareDialogFeature> _ret(rets, ::com::facebook::share::internal::ShareDialogFeature((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::internal::ShareDialogFeature retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::internal::ShareDialogFeature com::facebook::share::internal::ShareDialogFeature::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::ShareDialogFeature::_class) ::com::facebook::share::internal::ShareDialogFeature::_class = java::fetch_class("com/facebook/share/internal/ShareDialogFeature");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/internal/ShareDialogFeature;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::ShareDialogFeature _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::ShareDialogFeature::getAction() const {
    if (!::com::facebook::share::internal::ShareDialogFeature::_class) ::com::facebook::share::internal::ShareDialogFeature::_class = java::fetch_class("com/facebook/share/internal/ShareDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::internal::ShareDialogFeature::getMinVersion() const {
    if (!::com::facebook::share::internal::ShareDialogFeature::_class) ::com::facebook::share::internal::ShareDialogFeature::_class = java::fetch_class("com/facebook/share/internal/ShareDialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::internal::ShareInternalUtility::invokeCallbackWithException(const ::com::facebook::FacebookCallback& arg0, const ::java::lang::Exception& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeCallbackWithException", "(Lcom/facebook/FacebookCallback;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::internal::ShareInternalUtility::invokeCallbackWithError(const ::com::facebook::FacebookCallback& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeCallbackWithError", "(Lcom/facebook/FacebookCallback;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::internal::ShareInternalUtility::invokeCallbackWithResults(const ::com::facebook::FacebookCallback& arg0, const ::java::lang::String& arg1, const ::com::facebook::GraphResponse& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeCallbackWithResults", "(Lcom/facebook/FacebookCallback;Ljava/lang/String;Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool com::facebook::share::internal::ShareInternalUtility::getNativeDialogDidComplete(const ::android::os::Bundle& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeDialogDidComplete", "(Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::share::internal::ShareInternalUtility::getNativeDialogCompletionGesture(const ::android::os::Bundle& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNativeDialogCompletionGesture", "(Landroid/os/Bundle;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::ShareInternalUtility::getShareDialogPostId(const ::android::os::Bundle& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getShareDialogPostId", "(Landroid/os/Bundle;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::share::internal::ShareInternalUtility::handleActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2, const ::com::facebook::share::internal::ResultProcessor& arg3){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "handleActivityResult", "(IILandroid/content/Intent;Lcom/facebook/share/internal/ResultProcessor;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

::com::facebook::share::internal::ResultProcessor com::facebook::share::internal::ShareInternalUtility::getShareResultProcessor(const ::com::facebook::FacebookCallback& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getShareResultProcessor", "(Lcom/facebook/FacebookCallback;)Lcom/facebook/share/internal/ResultProcessor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::internal::ResultProcessor _ret(ret);
    return _ret;
}

void com::facebook::share::internal::ShareInternalUtility::registerStaticShareCallback(int32_t arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerStaticShareCallback", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::share::internal::ShareInternalUtility::registerSharerCallback(int32_t arg0, const ::com::facebook::CallbackManager& arg1, const ::com::facebook::FacebookCallback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerSharerCallback", "(ILcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::util::List com::facebook::share::internal::ShareInternalUtility::getPhotoUrls(const ::com::facebook::share::model::SharePhotoContent& arg0, const ::java::util::UUID& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPhotoUrls", "(Lcom/facebook/share/model/SharePhotoContent;Ljava/util/UUID;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::internal::ShareInternalUtility::getVideoUrl(const ::com::facebook::share::model::ShareVideoContent& arg0, const ::java::util::UUID& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getVideoUrl", "(Lcom/facebook/share/model/ShareVideoContent;Ljava/util/UUID;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::share::internal::ShareInternalUtility::toJSONObjectForCall(const ::java::util::UUID& arg0, const ::com::facebook::share::model::ShareOpenGraphContent& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toJSONObjectForCall", "(Ljava/util/UUID;Lcom/facebook/share/model/ShareOpenGraphContent;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::share::internal::ShareInternalUtility::toJSONObjectForWeb(const ::com::facebook::share::model::ShareOpenGraphContent& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toJSONObjectForWeb", "(Lcom/facebook/share/model/ShareOpenGraphContent;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONArray com::facebook::share::internal::ShareInternalUtility::removeNamespacesFromOGJsonArray(const ::org::json::JSONArray& arg0, bool arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeNamespacesFromOGJsonArray", "(Lorg/json/JSONArray;Z)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::share::internal::ShareInternalUtility::removeNamespacesFromOGJsonObject(const ::org::json::JSONObject& arg0, bool arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeNamespacesFromOGJsonObject", "(Lorg/json/JSONObject;Z)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::android::util::Pair com::facebook::share::internal::ShareInternalUtility::getFieldNameAndNamespaceFromFullName(const ::java::lang::String& arg0){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFieldNameAndNamespaceFromFullName", "(Ljava/lang/String;)Landroid/util/Pair;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::util::Pair _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newPostOpenGraphObjectRequest(const ::com::facebook::AccessToken& arg0, const ::org::json::JSONObject& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPostOpenGraphObjectRequest", "(Lcom/facebook/AccessToken;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newPostOpenGraphObjectRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::org::json::JSONObject& arg6, const ::com::facebook::GraphRequest_Callback& arg7){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPostOpenGraphObjectRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newPostOpenGraphActionRequest(const ::com::facebook::AccessToken& arg0, const ::org::json::JSONObject& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPostOpenGraphActionRequest", "(Lcom/facebook/AccessToken;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUpdateOpenGraphObjectRequest(const ::com::facebook::AccessToken& arg0, const ::org::json::JSONObject& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdateOpenGraphObjectRequest", "(Lcom/facebook/AccessToken;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUpdateOpenGraphObjectRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::java::lang::String& arg5, const ::org::json::JSONObject& arg6, const ::com::facebook::GraphRequest_Callback& arg7){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUpdateOpenGraphObjectRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadPhotoRequest(const ::java::lang::String& arg0, const ::com::facebook::AccessToken& arg1, const ::android::graphics::Bitmap& arg2, const ::java::lang::String& arg3, const ::android::os::Bundle& arg4, const ::com::facebook::GraphRequest_Callback& arg5){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadPhotoRequest", "(Ljava/lang/String;Lcom/facebook/AccessToken;Landroid/graphics/Bitmap;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadPhotoRequest(const ::java::lang::String& arg0, const ::com::facebook::AccessToken& arg1, const ::java::io::File& arg2, const ::java::lang::String& arg3, const ::android::os::Bundle& arg4, const ::com::facebook::GraphRequest_Callback& arg5){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadPhotoRequest", "(Ljava/lang/String;Lcom/facebook/AccessToken;Ljava/io/File;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadPhotoRequest(const ::java::lang::String& arg0, const ::com::facebook::AccessToken& arg1, const ::android::net::Uri& arg2, const ::java::lang::String& arg3, const ::android::os::Bundle& arg4, const ::com::facebook::GraphRequest_Callback& arg5){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadPhotoRequest", "(Ljava/lang/String;Lcom/facebook/AccessToken;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newStatusUpdateRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newStatusUpdateRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newStatusUpdateRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::org::json::JSONObject& arg2, const ::java::util::List& arg3, const ::com::facebook::GraphRequest_Callback& arg4){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newStatusUpdateRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Lorg/json/JSONObject;Ljava/util/List;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken& arg0, const ::android::graphics::Bitmap& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadStagingResourceWithImageRequest", "(Lcom/facebook/AccessToken;Landroid/graphics/Bitmap;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken& arg0, const ::java::io::File& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadStagingResourceWithImageRequest", "(Lcom/facebook/AccessToken;Ljava/io/File;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::share::internal::ShareInternalUtility::newUploadStagingResourceWithImageRequest(const ::com::facebook::AccessToken& arg0, const ::android::net::Uri& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newUploadStagingResourceWithImageRequest", "(Lcom/facebook/AccessToken;Landroid/net/Uri;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::share::widget::LikeView_ObjectType com::facebook::share::internal::ShareInternalUtility::getMostSpecificObjectType(const ::com::facebook::share::widget::LikeView_ObjectType& arg0, const ::com::facebook::share::widget::LikeView_ObjectType& arg1){
    if (!::com::facebook::share::internal::ShareInternalUtility::_class) ::com::facebook::share::internal::ShareInternalUtility::_class = java::fetch_class("com/facebook/share/internal/ShareInternalUtility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMostSpecificObjectType", "(Lcom/facebook/share/widget/LikeView$ObjectType;Lcom/facebook/share/widget/LikeView$ObjectType;)Lcom/facebook/share/widget/LikeView$ObjectType;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::share::widget::LikeView_ObjectType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::VideoUploader_FinishUploadWorkItem(const ::com::facebook::share::internal::VideoUploader_UploadContext& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::_class) ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$FinishUploadWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/share/internal/VideoUploader$UploadContext;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::getParameters() const {
    if (!::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::_class) ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$FinishUploadWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::VideoUploader_StartUploadWorkItem::VideoUploader_StartUploadWorkItem(const ::com::facebook::share::internal::VideoUploader_UploadContext& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::com::facebook::share::internal::VideoUploader_StartUploadWorkItem::_class) ::com::facebook::share::internal::VideoUploader_StartUploadWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$StartUploadWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/share/internal/VideoUploader$UploadContext;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::VideoUploader_StartUploadWorkItem::getParameters() const {
    if (!::com::facebook::share::internal::VideoUploader_StartUploadWorkItem::_class) ::com::facebook::share::internal::VideoUploader_StartUploadWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$StartUploadWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::VideoUploader_TransferChunkWorkItem(const ::com::facebook::share::internal::VideoUploader_UploadContext& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {
    if (!::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::_class) ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$TransferChunkWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/share/internal/VideoUploader$UploadContext;Ljava/lang/String;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::getParameters() const {
    if (!::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::_class) ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$TransferChunkWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void com::facebook::share::internal::VideoUploader_UploadWorkItemBase::run() const {
    if (!::com::facebook::share::internal::VideoUploader_UploadWorkItemBase::_class) ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase::_class = java::fetch_class("com/facebook/share/internal/VideoUploader$UploadWorkItemBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::VideoUploader::VideoUploader() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::VideoUploader::_class) ::com::facebook::share::internal::VideoUploader::_class = java::fetch_class("com/facebook/share/internal/VideoUploader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::share::internal::VideoUploader::uploadAsync(const ::com::facebook::share::model::ShareVideoContent& arg0, const ::com::facebook::FacebookCallback& arg1){
    if (!::com::facebook::share::internal::VideoUploader::_class) ::com::facebook::share::internal::VideoUploader::_class = java::fetch_class("com/facebook/share/internal/VideoUploader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "uploadAsync", "(Lcom/facebook/share/model/ShareVideoContent;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::share::internal::VideoUploader::uploadAsync(const ::com::facebook::share::model::ShareVideoContent& arg0, const ::java::lang::String& arg1, const ::com::facebook::FacebookCallback& arg2){
    if (!::com::facebook::share::internal::VideoUploader::_class) ::com::facebook::share::internal::VideoUploader::_class = java::fetch_class("com/facebook/share/internal/VideoUploader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "uploadAsync", "(Lcom/facebook/share/model/ShareVideoContent;Ljava/lang/String;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::internal::WebDialogParameters::WebDialogParameters() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::share::internal::WebDialogParameters::create(const ::com::facebook::share::model::AppGroupCreationContent& arg0){
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Lcom/facebook/share/model/AppGroupCreationContent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::internal::WebDialogParameters::create(const ::com::facebook::share::model::GameRequestContent& arg0){
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Lcom/facebook/share/model/GameRequestContent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::internal::WebDialogParameters::create(const ::com::facebook::share::model::ShareLinkContent& arg0){
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Lcom/facebook/share/model/ShareLinkContent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::internal::WebDialogParameters::create(const ::com::facebook::share::model::ShareOpenGraphContent& arg0){
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Lcom/facebook/share/model/ShareOpenGraphContent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::internal::WebDialogParameters::createForFeed(const ::com::facebook::share::model::ShareLinkContent& arg0){
    if (!::com::facebook::share::internal::WebDialogParameters::_class) ::com::facebook::share::internal::WebDialogParameters::_class = java::fetch_class("com/facebook/share/internal/WebDialogParameters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createForFeed", "(Lcom/facebook/share/model/ShareLinkContent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

