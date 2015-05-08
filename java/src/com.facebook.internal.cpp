#include "java-core.hpp"
#include <memory>
#include "android.app.Activity.hpp"
#include "android.app.Dialog.hpp"
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.net.Uri.hpp"
#include "android.net.http.SslError.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.webkit.SslErrorHandler.hpp"
#include "android.webkit.WebView.hpp"
#include "com.facebook.AccessToken.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.FacebookException.hpp"
#include "com.facebook.FacebookRequestError.hpp"
#include "com.facebook.LoggingBehavior.hpp"
#include "com.facebook.internal.AnalyticsEvents.hpp"
#include "com.facebook.internal.AppCall.hpp"
#include "com.facebook.internal.AttributionIdentifiers.hpp"
#include "com.facebook.internal.BoltsMeasurementEventListener.hpp"
#include "com.facebook.internal.BundleJSONConverter.hpp"
#include "com.facebook.internal.CallbackManagerImpl.hpp"
#include "com.facebook.internal.CollectionMapper.hpp"
#include "com.facebook.internal.DialogFeature.hpp"
#include "com.facebook.internal.DialogPresenter.hpp"
#include "com.facebook.internal.FacebookDialogBase.hpp"
#include "com.facebook.internal.FacebookDialogFragment.hpp"
#include "com.facebook.internal.FacebookRequestErrorClassification.hpp"
#include "com.facebook.internal.FacebookWebFallbackDialog.hpp"
#include "com.facebook.internal.FileLruCache.hpp"
#include "com.facebook.internal.GraphUtil.hpp"
#include "com.facebook.internal.ImageDownloader.hpp"
#include "com.facebook.internal.ImageRequest.hpp"
#include "com.facebook.internal.ImageResponse.hpp"
#include "com.facebook.internal.ImageResponseCache.hpp"
#include "com.facebook.internal.JsonUtil.hpp"
#include "com.facebook.internal.Logger.hpp"
#include "com.facebook.internal.LoginAuthorizationType.hpp"
#include "com.facebook.internal.Mutable.hpp"
#include "com.facebook.internal.NativeAppCallAttachmentStore.hpp"
#include "com.facebook.internal.NativeProtocol.hpp"
#include "com.facebook.internal.PermissionType.hpp"
#include "com.facebook.internal.PlatformServiceClient.hpp"
#include "com.facebook.internal.ProfileInformationCache.hpp"
#include "com.facebook.internal.ServerProtocol.hpp"
#include "com.facebook.internal.UrlRedirectCache.hpp"
#include "com.facebook.internal.Utility.hpp"
#include "com.facebook.internal.Validate.hpp"
#include "com.facebook.internal.WebDialog.hpp"
#include "com.facebook.internal.WorkQueue.hpp"
#include "com.facebook.login.DefaultAudience.hpp"
#include "java.io.Closeable.hpp"
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.StringBuilder.hpp"
#include "java.lang.Throwable.hpp"
#include "java.lang.reflect.Method.hpp"
#include "java.net.URLConnection.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Date.hpp"
#include "java.util.HashSet.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.List.hpp"
#include "java.util.Map.hpp"
#include "java.util.TreeSet.hpp"
#include "java.util.UUID.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "org.json.JSONArray.hpp"
#include "org.json.JSONObject.hpp"

jclass com::facebook::internal::AnalyticsEvents::_class = nullptr;
jclass com::facebook::internal::AppCall::_class = nullptr;
jclass com::facebook::internal::AttributionIdentifiers::_class = nullptr;
jclass com::facebook::internal::BoltsMeasurementEventListener::_class = nullptr;
jclass com::facebook::internal::BundleJSONConverter_Setter::_class = nullptr;
jclass com::facebook::internal::BundleJSONConverter::_class = nullptr;
jclass com::facebook::internal::CallbackManagerImpl_Callback::_class = nullptr;
jclass com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class = nullptr;
jclass com::facebook::internal::CallbackManagerImpl::_class = nullptr;
jclass com::facebook::internal::CollectionMapper_Collection::_class = nullptr;
jclass com::facebook::internal::CollectionMapper_OnErrorListener::_class = nullptr;
jclass com::facebook::internal::CollectionMapper_OnMapperCompleteListener::_class = nullptr;
jclass com::facebook::internal::CollectionMapper_OnMapValueCompleteListener::_class = nullptr;
jclass com::facebook::internal::CollectionMapper_ValueMapper::_class = nullptr;
jclass com::facebook::internal::CollectionMapper::_class = nullptr;
jclass com::facebook::internal::DialogFeature::_class = nullptr;
jclass com::facebook::internal::DialogPresenter_ParameterProvider::_class = nullptr;
jclass com::facebook::internal::DialogPresenter::_class = nullptr;
jclass com::facebook::internal::FacebookDialogBase_ModeHandler::_class = nullptr;
jclass com::facebook::internal::FacebookDialogBase::_class = nullptr;
jclass com::facebook::internal::FacebookDialogFragment::_class = nullptr;
jclass com::facebook::internal::FacebookRequestErrorClassification::_class = nullptr;
jclass com::facebook::internal::FacebookWebFallbackDialog::_class = nullptr;
jclass com::facebook::internal::FileLruCache_BufferFile::_class = nullptr;
jclass com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = nullptr;
jclass com::facebook::internal::FileLruCache_CopyingInputStream::_class = nullptr;
jclass com::facebook::internal::FileLruCache_Limits::_class = nullptr;
jclass com::facebook::internal::FileLruCache_ModifiedFile::_class = nullptr;
jclass com::facebook::internal::FileLruCache_StreamCloseCallback::_class = nullptr;
jclass com::facebook::internal::FileLruCache_StreamHeader::_class = nullptr;
jclass com::facebook::internal::FileLruCache::_class = nullptr;
jclass com::facebook::internal::GraphUtil::_class = nullptr;
jclass com::facebook::internal::ImageDownloader_CacheReadWorkItem::_class = nullptr;
jclass com::facebook::internal::ImageDownloader_DownloaderContext::_class = nullptr;
jclass com::facebook::internal::ImageDownloader_DownloadImageWorkItem::_class = nullptr;
jclass com::facebook::internal::ImageDownloader_RequestKey::_class = nullptr;
jclass com::facebook::internal::ImageDownloader::_class = nullptr;
jclass com::facebook::internal::ImageRequest_Builder::_class = nullptr;
jclass com::facebook::internal::ImageRequest_Callback::_class = nullptr;
jclass com::facebook::internal::ImageRequest::_class = nullptr;
jclass com::facebook::internal::ImageResponse::_class = nullptr;
jclass com::facebook::internal::ImageResponseCache_BufferedHttpInputStream::_class = nullptr;
jclass com::facebook::internal::ImageResponseCache::_class = nullptr;
jclass com::facebook::internal::JsonUtil_JSONObjectEntry::_class = nullptr;
jclass com::facebook::internal::JsonUtil::_class = nullptr;
jclass com::facebook::internal::Logger::_class = nullptr;
jclass com::facebook::internal::LoginAuthorizationType::_class = nullptr;
jclass com::facebook::internal::Mutable::_class = nullptr;
jclass com::facebook::internal::NativeAppCallAttachmentStore_Attachment::_class = nullptr;
jclass com::facebook::internal::NativeAppCallAttachmentStore::_class = nullptr;
jclass com::facebook::internal::NativeProtocol_KatanaAppInfo::_class = nullptr;
jclass com::facebook::internal::NativeProtocol_MessengerAppInfo::_class = nullptr;
jclass com::facebook::internal::NativeProtocol_NativeAppInfo::_class = nullptr;
jclass com::facebook::internal::NativeProtocol_WakizashiAppInfo::_class = nullptr;
jclass com::facebook::internal::NativeProtocol::_class = nullptr;
jclass com::facebook::internal::PermissionType::_class = nullptr;
jclass com::facebook::internal::PlatformServiceClient_CompletedListener::_class = nullptr;
jclass com::facebook::internal::PlatformServiceClient::_class = nullptr;
jclass com::facebook::internal::ProfileInformationCache::_class = nullptr;
jclass com::facebook::internal::ServerProtocol::_class = nullptr;
jclass com::facebook::internal::UrlRedirectCache::_class = nullptr;
jclass com::facebook::internal::Utility_DialogFeatureConfig::_class = nullptr;
jclass com::facebook::internal::Utility_FetchedAppSettings::_class = nullptr;
jclass com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::_class = nullptr;
jclass com::facebook::internal::Utility_Mapper::_class = nullptr;
jclass com::facebook::internal::Utility_Predicate::_class = nullptr;
jclass com::facebook::internal::Utility::_class = nullptr;
jclass com::facebook::internal::Validate::_class = nullptr;
jclass com::facebook::internal::WebDialog_Builder::_class = nullptr;
jclass com::facebook::internal::WebDialog_DialogWebViewClient::_class = nullptr;
jclass com::facebook::internal::WebDialog_OnCompleteListener::_class = nullptr;
jclass com::facebook::internal::WebDialog::_class = nullptr;
jclass com::facebook::internal::WorkQueue_WorkItem::_class = nullptr;
jclass com::facebook::internal::WorkQueue_WorkNode::_class = nullptr;
jclass com::facebook::internal::WorkQueue::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::AnalyticsEvents::AnalyticsEvents() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::AnalyticsEvents::_class) ::com::facebook::internal::AnalyticsEvents::_class = java::fetch_class("com/facebook/internal/AnalyticsEvents");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::internal::AppCall com::facebook::internal::AppCall::getCurrentPendingCall(){
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentPendingCall", "()Lcom/facebook/internal/AppCall;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

::com::facebook::internal::AppCall com::facebook::internal::AppCall::finishPendingCall(const ::java::util::UUID& arg0, int32_t arg1){
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "finishPendingCall", "(Ljava/util/UUID;I)Lcom/facebook/internal/AppCall;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::internal::AppCall _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::AppCall::AppCall(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::AppCall::AppCall(int32_t arg0, const ::java::util::UUID& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/UUID;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::content::Intent com::facebook::internal::AppCall::getRequestIntent() const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestIntent", "()Landroid/content/Intent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::java::util::UUID com::facebook::internal::AppCall::getCallId() const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallId", "()Ljava/util/UUID;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::UUID _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::AppCall::getRequestCode() const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::internal::AppCall::setRequestCode(int32_t arg0) const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRequestCode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::AppCall::setRequestIntent(const ::android::content::Intent& arg0) const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRequestIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::internal::AppCall::setPending() const {
    if (!::com::facebook::internal::AppCall::_class) ::com::facebook::internal::AppCall::_class = java::fetch_class("com/facebook/internal/AppCall");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPending", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::AttributionIdentifiers::AttributionIdentifiers() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::AttributionIdentifiers::_class) ::com::facebook::internal::AttributionIdentifiers::_class = java::fetch_class("com/facebook/internal/AttributionIdentifiers");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::internal::AttributionIdentifiers com::facebook::internal::AttributionIdentifiers::getAttributionIdentifiers(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::AttributionIdentifiers::_class) ::com::facebook::internal::AttributionIdentifiers::_class = java::fetch_class("com/facebook/internal/AttributionIdentifiers");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAttributionIdentifiers", "(Landroid/content/Context;)Lcom/facebook/internal/AttributionIdentifiers;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::AttributionIdentifiers _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::AttributionIdentifiers::getAttributionId() const {
    if (!::com::facebook::internal::AttributionIdentifiers::_class) ::com::facebook::internal::AttributionIdentifiers::_class = java::fetch_class("com/facebook/internal/AttributionIdentifiers");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributionId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::AttributionIdentifiers::getAndroidAdvertiserId() const {
    if (!::com::facebook::internal::AttributionIdentifiers::_class) ::com::facebook::internal::AttributionIdentifiers::_class = java::fetch_class("com/facebook/internal/AttributionIdentifiers");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAndroidAdvertiserId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::internal::AttributionIdentifiers::isTrackingLimited() const {
    if (!::com::facebook::internal::AttributionIdentifiers::_class) ::com::facebook::internal::AttributionIdentifiers::_class = java::fetch_class("com/facebook/internal/AttributionIdentifiers");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTrackingLimited", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::com::facebook::internal::BoltsMeasurementEventListener com::facebook::internal::BoltsMeasurementEventListener::getInstance(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::BoltsMeasurementEventListener::_class) ::com::facebook::internal::BoltsMeasurementEventListener::_class = java::fetch_class("com/facebook/internal/BoltsMeasurementEventListener");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Lcom/facebook/internal/BoltsMeasurementEventListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::BoltsMeasurementEventListener _ret(ret);
    return _ret;
}

void com::facebook::internal::BoltsMeasurementEventListener::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::internal::BoltsMeasurementEventListener::_class) ::com::facebook::internal::BoltsMeasurementEventListener::_class = java::fetch_class("com/facebook/internal/BoltsMeasurementEventListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::BundleJSONConverter_Setter::setOnBundle(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2) const {
    if (!::com::facebook::internal::BundleJSONConverter_Setter::_class) ::com::facebook::internal::BundleJSONConverter_Setter::_class = java::fetch_class("com/facebook/internal/BundleJSONConverter$Setter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnBundle", "(Landroid/os/Bundle;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::BundleJSONConverter_Setter::setOnJSON(const ::org::json::JSONObject& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2) const {
    if (!::com::facebook::internal::BundleJSONConverter_Setter::_class) ::com::facebook::internal::BundleJSONConverter_Setter::_class = java::fetch_class("com/facebook/internal/BundleJSONConverter$Setter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnJSON", "(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::BundleJSONConverter::BundleJSONConverter() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::BundleJSONConverter::_class) ::com::facebook::internal::BundleJSONConverter::_class = java::fetch_class("com/facebook/internal/BundleJSONConverter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::json::JSONObject com::facebook::internal::BundleJSONConverter::convertToJSON(const ::android::os::Bundle& arg0){
    if (!::com::facebook::internal::BundleJSONConverter::_class) ::com::facebook::internal::BundleJSONConverter::_class = java::fetch_class("com/facebook/internal/BundleJSONConverter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "convertToJSON", "(Landroid/os/Bundle;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::BundleJSONConverter::convertToBundle(const ::org::json::JSONObject& arg0){
    if (!::com::facebook::internal::BundleJSONConverter::_class) ::com::facebook::internal::BundleJSONConverter::_class = java::fetch_class("com/facebook/internal/BundleJSONConverter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "convertToBundle", "(Lorg/json/JSONObject;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

bool com::facebook::internal::CallbackManagerImpl_Callback::onActivityResult(int32_t arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::internal::CallbackManagerImpl_Callback::_class) ::com::facebook::internal::CallbackManagerImpl_Callback::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(ILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset> com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::values(){
    if (!::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class) ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl$RequestCodeOffset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/internal/CallbackManagerImpl$RequestCodeOffset;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset> _ret(rets, ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class) ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl$RequestCodeOffset");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/internal/CallbackManagerImpl$RequestCodeOffset;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::toRequestCode() const {
    if (!::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class) ::com::facebook::internal::CallbackManagerImpl_RequestCodeOffset::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl$RequestCodeOffset");
    static jmethodID mid = java::jni->GetMethodID(_class, "toRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::CallbackManagerImpl::CallbackManagerImpl() : ::java::lang::Object((jobject)0), ::com::facebook::CallbackManager((jobject)0) {
    if (!::com::facebook::internal::CallbackManagerImpl::_class) ::com::facebook::internal::CallbackManagerImpl::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::internal::CallbackManagerImpl::registerStaticCallback(int32_t arg0, const ::com::facebook::internal::CallbackManagerImpl_Callback& arg1){
    if (!::com::facebook::internal::CallbackManagerImpl::_class) ::com::facebook::internal::CallbackManagerImpl::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerStaticCallback", "(ILcom/facebook/internal/CallbackManagerImpl$Callback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::CallbackManagerImpl::registerCallback(int32_t arg0, const ::com::facebook::internal::CallbackManagerImpl_Callback& arg1) const {
    if (!::com::facebook::internal::CallbackManagerImpl::_class) ::com::facebook::internal::CallbackManagerImpl::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(ILcom/facebook/internal/CallbackManagerImpl$Callback;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool com::facebook::internal::CallbackManagerImpl::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::com::facebook::internal::CallbackManagerImpl::_class) ::com::facebook::internal::CallbackManagerImpl::_class = java::fetch_class("com/facebook/internal/CallbackManagerImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::util::Iterator com::facebook::internal::CollectionMapper_Collection::keyIterator() const {
    if (!::com::facebook::internal::CollectionMapper_Collection::_class) ::com::facebook::internal::CollectionMapper_Collection::_class = java::fetch_class("com/facebook/internal/CollectionMapper$Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::internal::CollectionMapper_Collection::get(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::CollectionMapper_Collection::_class) ::com::facebook::internal::CollectionMapper_Collection::_class = java::fetch_class("com/facebook/internal/CollectionMapper$Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void com::facebook::internal::CollectionMapper_Collection::set(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1, const ::com::facebook::internal::CollectionMapper_OnErrorListener& arg2) const {
    if (!::com::facebook::internal::CollectionMapper_Collection::_class) ::com::facebook::internal::CollectionMapper_Collection::_class = java::fetch_class("com/facebook/internal/CollectionMapper$Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/facebook/internal/CollectionMapper$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::CollectionMapper_OnErrorListener::onError(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::internal::CollectionMapper_OnErrorListener::_class) ::com::facebook::internal::CollectionMapper_OnErrorListener::_class = java::fetch_class("com/facebook/internal/CollectionMapper$OnErrorListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::CollectionMapper_OnMapperCompleteListener::onComplete() const {
    if (!::com::facebook::internal::CollectionMapper_OnMapperCompleteListener::_class) ::com::facebook::internal::CollectionMapper_OnMapperCompleteListener::_class = java::fetch_class("com/facebook/internal/CollectionMapper$OnMapperCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::CollectionMapper_OnMapValueCompleteListener::onComplete(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener::_class) ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener::_class = java::fetch_class("com/facebook/internal/CollectionMapper$OnMapValueCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::CollectionMapper_ValueMapper::mapValue(const ::java::lang::Object& arg0, const ::com::facebook::internal::CollectionMapper_OnMapValueCompleteListener& arg1) const {
    if (!::com::facebook::internal::CollectionMapper_ValueMapper::_class) ::com::facebook::internal::CollectionMapper_ValueMapper::_class = java::fetch_class("com/facebook/internal/CollectionMapper$ValueMapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "mapValue", "(Ljava/lang/Object;Lcom/facebook/internal/CollectionMapper$OnMapValueCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::CollectionMapper::iterate(const ::com::facebook::internal::CollectionMapper_Collection& arg0, const ::com::facebook::internal::CollectionMapper_ValueMapper& arg1, const ::com::facebook::internal::CollectionMapper_OnMapperCompleteListener& arg2){
    if (!::com::facebook::internal::CollectionMapper::_class) ::com::facebook::internal::CollectionMapper::_class = java::fetch_class("com/facebook/internal/CollectionMapper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "iterate", "(Lcom/facebook/internal/CollectionMapper$Collection;Lcom/facebook/internal/CollectionMapper$ValueMapper;Lcom/facebook/internal/CollectionMapper$OnMapperCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String com::facebook::internal::DialogFeature::getAction() const {
    if (!::com::facebook::internal::DialogFeature::_class) ::com::facebook::internal::DialogFeature::_class = java::fetch_class("com/facebook/internal/DialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::DialogFeature::getMinVersion() const {
    if (!::com::facebook::internal::DialogFeature::_class) ::com::facebook::internal::DialogFeature::_class = java::fetch_class("com/facebook/internal/DialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVersion", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String com::facebook::internal::DialogFeature::name() const {
    if (!::com::facebook::internal::DialogFeature::_class) ::com::facebook::internal::DialogFeature::_class = java::fetch_class("com/facebook/internal/DialogFeature");
    static jmethodID mid = java::jni->GetMethodID(_class, "name", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::DialogPresenter_ParameterProvider::getParameters() const {
    if (!::com::facebook::internal::DialogPresenter_ParameterProvider::_class) ::com::facebook::internal::DialogPresenter_ParameterProvider::_class = java::fetch_class("com/facebook/internal/DialogPresenter$ParameterProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::DialogPresenter_ParameterProvider::getLegacyParameters() const {
    if (!::com::facebook::internal::DialogPresenter_ParameterProvider::_class) ::com::facebook::internal::DialogPresenter_ParameterProvider::_class = java::fetch_class("com/facebook/internal/DialogPresenter$ParameterProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLegacyParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::DialogPresenter::DialogPresenter() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::internal::DialogPresenter::setupAppCallForCannotShowError(const ::com::facebook::internal::AppCall& arg0){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForCannotShowError", "(Lcom/facebook/internal/AppCall;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::DialogPresenter::setupAppCallForValidationError(const ::com::facebook::internal::AppCall& arg0, const ::com::facebook::FacebookException& arg1){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForValidationError", "(Lcom/facebook/internal/AppCall;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::DialogPresenter::present(const ::com::facebook::internal::AppCall& arg0, const ::android::app::Activity& arg1){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "present", "(Lcom/facebook/internal/AppCall;Landroid/app/Activity;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::DialogPresenter::present(const ::com::facebook::internal::AppCall& arg0, const ::android::support::v4::app::Fragment& arg1){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "present", "(Lcom/facebook/internal/AppCall;Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::internal::DialogPresenter::canPresentNativeDialogWithFeature(const ::com::facebook::internal::DialogFeature& arg0){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canPresentNativeDialogWithFeature", "(Lcom/facebook/internal/DialogFeature;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool com::facebook::internal::DialogPresenter::canPresentWebFallbackDialogWithFeature(const ::com::facebook::internal::DialogFeature& arg0){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "canPresentWebFallbackDialogWithFeature", "(Lcom/facebook/internal/DialogFeature;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::internal::DialogPresenter::setupAppCallForErrorResult(const ::com::facebook::internal::AppCall& arg0, const ::com::facebook::FacebookException& arg1){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForErrorResult", "(Lcom/facebook/internal/AppCall;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::DialogPresenter::setupAppCallForWebDialog(const ::com::facebook::internal::AppCall& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForWebDialog", "(Lcom/facebook/internal/AppCall;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::DialogPresenter::setupAppCallForWebFallbackDialog(const ::com::facebook::internal::AppCall& arg0, const ::android::os::Bundle& arg1, const ::com::facebook::internal::DialogFeature& arg2){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForWebFallbackDialog", "(Lcom/facebook/internal/AppCall;Landroid/os/Bundle;Lcom/facebook/internal/DialogFeature;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::DialogPresenter::setupAppCallForNativeDialog(const ::com::facebook::internal::AppCall& arg0, const ::com::facebook::internal::DialogPresenter_ParameterProvider& arg1, const ::com::facebook::internal::DialogFeature& arg2){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupAppCallForNativeDialog", "(Lcom/facebook/internal/AppCall;Lcom/facebook/internal/DialogPresenter$ParameterProvider;Lcom/facebook/internal/DialogFeature;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t com::facebook::internal::DialogPresenter::getProtocolVersionForNativeDialog(const ::com::facebook::internal::DialogFeature& arg0){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProtocolVersionForNativeDialog", "(Lcom/facebook/internal/DialogFeature;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

void com::facebook::internal::DialogPresenter::logDialogActivity(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::internal::DialogPresenter::_class) ::com::facebook::internal::DialogPresenter::_class = java::fetch_class("com/facebook/internal/DialogPresenter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "logDialogActivity", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::Object com::facebook::internal::FacebookDialogBase_ModeHandler::getMode() const {
    if (!::com::facebook::internal::FacebookDialogBase_ModeHandler::_class) ::com::facebook::internal::FacebookDialogBase_ModeHandler::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase$ModeHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void com::facebook::internal::FacebookDialogBase::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1) const {
    if (!::com::facebook::internal::FacebookDialogBase::_class) ::com::facebook::internal::FacebookDialogBase::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::FacebookDialogBase::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1, int32_t arg2) const {
    if (!::com::facebook::internal::FacebookDialogBase::_class) ::com::facebook::internal::FacebookDialogBase::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t com::facebook::internal::FacebookDialogBase::getRequestCode() const {
    if (!::com::facebook::internal::FacebookDialogBase::_class) ::com::facebook::internal::FacebookDialogBase::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool com::facebook::internal::FacebookDialogBase::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::FacebookDialogBase::_class) ::com::facebook::internal::FacebookDialogBase::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::internal::FacebookDialogBase::show(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::FacebookDialogBase::_class) ::com::facebook::internal::FacebookDialogBase::_class = java::fetch_class("com/facebook/internal/FacebookDialogBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::FacebookDialogFragment::FacebookDialogFragment() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::DialogInterface_OnCancelListener((jobject)0), ::android::content::DialogInterface_OnDismissListener((jobject)0), ::android::support::v4::app::DialogFragment((jobject)0), ::android::support::v4::app::Fragment((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::internal::FacebookDialogFragment::setDialog(const ::android::app::Dialog& arg0) const {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDialog", "(Landroid/app/Dialog;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::FacebookDialogFragment::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::app::Dialog com::facebook::internal::FacebookDialogFragment::onCreateDialog(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDialog", "(Landroid/os/Bundle;)Landroid/app/Dialog;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::app::Dialog _ret(ret);
    return _ret;
}

void com::facebook::internal::FacebookDialogFragment::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::FacebookDialogFragment::onDestroyView() const {
    if (!::com::facebook::internal::FacebookDialogFragment::_class) ::com::facebook::internal::FacebookDialogFragment::_class = java::fetch_class("com/facebook/internal/FacebookDialogFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Map com::facebook::internal::FacebookRequestErrorClassification::getOtherErrors() const {
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOtherErrors", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Map com::facebook::internal::FacebookRequestErrorClassification::getTransientErrors() const {
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransientErrors", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Map com::facebook::internal::FacebookRequestErrorClassification::getLoginRecoverableErrors() const {
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoginRecoverableErrors", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::FacebookRequestErrorClassification::getRecoveryMessage(const ::com::facebook::FacebookRequestError_Category& arg0) const {
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRecoveryMessage", "(Lcom/facebook/FacebookRequestError$Category;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::FacebookRequestError_Category com::facebook::internal::FacebookRequestErrorClassification::classify(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetMethodID(_class, "classify", "(IIZ)Lcom/facebook/FacebookRequestError$Category;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::com::facebook::FacebookRequestError_Category _ret(ret);
    return _ret;
}

::com::facebook::internal::FacebookRequestErrorClassification com::facebook::internal::FacebookRequestErrorClassification::getDefaultErrorClassification(){
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultErrorClassification", "()Lcom/facebook/internal/FacebookRequestErrorClassification;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::internal::FacebookRequestErrorClassification _ret(ret);
    return _ret;
}

::com::facebook::internal::FacebookRequestErrorClassification com::facebook::internal::FacebookRequestErrorClassification::createFromJSON(const ::org::json::JSONArray& arg0){
    if (!::com::facebook::internal::FacebookRequestErrorClassification::_class) ::com::facebook::internal::FacebookRequestErrorClassification::_class = java::fetch_class("com/facebook/internal/FacebookRequestErrorClassification");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromJSON", "(Lorg/json/JSONArray;)Lcom/facebook/internal/FacebookRequestErrorClassification;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::FacebookRequestErrorClassification _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::FacebookWebFallbackDialog::FacebookWebFallbackDialog(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0), ::com::facebook::internal::WebDialog((jobject)0) {
    if (!::com::facebook::internal::FacebookWebFallbackDialog::_class) ::com::facebook::internal::FacebookWebFallbackDialog::_class = java::fetch_class("com/facebook/internal/FacebookWebFallbackDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void com::facebook::internal::FacebookWebFallbackDialog::cancel() const {
    if (!::com::facebook::internal::FacebookWebFallbackDialog::_class) ::com::facebook::internal::FacebookWebFallbackDialog::_class = java::fetch_class("com/facebook/internal/FacebookWebFallbackDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::FileLruCache_CloseCallbackOutputStream::close() const {
    if (!::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class) ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CloseCallbackOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::FileLruCache_CloseCallbackOutputStream::flush() const {
    if (!::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class) ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CloseCallbackOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::FileLruCache_CloseCallbackOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class) ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CloseCallbackOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::FileLruCache_CloseCallbackOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class) ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CloseCallbackOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::FileLruCache_CloseCallbackOutputStream::write(int32_t arg0) const {
    if (!::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class) ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CloseCallbackOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t com::facebook::internal::FileLruCache_CopyingInputStream::available() const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "available", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::internal::FileLruCache_CopyingInputStream::close() const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::FileLruCache_CopyingInputStream::mark(int32_t arg0) const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "mark", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::internal::FileLruCache_CopyingInputStream::markSupported() const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "markSupported", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t com::facebook::internal::FileLruCache_CopyingInputStream::read(const std::vector< int8_t>& arg0) const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t com::facebook::internal::FileLruCache_CopyingInputStream::read() const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::internal::FileLruCache_CopyingInputStream::read(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([BII)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::FileLruCache_CopyingInputStream::reset() const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int64_t com::facebook::internal::FileLruCache_CopyingInputStream::skip(int64_t arg0) const {
    if (!::com::facebook::internal::FileLruCache_CopyingInputStream::_class) ::com::facebook::internal::FileLruCache_CopyingInputStream::_class = java::fetch_class("com/facebook/internal/FileLruCache$CopyingInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::FileLruCache_Limits::FileLruCache_Limits() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::FileLruCache_Limits::_class) ::com::facebook::internal::FileLruCache_Limits::_class = java::fetch_class("com/facebook/internal/FileLruCache$Limits");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t com::facebook::internal::FileLruCache_ModifiedFile::compareTo(const ::com::facebook::internal::FileLruCache_ModifiedFile& arg0) const {
    if (!::com::facebook::internal::FileLruCache_ModifiedFile::_class) ::com::facebook::internal::FileLruCache_ModifiedFile::_class = java::fetch_class("com/facebook/internal/FileLruCache$ModifiedFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Lcom/facebook/internal/FileLruCache$ModifiedFile;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool com::facebook::internal::FileLruCache_ModifiedFile::equals(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::FileLruCache_ModifiedFile::_class) ::com::facebook::internal::FileLruCache_ModifiedFile::_class = java::fetch_class("com/facebook/internal/FileLruCache$ModifiedFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t com::facebook::internal::FileLruCache_ModifiedFile::hashCode() const {
    if (!::com::facebook::internal::FileLruCache_ModifiedFile::_class) ::com::facebook::internal::FileLruCache_ModifiedFile::_class = java::fetch_class("com/facebook/internal/FileLruCache$ModifiedFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::internal::FileLruCache_ModifiedFile::compareTo(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::FileLruCache_ModifiedFile::_class) ::com::facebook::internal::FileLruCache_ModifiedFile::_class = java::fetch_class("com/facebook/internal/FileLruCache$ModifiedFile");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void com::facebook::internal::FileLruCache_StreamCloseCallback::onClose() const {
    if (!::com::facebook::internal::FileLruCache_StreamCloseCallback::_class) ::com::facebook::internal::FileLruCache_StreamCloseCallback::_class = java::fetch_class("com/facebook/internal/FileLruCache$StreamCloseCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::FileLruCache::FileLruCache(const ::java::lang::String& arg0, const ::com::facebook::internal::FileLruCache_Limits& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Lcom/facebook/internal/FileLruCache$Limits;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::io::InputStream com::facebook::internal::FileLruCache::get(const ::java::lang::String& arg0) const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::InputStream com::facebook::internal::FileLruCache::get(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream com::facebook::internal::FileLruCache::openPutStream(const ::java::lang::String& arg0) const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPutStream", "(Ljava/lang/String;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream com::facebook::internal::FileLruCache::openPutStream(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPutStream", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void com::facebook::internal::FileLruCache::clearCache() const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearCache", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String com::facebook::internal::FileLruCache::getLocation() const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocation", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::InputStream com::facebook::internal::FileLruCache::interceptAndPut(const ::java::lang::String& arg0, const ::java::io::InputStream& arg1) const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "interceptAndPut", "(Ljava/lang/String;Ljava/io/InputStream;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::FileLruCache::toString() const {
    if (!::com::facebook::internal::FileLruCache::_class) ::com::facebook::internal::FileLruCache::_class = java::fetch_class("com/facebook/internal/FileLruCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::GraphUtil::GraphUtil() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::GraphUtil::_class) ::com::facebook::internal::GraphUtil::_class = java::fetch_class("com/facebook/internal/GraphUtil");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::org::json::JSONObject com::facebook::internal::GraphUtil::createOpenGraphActionForPost(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::GraphUtil::_class) ::com::facebook::internal::GraphUtil::_class = java::fetch_class("com/facebook/internal/GraphUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createOpenGraphActionForPost", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::internal::GraphUtil::createOpenGraphObjectForPost(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::GraphUtil::_class) ::com::facebook::internal::GraphUtil::_class = java::fetch_class("com/facebook/internal/GraphUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createOpenGraphObjectForPost", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::internal::GraphUtil::createOpenGraphObjectForPost(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::org::json::JSONObject& arg5, const ::java::lang::String& arg6){
    if (!::com::facebook::internal::GraphUtil::_class) ::com::facebook::internal::GraphUtil::_class = java::fetch_class("com/facebook/internal/GraphUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createOpenGraphObjectForPost", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

bool com::facebook::internal::GraphUtil::isOpenGraphObjectForPost(const ::org::json::JSONObject& arg0){
    if (!::com::facebook::internal::GraphUtil::_class) ::com::facebook::internal::GraphUtil::_class = java::fetch_class("com/facebook/internal/GraphUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isOpenGraphObjectForPost", "(Lorg/json/JSONObject;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::internal::ImageDownloader_CacheReadWorkItem::run() const {
    if (!::com::facebook::internal::ImageDownloader_CacheReadWorkItem::_class) ::com::facebook::internal::ImageDownloader_CacheReadWorkItem::_class = java::fetch_class("com/facebook/internal/ImageDownloader$CacheReadWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::ImageDownloader_DownloadImageWorkItem::run() const {
    if (!::com::facebook::internal::ImageDownloader_DownloadImageWorkItem::_class) ::com::facebook::internal::ImageDownloader_DownloadImageWorkItem::_class = java::fetch_class("com/facebook/internal/ImageDownloader$DownloadImageWorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t com::facebook::internal::ImageDownloader_RequestKey::hashCode() const {
    if (!::com::facebook::internal::ImageDownloader_RequestKey::_class) ::com::facebook::internal::ImageDownloader_RequestKey::_class = java::fetch_class("com/facebook/internal/ImageDownloader$RequestKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool com::facebook::internal::ImageDownloader_RequestKey::equals(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::ImageDownloader_RequestKey::_class) ::com::facebook::internal::ImageDownloader_RequestKey::_class = java::fetch_class("com/facebook/internal/ImageDownloader$RequestKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::ImageDownloader::ImageDownloader() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::ImageDownloader::_class) ::com::facebook::internal::ImageDownloader::_class = java::fetch_class("com/facebook/internal/ImageDownloader");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::internal::ImageDownloader::downloadAsync(const ::com::facebook::internal::ImageRequest& arg0){
    if (!::com::facebook::internal::ImageDownloader::_class) ::com::facebook::internal::ImageDownloader::_class = java::fetch_class("com/facebook/internal/ImageDownloader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "downloadAsync", "(Lcom/facebook/internal/ImageRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool com::facebook::internal::ImageDownloader::cancelRequest(const ::com::facebook::internal::ImageRequest& arg0){
    if (!::com::facebook::internal::ImageDownloader::_class) ::com::facebook::internal::ImageDownloader::_class = java::fetch_class("com/facebook/internal/ImageDownloader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cancelRequest", "(Lcom/facebook/internal/ImageRequest;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::internal::ImageDownloader::prioritizeRequest(const ::com::facebook::internal::ImageRequest& arg0){
    if (!::com::facebook::internal::ImageDownloader::_class) ::com::facebook::internal::ImageDownloader::_class = java::fetch_class("com/facebook/internal/ImageDownloader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "prioritizeRequest", "(Lcom/facebook/internal/ImageRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::ImageDownloader::clearCache(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::ImageDownloader::_class) ::com::facebook::internal::ImageDownloader::_class = java::fetch_class("com/facebook/internal/ImageDownloader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearCache", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::ImageRequest_Builder::ImageRequest_Builder(const ::android::content::Context& arg0, const ::android::net::Uri& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::ImageRequest_Builder::_class) ::com::facebook::internal::ImageRequest_Builder::_class = java::fetch_class("com/facebook/internal/ImageRequest$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::internal::ImageRequest_Builder com::facebook::internal::ImageRequest_Builder::setCallback(const ::com::facebook::internal::ImageRequest_Callback& arg0) const {
    if (!::com::facebook::internal::ImageRequest_Builder::_class) ::com::facebook::internal::ImageRequest_Builder::_class = java::fetch_class("com/facebook/internal/ImageRequest$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Lcom/facebook/internal/ImageRequest$Callback;)Lcom/facebook/internal/ImageRequest$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::ImageRequest_Builder _ret(ret);
    return _ret;
}

::com::facebook::internal::ImageRequest_Builder com::facebook::internal::ImageRequest_Builder::setCallerTag(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::ImageRequest_Builder::_class) ::com::facebook::internal::ImageRequest_Builder::_class = java::fetch_class("com/facebook/internal/ImageRequest$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallerTag", "(Ljava/lang/Object;)Lcom/facebook/internal/ImageRequest$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::ImageRequest_Builder _ret(ret);
    return _ret;
}

::com::facebook::internal::ImageRequest_Builder com::facebook::internal::ImageRequest_Builder::setAllowCachedRedirects(bool arg0) const {
    if (!::com::facebook::internal::ImageRequest_Builder::_class) ::com::facebook::internal::ImageRequest_Builder::_class = java::fetch_class("com/facebook/internal/ImageRequest$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowCachedRedirects", "(Z)Lcom/facebook/internal/ImageRequest$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::ImageRequest_Builder _ret(ret);
    return _ret;
}

::com::facebook::internal::ImageRequest com::facebook::internal::ImageRequest_Builder::build() const {
    if (!::com::facebook::internal::ImageRequest_Builder::_class) ::com::facebook::internal::ImageRequest_Builder::_class = java::fetch_class("com/facebook/internal/ImageRequest$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/internal/ImageRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::ImageRequest _ret(ret);
    return _ret;
}

void com::facebook::internal::ImageRequest_Callback::onCompleted(const ::com::facebook::internal::ImageResponse& arg0) const {
    if (!::com::facebook::internal::ImageRequest_Callback::_class) ::com::facebook::internal::ImageRequest_Callback::_class = java::fetch_class("com/facebook/internal/ImageRequest$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompleted", "(Lcom/facebook/internal/ImageResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::net::Uri com::facebook::internal::ImageRequest::getProfilePictureUri(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2){
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProfilePictureUri", "(Ljava/lang/String;II)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::content::Context com::facebook::internal::ImageRequest::getContext() const {
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::internal::ImageRequest::getImageUri() const {
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImageUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::com::facebook::internal::ImageRequest_Callback com::facebook::internal::ImageRequest::getCallback() const {
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Lcom/facebook/internal/ImageRequest$Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::ImageRequest_Callback _ret(ret);
    return _ret;
}

bool com::facebook::internal::ImageRequest::isCachedRedirectAllowed() const {
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCachedRedirectAllowed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object com::facebook::internal::ImageRequest::getCallerTag() const {
    if (!::com::facebook::internal::ImageRequest::_class) ::com::facebook::internal::ImageRequest::_class = java::fetch_class("com/facebook/internal/ImageRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallerTag", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::com::facebook::internal::ImageRequest com::facebook::internal::ImageResponse::getRequest() const {
    if (!::com::facebook::internal::ImageResponse::_class) ::com::facebook::internal::ImageResponse::_class = java::fetch_class("com/facebook/internal/ImageResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequest", "()Lcom/facebook/internal/ImageRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::ImageRequest _ret(ret);
    return _ret;
}

::java::lang::Exception com::facebook::internal::ImageResponse::getError() const {
    if (!::com::facebook::internal::ImageResponse::_class) ::com::facebook::internal::ImageResponse::_class = java::fetch_class("com/facebook/internal/ImageResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "()Ljava/lang/Exception;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Exception _ret(ret);
    return _ret;
}

::android::graphics::Bitmap com::facebook::internal::ImageResponse::getBitmap() const {
    if (!::com::facebook::internal::ImageResponse::_class) ::com::facebook::internal::ImageResponse::_class = java::fetch_class("com/facebook/internal/ImageResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

bool com::facebook::internal::ImageResponse::isCachedRedirect() const {
    if (!::com::facebook::internal::ImageResponse::_class) ::com::facebook::internal::ImageResponse::_class = java::fetch_class("com/facebook/internal/ImageResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCachedRedirect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::internal::ImageResponseCache_BufferedHttpInputStream::close() const {
    if (!::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream::_class) ::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream::_class = java::fetch_class("com/facebook/internal/ImageResponseCache$BufferedHttpInputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String com::facebook::internal::JsonUtil_JSONObjectEntry::getKey() const {
    if (!::com::facebook::internal::JsonUtil_JSONObjectEntry::_class) ::com::facebook::internal::JsonUtil_JSONObjectEntry::_class = java::fetch_class("com/facebook/internal/JsonUtil$JSONObjectEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::internal::JsonUtil_JSONObjectEntry::getValue() const {
    if (!::com::facebook::internal::JsonUtil_JSONObjectEntry::_class) ::com::facebook::internal::JsonUtil_JSONObjectEntry::_class = java::fetch_class("com/facebook/internal/JsonUtil$JSONObjectEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::internal::JsonUtil_JSONObjectEntry::setValue(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::JsonUtil_JSONObjectEntry::_class) ::com::facebook::internal::JsonUtil_JSONObjectEntry::_class = java::fetch_class("com/facebook/internal/JsonUtil$JSONObjectEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void com::facebook::internal::Logger::registerStringToReplace(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerStringToReplace", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Logger::registerAccessToken(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "registerAccessToken", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::Logger::log(const ::com::facebook::LoggingBehavior& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log", "(Lcom/facebook/LoggingBehavior;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::Logger::log(const ::com::facebook::LoggingBehavior& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::Object>& arg3){
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log", "(Lcom/facebook/LoggingBehavior;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::Object& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void com::facebook::internal::Logger::log(const ::com::facebook::LoggingBehavior& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3){
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "log", "(Lcom/facebook/LoggingBehavior;ILjava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::Logger::Logger(const ::com::facebook::LoggingBehavior& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/LoggingBehavior;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t com::facebook::internal::Logger::getPriority() const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPriority", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::internal::Logger::setPriority(int32_t arg0) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPriority", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::internal::Logger::getContents() const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContents", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::internal::Logger::log() const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "log", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::Logger::logString(const ::java::lang::String& arg0) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "logString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::Logger::append(const ::java::lang::StringBuilder& arg0) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/StringBuilder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::Logger::append(const ::java::lang::String& arg0) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::Logger::append(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::Logger::appendKeyValue(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::com::facebook::internal::Logger::_class) ::com::facebook::internal::Logger::_class = java::fetch_class("com/facebook/internal/Logger");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendKeyValue", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::internal::LoginAuthorizationType> com::facebook::internal::LoginAuthorizationType::values(){
    if (!::com::facebook::internal::LoginAuthorizationType::_class) ::com::facebook::internal::LoginAuthorizationType::_class = java::fetch_class("com/facebook/internal/LoginAuthorizationType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/internal/LoginAuthorizationType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::internal::LoginAuthorizationType> _ret(rets, ::com::facebook::internal::LoginAuthorizationType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::internal::LoginAuthorizationType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::internal::LoginAuthorizationType com::facebook::internal::LoginAuthorizationType::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::LoginAuthorizationType::_class) ::com::facebook::internal::LoginAuthorizationType::_class = java::fetch_class("com/facebook/internal/LoginAuthorizationType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/internal/LoginAuthorizationType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::LoginAuthorizationType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::Mutable::Mutable(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::Mutable::_class) ::com::facebook::internal::Mutable::_class = java::fetch_class("com/facebook/internal/Mutable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::internal::NativeAppCallAttachmentStore_Attachment::getAttachmentUrl() const {
    if (!::com::facebook::internal::NativeAppCallAttachmentStore_Attachment::_class) ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore$Attachment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttachmentUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::internal::NativeAppCallAttachmentStore_Attachment com::facebook::internal::NativeAppCallAttachmentStore::createAttachment(const ::java::util::UUID& arg0, const ::android::graphics::Bitmap& arg1){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createAttachment", "(Ljava/util/UUID;Landroid/graphics/Bitmap;)Lcom/facebook/internal/NativeAppCallAttachmentStore$Attachment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment _ret(ret);
    return _ret;
}

::com::facebook::internal::NativeAppCallAttachmentStore_Attachment com::facebook::internal::NativeAppCallAttachmentStore::createAttachment(const ::java::util::UUID& arg0, const ::android::net::Uri& arg1){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createAttachment", "(Ljava/util/UUID;Landroid/net/Uri;)Lcom/facebook/internal/NativeAppCallAttachmentStore$Attachment;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::internal::NativeAppCallAttachmentStore_Attachment _ret(ret);
    return _ret;
}

void com::facebook::internal::NativeAppCallAttachmentStore::addAttachments(const ::java::util::Collection& arg0){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addAttachments", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::NativeAppCallAttachmentStore::cleanupAttachmentsForCall(const ::java::util::UUID& arg0){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cleanupAttachmentsForCall", "(Ljava/util/UUID;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::io::File com::facebook::internal::NativeAppCallAttachmentStore::openAttachment(const ::java::util::UUID& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "openAttachment", "(Ljava/util/UUID;Ljava/lang/String;)Ljava/io/File;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::File _ret(ret);
    return _ret;
}

void com::facebook::internal::NativeAppCallAttachmentStore::cleanupAllAttachments(){
    if (!::com::facebook::internal::NativeAppCallAttachmentStore::_class) ::com::facebook::internal::NativeAppCallAttachmentStore::_class = java::fetch_class("com/facebook/internal/NativeAppCallAttachmentStore");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cleanupAllAttachments", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

bool com::facebook::internal::NativeProtocol_NativeAppInfo::validateSignature(const ::android::content::Context& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::internal::NativeProtocol_NativeAppInfo::_class) ::com::facebook::internal::NativeProtocol_NativeAppInfo::_class = java::fetch_class("com/facebook/internal/NativeProtocol$NativeAppInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "validateSignature", "(Landroid/content/Context;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::NativeProtocol::NativeProtocol() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::content::Intent com::facebook::internal::NativeProtocol::createProxyAuthIntent(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::util::Collection& arg2, const ::java::lang::String& arg3, bool arg4, const ::com::facebook::login::DefaultAudience& arg5){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createProxyAuthIntent", "(Landroid/content/Context;Ljava/lang/String;Ljava/util/Collection;Ljava/lang/String;ZLcom/facebook/login/DefaultAudience;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent com::facebook::internal::NativeProtocol::createTokenRefreshIntent(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createTokenRefreshIntent", "(Landroid/content/Context;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::NativeProtocol::getLatestKnownVersion(){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLatestKnownVersion", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool com::facebook::internal::NativeProtocol::isVersionCompatibleWithBucketedIntent(int32_t arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isVersionCompatibleWithBucketedIntent", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::content::Intent com::facebook::internal::NativeProtocol::createPlatformActivityIntent(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, const ::android::os::Bundle& arg4){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createPlatformActivityIntent", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILandroid/os/Bundle;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::content::Intent _ret(ret);
    return _ret;
}

void com::facebook::internal::NativeProtocol::setupProtocolRequestIntent(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, int32_t arg3, const ::android::os::Bundle& arg4){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setupProtocolRequestIntent", "(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;ILandroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::android::content::Intent com::facebook::internal::NativeProtocol::createProtocolResultIntent(const ::android::content::Intent& arg0, const ::android::os::Bundle& arg1, const ::com::facebook::FacebookException& arg2){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createProtocolResultIntent", "(Landroid/content/Intent;Landroid/os/Bundle;Lcom/facebook/FacebookException;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::content::Intent _ret(ret);
    return _ret;
}

::android::content::Intent com::facebook::internal::NativeProtocol::createPlatformServiceIntent(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createPlatformServiceIntent", "(Landroid/content/Context;)Landroid/content/Intent;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::content::Intent _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::NativeProtocol::getProtocolVersionFromIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProtocolVersionFromIntent", "(Landroid/content/Intent;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

::java::util::UUID com::facebook::internal::NativeProtocol::getCallIdFromIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallIdFromIntent", "(Landroid/content/Intent;)Ljava/util/UUID;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::UUID _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::NativeProtocol::getBridgeArgumentsFromIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBridgeArgumentsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::NativeProtocol::getMethodArgumentsFromIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMethodArgumentsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::NativeProtocol::getSuccessResultsFromIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSuccessResultsFromIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

bool com::facebook::internal::NativeProtocol::isErrorResult(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isErrorResult", "(Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::android::os::Bundle com::facebook::internal::NativeProtocol::getErrorDataFromResultIntent(const ::android::content::Intent& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getErrorDataFromResultIntent", "(Landroid/content/Intent;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::com::facebook::FacebookException com::facebook::internal::NativeProtocol::getExceptionFromErrorData(const ::android::os::Bundle& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExceptionFromErrorData", "(Landroid/os/Bundle;)Lcom/facebook/FacebookException;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::FacebookException _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::NativeProtocol::createBundleForException(const ::com::facebook::FacebookException& arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createBundleForException", "(Lcom/facebook/FacebookException;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::NativeProtocol::getLatestAvailableProtocolVersionForService(int32_t arg0){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLatestAvailableProtocolVersionForService", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t com::facebook::internal::NativeProtocol::getLatestAvailableProtocolVersionForAction(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLatestAvailableProtocolVersionForAction", "(Ljava/lang/String;[I)I");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t com::facebook::internal::NativeProtocol::computeLatestAvailableVersionFromVersionSpec(const ::java::util::TreeSet& arg0, int32_t arg1, const std::vector< int32_t>& arg2){
    if (!::com::facebook::internal::NativeProtocol::_class) ::com::facebook::internal::NativeProtocol::_class = java::fetch_class("com/facebook/internal/NativeProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "computeLatestAvailableVersionFromVersionSpec", "(Ljava/util/TreeSet;I[I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

std::vector< ::com::facebook::internal::PermissionType> com::facebook::internal::PermissionType::values(){
    if (!::com::facebook::internal::PermissionType::_class) ::com::facebook::internal::PermissionType::_class = java::fetch_class("com/facebook/internal/PermissionType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/internal/PermissionType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::internal::PermissionType> _ret(rets, ::com::facebook::internal::PermissionType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::internal::PermissionType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::internal::PermissionType com::facebook::internal::PermissionType::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::PermissionType::_class) ::com::facebook::internal::PermissionType::_class = java::fetch_class("com/facebook/internal/PermissionType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/internal/PermissionType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::PermissionType _ret(ret);
    return _ret;
}

void com::facebook::internal::PlatformServiceClient_CompletedListener::completed(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::internal::PlatformServiceClient_CompletedListener::_class) ::com::facebook::internal::PlatformServiceClient_CompletedListener::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient$CompletedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "completed", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::PlatformServiceClient::PlatformServiceClient(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2, int32_t arg3, const ::java::lang::String& arg4) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;IIILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void com::facebook::internal::PlatformServiceClient::setCompletedListener(const ::com::facebook::internal::PlatformServiceClient_CompletedListener& arg0) const {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompletedListener", "(Lcom/facebook/internal/PlatformServiceClient$CompletedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::internal::PlatformServiceClient::start() const {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::internal::PlatformServiceClient::cancel() const {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::PlatformServiceClient::onServiceConnected(const ::android::content::ComponentName& arg0, const ::android::os::IBinder& arg1) const {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceConnected", "(Landroid/content/ComponentName;Landroid/os/IBinder;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::PlatformServiceClient::onServiceDisconnected(const ::android::content::ComponentName& arg0) const {
    if (!::com::facebook::internal::PlatformServiceClient::_class) ::com::facebook::internal::PlatformServiceClient::_class = java::fetch_class("com/facebook/internal/PlatformServiceClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onServiceDisconnected", "(Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::json::JSONObject com::facebook::internal::ProfileInformationCache::getProfileInformation(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::ProfileInformationCache::_class) ::com::facebook::internal::ProfileInformationCache::_class = java::fetch_class("com/facebook/internal/ProfileInformationCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getProfileInformation", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

void com::facebook::internal::ProfileInformationCache::putProfileInformation(const ::java::lang::String& arg0, const ::org::json::JSONObject& arg1){
    if (!::com::facebook::internal::ProfileInformationCache::_class) ::com::facebook::internal::ProfileInformationCache::_class = java::fetch_class("com/facebook/internal/ProfileInformationCache");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putProfileInformation", "(Ljava/lang/String;Lorg/json/JSONObject;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::ServerProtocol::ServerProtocol() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::internal::ServerProtocol::getDialogAuthority(){
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDialogAuthority", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::ServerProtocol::getGraphUrlBase(){
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGraphUrlBase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::ServerProtocol::getGraphVideoUrlBase(){
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGraphVideoUrlBase", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::ServerProtocol::getAPIVersion(){
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAPIVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::ServerProtocol::getQueryParamsForPlatformActivityIntentWebFallback(const ::java::lang::String& arg0, int32_t arg1, const ::android::os::Bundle& arg2){
    if (!::com::facebook::internal::ServerProtocol::_class) ::com::facebook::internal::ServerProtocol::_class = java::fetch_class("com/facebook/internal/ServerProtocol");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getQueryParamsForPlatformActivityIntentWebFallback", "(Ljava/lang/String;ILandroid/os/Bundle;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility_DialogFeatureConfig::getDialogName() const {
    if (!::com::facebook::internal::Utility_DialogFeatureConfig::_class) ::com::facebook::internal::Utility_DialogFeatureConfig::_class = java::fetch_class("com/facebook/internal/Utility$DialogFeatureConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility_DialogFeatureConfig::getFeatureName() const {
    if (!::com::facebook::internal::Utility_DialogFeatureConfig::_class) ::com::facebook::internal::Utility_DialogFeatureConfig::_class = java::fetch_class("com/facebook/internal/Utility$DialogFeatureConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeatureName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::internal::Utility_DialogFeatureConfig::getFallbackUrl() const {
    if (!::com::facebook::internal::Utility_DialogFeatureConfig::_class) ::com::facebook::internal::Utility_DialogFeatureConfig::_class = java::fetch_class("com/facebook/internal/Utility$DialogFeatureConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFallbackUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

std::vector< int32_t> com::facebook::internal::Utility_DialogFeatureConfig::getVersionSpec() const {
    if (!::com::facebook::internal::Utility_DialogFeatureConfig::_class) ::com::facebook::internal::Utility_DialogFeatureConfig::_class = java::fetch_class("com/facebook/internal/Utility$DialogFeatureConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersionSpec", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool com::facebook::internal::Utility_FetchedAppSettings::supportsImplicitLogging() const {
    if (!::com::facebook::internal::Utility_FetchedAppSettings::_class) ::com::facebook::internal::Utility_FetchedAppSettings::_class = java::fetch_class("com/facebook/internal/Utility$FetchedAppSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportsImplicitLogging", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String com::facebook::internal::Utility_FetchedAppSettings::getNuxContent() const {
    if (!::com::facebook::internal::Utility_FetchedAppSettings::_class) ::com::facebook::internal::Utility_FetchedAppSettings::_class = java::fetch_class("com/facebook/internal/Utility$FetchedAppSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNuxContent", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::internal::Utility_FetchedAppSettings::getNuxEnabled() const {
    if (!::com::facebook::internal::Utility_FetchedAppSettings::_class) ::com::facebook::internal::Utility_FetchedAppSettings::_class = java::fetch_class("com/facebook/internal/Utility$FetchedAppSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNuxEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Map com::facebook::internal::Utility_FetchedAppSettings::getDialogConfigurations() const {
    if (!::com::facebook::internal::Utility_FetchedAppSettings::_class) ::com::facebook::internal::Utility_FetchedAppSettings::_class = java::fetch_class("com/facebook/internal/Utility$FetchedAppSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDialogConfigurations", "()Ljava/util/Map;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::com::facebook::internal::FacebookRequestErrorClassification com::facebook::internal::Utility_FetchedAppSettings::getErrorClassification() const {
    if (!::com::facebook::internal::Utility_FetchedAppSettings::_class) ::com::facebook::internal::Utility_FetchedAppSettings::_class = java::fetch_class("com/facebook/internal/Utility$FetchedAppSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorClassification", "()Lcom/facebook/internal/FacebookRequestErrorClassification;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::FacebookRequestErrorClassification _ret(ret);
    return _ret;
}

void com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::onSuccess(const ::org::json::JSONObject& arg0) const {
    if (!::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::_class) ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::_class = java::fetch_class("com/facebook/internal/Utility$GraphMeRequestWithCacheCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lorg/json/JSONObject;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::onFailure(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::_class) ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback::_class = java::fetch_class("com/facebook/internal/Utility$GraphMeRequestWithCacheCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFailure", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object com::facebook::internal::Utility_Mapper::apply(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::Utility_Mapper::_class) ::com::facebook::internal::Utility_Mapper::_class = java::fetch_class("com/facebook/internal/Utility$Mapper");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::internal::Utility_Predicate::apply(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::internal::Utility_Predicate::_class) ::com::facebook::internal::Utility_Predicate::_class = java::fetch_class("com/facebook/internal/Utility$Predicate");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::Utility::Utility() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

std::vector< int32_t> com::facebook::internal::Utility::intersectRanges(const std::vector< int32_t>& arg0, const std::vector< int32_t>& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "intersectRanges", "([I[I)[I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool com::facebook::internal::Utility::isSubset(const ::java::util::Collection& arg0, const ::java::util::Collection& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSubset", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::internal::Utility::isNullOrEmpty(const ::java::util::Collection& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNullOrEmpty", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool com::facebook::internal::Utility::isNullOrEmpty(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNullOrEmpty", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::internal::Utility::coerceValueIfNullOrEmpty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "coerceValueIfNullOrEmpty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Collection com::facebook::internal::Utility::unmodifiableCollection(const std::vector< ::java::lang::Object>& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableCollection", "([Ljava/lang/Object;)Ljava/util/Collection;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::ArrayList com::facebook::internal::Utility::arrayList(const std::vector< ::java::lang::Object>& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "arrayList", "([Ljava/lang/Object;)Ljava/util/ArrayList;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::HashSet com::facebook::internal::Utility::hashSet(const std::vector< ::java::lang::Object>& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashSet", "([Ljava/lang/Object;)Ljava/util/HashSet;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::HashSet _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::md5hash(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "md5hash", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::sha1hash(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sha1hash", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::sha1hash(const std::vector< int8_t>& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sha1hash", "([B)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::internal::Utility::buildUri(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "buildUri", "(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::internal::Utility::parseUrlQueryString(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parseUrlQueryString", "(Ljava/lang/String;)Landroid/os/Bundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void com::facebook::internal::Utility::putNonEmptyString(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putNonEmptyString", "(Landroid/os/Bundle;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::Utility::putCommaSeparatedStringList(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::java::util::ArrayList& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putCommaSeparatedStringList", "(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::Utility::putUri(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::android::net::Uri& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putUri", "(Landroid/os/Bundle;Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool com::facebook::internal::Utility::putJSONValueInBundle(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putJSONValueInBundle", "(Landroid/os/Bundle;Ljava/lang/String;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::Utility::closeQuietly(const ::java::io::Closeable& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "closeQuietly", "(Ljava/io/Closeable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::Utility::disconnectQuietly(const ::java::net::URLConnection& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "disconnectQuietly", "(Ljava/net/URLConnection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::internal::Utility::getMetadataApplicationId(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMetadataApplicationId", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::internal::Utility::getStringPropertyAsJSON(const ::org::json::JSONObject& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getStringPropertyAsJSON", "(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::readStreamToString(const ::java::io::InputStream& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readStreamToString", "(Ljava/io/InputStream;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::Utility::copyAndCloseInputStream(const ::java::io::InputStream& arg0, const ::java::io::OutputStream& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyAndCloseInputStream", "(Ljava/io/InputStream;Ljava/io/OutputStream;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::internal::Utility::stringsEqualOrEmpty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stringsEqualOrEmpty", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Utility::clearFacebookCookies(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearFacebookCookies", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::Utility::logd(const ::java::lang::String& arg0, const ::java::lang::Exception& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "logd", "(Ljava/lang/String;Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Utility::logd(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "logd", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Utility::logd(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::Throwable& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "logd", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool com::facebook::internal::Utility::areObjectsEqual(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "areObjectsEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool com::facebook::internal::Utility::hasSameId(const ::org::json::JSONObject& arg0, const ::org::json::JSONObject& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasSameId", "(Lorg/json/JSONObject;Lorg/json/JSONObject;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Utility::loadAppSettingsAsync(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadAppSettingsAsync", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::com::facebook::internal::Utility_FetchedAppSettings com::facebook::internal::Utility::getAppSettingsWithoutQuery(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAppSettingsWithoutQuery", "(Ljava/lang/String;)Lcom/facebook/internal/Utility$FetchedAppSettings;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::internal::Utility_FetchedAppSettings _ret(ret);
    return _ret;
}

::com::facebook::internal::Utility_FetchedAppSettings com::facebook::internal::Utility::queryAppSettings(const ::java::lang::String& arg0, bool arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "queryAppSettings", "(Ljava/lang/String;Z)Lcom/facebook/internal/Utility$FetchedAppSettings;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::internal::Utility_FetchedAppSettings _ret(ret);
    return _ret;
}

::com::facebook::internal::Utility_DialogFeatureConfig com::facebook::internal::Utility::getDialogFeatureConfig(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDialogFeatureConfig", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/facebook/internal/Utility$DialogFeatureConfig;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::internal::Utility_DialogFeatureConfig _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::safeGetStringFromResponse(const ::org::json::JSONObject& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "safeGetStringFromResponse", "(Lorg/json/JSONObject;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::internal::Utility::tryGetJSONObjectFromResponse(const ::org::json::JSONObject& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tryGetJSONObjectFromResponse", "(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONArray com::facebook::internal::Utility::tryGetJSONArrayFromResponse(const ::org::json::JSONObject& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "tryGetJSONArrayFromResponse", "(Lorg/json/JSONObject;Ljava/lang/String;)Lorg/json/JSONArray;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

void com::facebook::internal::Utility::clearCaches(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearCaches", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::internal::Utility::deleteDirectory(const ::java::io::File& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deleteDirectory", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::util::List com::facebook::internal::Utility::asListNoNulls(const std::vector< ::java::lang::Object>& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asListNoNulls", "([Ljava/lang/Object;)Ljava/util/List;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::internal::Utility::jsonArrayToStringList(const ::org::json::JSONArray& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "jsonArrayToStringList", "(Lorg/json/JSONArray;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

void com::facebook::internal::Utility::setAppEventAttributionParameters(const ::org::json::JSONObject& arg0, const ::com::facebook::internal::AttributionIdentifiers& arg1, const ::java::lang::String& arg2, bool arg3){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAppEventAttributionParameters", "(Lorg/json/JSONObject;Lcom/facebook/internal/AttributionIdentifiers;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void com::facebook::internal::Utility::setAppEventExtendedDeviceInfoParameters(const ::org::json::JSONObject& arg0, const ::android::content::Context& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAppEventExtendedDeviceInfoParameters", "(Lorg/json/JSONObject;Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::reflect::Method com::facebook::internal::Utility::getMethodQuietly(const ::java::lang::Class& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Class>& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMethodQuietly", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Class& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

::java::lang::reflect::Method com::facebook::internal::Utility::getMethodQuietly(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Class>& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getMethodQuietly", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Class::_class) ::java::lang::Class::_class = java::fetch_class("java/lang/Class");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Class::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Class& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::reflect::Method _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::internal::Utility::invokeMethodQuietly(const ::java::lang::Object& arg0, const ::java::lang::reflect::Method& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "invokeMethodQuietly", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::getActivityName(const ::android::content::Context& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getActivityName", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List com::facebook::internal::Utility::filter(const ::java::util::List& arg0, const ::com::facebook::internal::Utility_Predicate& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "filter", "(Ljava/util/List;Lcom/facebook/internal/Utility$Predicate;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::internal::Utility::map(const ::java::util::List& arg0, const ::com::facebook::internal::Utility_Mapper& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "map", "(Ljava/util/List;Lcom/facebook/internal/Utility$Mapper;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::Utility::getUriString(const ::android::net::Uri& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getUriString", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::internal::Utility::isWebUri(const ::android::net::Uri& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isWebUri", "(Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool com::facebook::internal::Utility::isContentUri(const ::android::net::Uri& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isContentUri", "(Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool com::facebook::internal::Utility::isFileUri(const ::android::net::Uri& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isFileUri", "(Landroid/net/Uri;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::util::Date com::facebook::internal::Utility::getBundleLongAsDate(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1, const ::java::util::Date& arg2){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundleLongAsDate", "(Landroid/os/Bundle;Ljava/lang/String;Ljava/util/Date;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::Date _ret(ret);
    return _ret;
}

void com::facebook::internal::Utility::writeStringMapToParcel(const ::android::os::Parcel& arg0, const ::java::util::Map& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeStringMapToParcel", "(Landroid/os/Parcel;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Map com::facebook::internal::Utility::readStringMapFromParcel(const ::android::os::Parcel& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readStringMapFromParcel", "(Landroid/os/Parcel;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Map _ret(ret);
    return _ret;
}

bool com::facebook::internal::Utility::isCurrentAccessToken(const ::com::facebook::AccessToken& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isCurrentAccessToken", "(Lcom/facebook/AccessToken;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::internal::Utility::getGraphMeRequestWithCacheAsync(const ::java::lang::String& arg0, const ::com::facebook::internal::Utility_GraphMeRequestWithCacheCallback& arg1){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getGraphMeRequestWithCacheAsync", "(Ljava/lang/String;Lcom/facebook/internal/Utility$GraphMeRequestWithCacheCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::org::json::JSONObject com::facebook::internal::Utility::awaitGetGraphMeRequestWithCache(const ::java::lang::String& arg0){
    if (!::com::facebook::internal::Utility::_class) ::com::facebook::internal::Utility::_class = java::fetch_class("com/facebook/internal/Utility");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "awaitGetGraphMeRequestWithCache", "(Ljava/lang/String;)Lorg/json/JSONObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::Validate::Validate() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::internal::Validate::notNull(const ::java::lang::Object& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "notNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::notEmpty(const ::java::util::Collection& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "notEmpty", "(Ljava/util/Collection;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::containsNoNulls(const ::java::util::Collection& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "containsNoNulls", "(Ljava/util/Collection;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::containsNoNullOrEmpty(const ::java::util::Collection& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "containsNoNullOrEmpty", "(Ljava/util/Collection;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::notEmptyAndContainsNoNulls(const ::java::util::Collection& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "notEmptyAndContainsNoNulls", "(Ljava/util/Collection;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::notNullOrEmpty(const ::java::lang::String& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "notNullOrEmpty", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::internal::Validate::oneOf(const ::java::lang::Object& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "oneOf", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::Validate::sdkInitialized(){
    if (!::com::facebook::internal::Validate::_class) ::com::facebook::internal::Validate::_class = java::fetch_class("com/facebook/internal/Validate");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sdkInitialized", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WebDialog_Builder::WebDialog_Builder(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WebDialog_Builder::WebDialog_Builder(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::os::Bundle& arg3) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::com::facebook::internal::WebDialog_Builder com::facebook::internal::WebDialog_Builder::setTheme(int32_t arg0) const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTheme", "(I)Lcom/facebook/internal/WebDialog$Builder;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::WebDialog_Builder _ret(ret);
    return _ret;
}

::com::facebook::internal::WebDialog_Builder com::facebook::internal::WebDialog_Builder::setOnCompleteListener(const ::com::facebook::internal::WebDialog_OnCompleteListener& arg0) const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCompleteListener", "(Lcom/facebook/internal/WebDialog$OnCompleteListener;)Lcom/facebook/internal/WebDialog$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::WebDialog_Builder _ret(ret);
    return _ret;
}

::com::facebook::internal::WebDialog com::facebook::internal::WebDialog_Builder::build() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/internal/WebDialog;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::WebDialog _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::internal::WebDialog_Builder::getApplicationId() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::Context com::facebook::internal::WebDialog_Builder::getContext() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

int32_t com::facebook::internal::WebDialog_Builder::getTheme() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTheme", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::os::Bundle com::facebook::internal::WebDialog_Builder::getParameters() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::com::facebook::internal::WebDialog_OnCompleteListener com::facebook::internal::WebDialog_Builder::getListener() const {
    if (!::com::facebook::internal::WebDialog_Builder::_class) ::com::facebook::internal::WebDialog_Builder::_class = java::fetch_class("com/facebook/internal/WebDialog$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListener", "()Lcom/facebook/internal/WebDialog$OnCompleteListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::WebDialog_OnCompleteListener _ret(ret);
    return _ret;
}

bool com::facebook::internal::WebDialog_DialogWebViewClient::shouldOverrideUrlLoading(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::internal::WebDialog_DialogWebViewClient::_class) ::com::facebook::internal::WebDialog_DialogWebViewClient::_class = java::fetch_class("com/facebook/internal/WebDialog$DialogWebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldOverrideUrlLoading", "(Landroid/webkit/WebView;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::WebDialog_DialogWebViewClient::onReceivedError(const ::android::webkit::WebView& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::com::facebook::internal::WebDialog_DialogWebViewClient::_class) ::com::facebook::internal::WebDialog_DialogWebViewClient::_class = java::fetch_class("com/facebook/internal/WebDialog$DialogWebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedError", "(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void com::facebook::internal::WebDialog_DialogWebViewClient::onReceivedSslError(const ::android::webkit::WebView& arg0, const ::android::webkit::SslErrorHandler& arg1, const ::android::net::http::SslError& arg2) const {
    if (!::com::facebook::internal::WebDialog_DialogWebViewClient::_class) ::com::facebook::internal::WebDialog_DialogWebViewClient::_class = java::fetch_class("com/facebook/internal/WebDialog$DialogWebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedSslError", "(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::WebDialog_DialogWebViewClient::onPageStarted(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::android::graphics::Bitmap& arg2) const {
    if (!::com::facebook::internal::WebDialog_DialogWebViewClient::_class) ::com::facebook::internal::WebDialog_DialogWebViewClient::_class = java::fetch_class("com/facebook/internal/WebDialog$DialogWebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageStarted", "(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::internal::WebDialog_DialogWebViewClient::onPageFinished(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::internal::WebDialog_DialogWebViewClient::_class) ::com::facebook::internal::WebDialog_DialogWebViewClient::_class = java::fetch_class("com/facebook/internal/WebDialog$DialogWebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageFinished", "(Landroid/webkit/WebView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::WebDialog_OnCompleteListener::onComplete(const ::android::os::Bundle& arg0, const ::com::facebook::FacebookException& arg1) const {
    if (!::com::facebook::internal::WebDialog_OnCompleteListener::_class) ::com::facebook::internal::WebDialog_OnCompleteListener::_class = java::fetch_class("com/facebook/internal/WebDialog$OnCompleteListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onComplete", "(Landroid/os/Bundle;Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WebDialog::WebDialog(const ::android::content::Context& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WebDialog::WebDialog(const ::android::content::Context& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WebDialog::WebDialog(const ::android::content::Context& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, int32_t arg3, const ::com::facebook::internal::WebDialog_OnCompleteListener& arg4) : ::java::lang::Object((jobject)0), ::android::app::Dialog((jobject)0), ::android::content::DialogInterface((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;ILcom/facebook/internal/WebDialog$OnCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void com::facebook::internal::WebDialog::setOnCompleteListener(const ::com::facebook::internal::WebDialog_OnCompleteListener& arg0) const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCompleteListener", "(Lcom/facebook/internal/WebDialog$OnCompleteListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::internal::WebDialog_OnCompleteListener com::facebook::internal::WebDialog::getOnCompleteListener() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnCompleteListener", "()Lcom/facebook/internal/WebDialog$OnCompleteListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::internal::WebDialog_OnCompleteListener _ret(ret);
    return _ret;
}

bool com::facebook::internal::WebDialog::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::internal::WebDialog::dismiss() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::WebDialog::onDetachedFromWindow() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::WebDialog::onAttachedToWindow() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::WebDialog::resize() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "resize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::internal::WebDialog::cancel() const {
    if (!::com::facebook::internal::WebDialog::_class) ::com::facebook::internal::WebDialog::_class = java::fetch_class("com/facebook/internal/WebDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::internal::WorkQueue_WorkItem::cancel() const {
    if (!::com::facebook::internal::WorkQueue_WorkItem::_class) ::com::facebook::internal::WorkQueue_WorkItem::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool com::facebook::internal::WorkQueue_WorkItem::isRunning() const {
    if (!::com::facebook::internal::WorkQueue_WorkItem::_class) ::com::facebook::internal::WorkQueue_WorkItem::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::internal::WorkQueue_WorkItem::moveToFront() const {
    if (!::com::facebook::internal::WorkQueue_WorkItem::_class) ::com::facebook::internal::WorkQueue_WorkItem::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFront", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::internal::WorkQueue_WorkNode::cancel() const {
    if (!::com::facebook::internal::WorkQueue_WorkNode::_class) ::com::facebook::internal::WorkQueue_WorkNode::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::internal::WorkQueue_WorkNode::moveToFront() const {
    if (!::com::facebook::internal::WorkQueue_WorkNode::_class) ::com::facebook::internal::WorkQueue_WorkNode::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveToFront", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::internal::WorkQueue_WorkNode::isRunning() const {
    if (!::com::facebook::internal::WorkQueue_WorkNode::_class) ::com::facebook::internal::WorkQueue_WorkNode::_class = java::fetch_class("com/facebook/internal/WorkQueue$WorkNode");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WorkQueue::WorkQueue() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WorkQueue::WorkQueue(int32_t arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::internal::WorkQueue::WorkQueue(int32_t arg0, const ::java::util::concurrent::Executor& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/concurrent/Executor;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::internal::WorkQueue_WorkItem com::facebook::internal::WorkQueue::addActiveWorkItem(const ::java::lang::Runnable& arg0) const {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "addActiveWorkItem", "(Ljava/lang/Runnable;)Lcom/facebook/internal/WorkQueue$WorkItem;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::internal::WorkQueue_WorkItem _ret(ret);
    return _ret;
}

::com::facebook::internal::WorkQueue_WorkItem com::facebook::internal::WorkQueue::addActiveWorkItem(const ::java::lang::Runnable& arg0, bool arg1) const {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "addActiveWorkItem", "(Ljava/lang/Runnable;Z)Lcom/facebook/internal/WorkQueue$WorkItem;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::internal::WorkQueue_WorkItem _ret(ret);
    return _ret;
}

void com::facebook::internal::WorkQueue::validate() const {
    if (!::com::facebook::internal::WorkQueue::_class) ::com::facebook::internal::WorkQueue::_class = java::fetch_class("com/facebook/internal/WorkQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "validate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

