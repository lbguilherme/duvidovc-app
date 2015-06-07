#include "java-core.hpp"
#include <memory>
#include "android.content.ContentValues.hpp"
#include "android.content.Context.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.Configuration.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.location.Location.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Handler.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.ParcelFileDescriptor.hpp"
#include "android.os.Parcelable.hpp"
#include "android.support.v4.app.Fragment.hpp"
#include "android.view.View.hpp"
#include "com.facebook.AccessToken.hpp"
#include "com.facebook.AccessTokenCache.hpp"
#include "com.facebook.AccessTokenManager.hpp"
#include "com.facebook.AccessTokenSource.hpp"
#include "com.facebook.AccessTokenTracker.hpp"
#include "com.facebook.BuildConfig.hpp"
#include "com.facebook.CallbackManager.hpp"
#include "com.facebook.FacebookActivity.hpp"
#include "com.facebook.FacebookAuthorizationException.hpp"
#include "com.facebook.FacebookBroadcastReceiver.hpp"
#include "com.facebook.FacebookButtonBase.hpp"
#include "com.facebook.FacebookCallback.hpp"
#include "com.facebook.FacebookContentProvider.hpp"
#include "com.facebook.FacebookDialog.hpp"
#include "com.facebook.FacebookDialogException.hpp"
#include "com.facebook.FacebookException.hpp"
#include "com.facebook.FacebookGraphResponseException.hpp"
#include "com.facebook.FacebookOperationCanceledException.hpp"
#include "com.facebook.FacebookRequestError.hpp"
#include "com.facebook.FacebookSdk.hpp"
#include "com.facebook.FacebookSdkNotInitializedException.hpp"
#include "com.facebook.FacebookSdkVersion.hpp"
#include "com.facebook.FacebookServiceException.hpp"
#include "com.facebook.GraphRequest.hpp"
#include "com.facebook.GraphRequestAsyncTask.hpp"
#include "com.facebook.GraphRequestBatch.hpp"
#include "com.facebook.GraphResponse.hpp"
#include "com.facebook.HttpMethod.hpp"
#include "com.facebook.LegacyTokenHelper.hpp"
#include "com.facebook.LoggingBehavior.hpp"
#include "com.facebook.Profile.hpp"
#include "com.facebook.ProfileCache.hpp"
#include "com.facebook.ProfileManager.hpp"
#include "com.facebook.ProfileTracker.hpp"
#include "com.facebook.ProgressNoopOutputStream.hpp"
#include "com.facebook.ProgressOutputStream.hpp"
#include "com.facebook.R.hpp"
#include "com.facebook.RequestOutputStream.hpp"
#include "com.facebook.RequestProgress.hpp"
#include "com.facebook.TestUserManager.hpp"
#include "com.facebook.internal.Logger.hpp"
#include "java.io.File.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.net.HttpURLConnection.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Date.hpp"
#include "java.util.List.hpp"
#include "java.util.Set.hpp"
#include "java.util.UUID.hpp"
#include "java.util.concurrent.Executor.hpp"
#include "org.json.JSONArray.hpp"
#include "org.json.JSONObject.hpp"

jclass com::facebook::AccessToken_AccessTokenCreationCallback::_class = nullptr;
jclass com::facebook::AccessToken::_class = nullptr;
jclass com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory::_class = nullptr;
jclass com::facebook::AccessTokenCache::_class = nullptr;
jclass com::facebook::AccessTokenManager_RefreshResult::_class = nullptr;
jclass com::facebook::AccessTokenManager::_class = nullptr;
jclass com::facebook::AccessTokenSource::_class = nullptr;
jclass com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver::_class = nullptr;
jclass com::facebook::AccessTokenTracker::_class = nullptr;
jclass com::facebook::BuildConfig::_class = nullptr;
jclass com::facebook::CallbackManager_Factory::_class = nullptr;
jclass com::facebook::CallbackManager::_class = nullptr;
jclass com::facebook::FacebookActivity::_class = nullptr;
jclass com::facebook::FacebookAuthorizationException::_class = nullptr;
jclass com::facebook::FacebookBroadcastReceiver::_class = nullptr;
jclass com::facebook::FacebookButtonBase::_class = nullptr;
jclass com::facebook::FacebookCallback::_class = nullptr;
jclass com::facebook::FacebookContentProvider::_class = nullptr;
jclass com::facebook::FacebookDialog::_class = nullptr;
jclass com::facebook::FacebookDialogException::_class = nullptr;
jclass com::facebook::FacebookException::_class = nullptr;
jclass com::facebook::FacebookGraphResponseException::_class = nullptr;
jclass com::facebook::FacebookOperationCanceledException::_class = nullptr;
jclass com::facebook::FacebookRequestError_Category::_class = nullptr;
jclass com::facebook::FacebookRequestError_Range::_class = nullptr;
jclass com::facebook::FacebookRequestError::_class = nullptr;
jclass com::facebook::FacebookSdk::_class = nullptr;
jclass com::facebook::FacebookSdkNotInitializedException::_class = nullptr;
jclass com::facebook::FacebookSdkVersion::_class = nullptr;
jclass com::facebook::FacebookServiceException::_class = nullptr;
jclass com::facebook::GraphRequest_Attachment::_class = nullptr;
jclass com::facebook::GraphRequest_Callback::_class = nullptr;
jclass com::facebook::GraphRequest_GraphJSONArrayCallback::_class = nullptr;
jclass com::facebook::GraphRequest_GraphJSONObjectCallback::_class = nullptr;
jclass com::facebook::GraphRequest_KeyValueSerializer::_class = nullptr;
jclass com::facebook::GraphRequest_OnProgressCallback::_class = nullptr;
jclass com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = nullptr;
jclass com::facebook::GraphRequest_Serializer::_class = nullptr;
jclass com::facebook::GraphRequest::_class = nullptr;
jclass com::facebook::GraphRequestAsyncTask::_class = nullptr;
jclass com::facebook::GraphRequestBatch_Callback::_class = nullptr;
jclass com::facebook::GraphRequestBatch_OnProgressCallback::_class = nullptr;
jclass com::facebook::GraphRequestBatch::_class = nullptr;
jclass com::facebook::GraphResponse_PagingDirection::_class = nullptr;
jclass com::facebook::GraphResponse::_class = nullptr;
jclass com::facebook::HttpMethod::_class = nullptr;
jclass com::facebook::LegacyTokenHelper::_class = nullptr;
jclass com::facebook::LoggingBehavior::_class = nullptr;
jclass com::facebook::Profile::_class = nullptr;
jclass com::facebook::ProfileCache::_class = nullptr;
jclass com::facebook::ProfileManager::_class = nullptr;
jclass com::facebook::ProfileTracker_ProfileBroadcastReceiver::_class = nullptr;
jclass com::facebook::ProfileTracker::_class = nullptr;
jclass com::facebook::ProgressNoopOutputStream::_class = nullptr;
jclass com::facebook::ProgressOutputStream::_class = nullptr;
jclass com::facebook::RequestOutputStream::_class = nullptr;
jclass com::facebook::RequestProgress::_class = nullptr;
jclass com::facebook::TestUserManager_Mode::_class = nullptr;
jclass com::facebook::TestUserManager::_class = nullptr;
jclass com::facebook::R_string::_class = nullptr;
jclass com::facebook::R_dimen::_class = nullptr;
jclass com::facebook::R_id::_class = nullptr;
jclass com::facebook::R_layout::_class = nullptr;
jclass com::facebook::R_styleable::_class = nullptr;
jclass com::facebook::R_style::_class = nullptr;
jclass com::facebook::R::_class = nullptr;
jclass com::facebook::R_drawable::_class = nullptr;
jclass com::facebook::R_color::_class = nullptr;
jclass com::facebook::R_attr::_class = nullptr;

void com::facebook::AccessToken_AccessTokenCreationCallback::onSuccess(const ::com::facebook::AccessToken& arg0) const {
    if (!::com::facebook::AccessToken_AccessTokenCreationCallback::_class) ::com::facebook::AccessToken_AccessTokenCreationCallback::_class = java::fetch_class("com/facebook/AccessToken$AccessTokenCreationCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Lcom/facebook/AccessToken;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::AccessToken_AccessTokenCreationCallback::onError(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::AccessToken_AccessTokenCreationCallback::_class) ::com::facebook::AccessToken_AccessTokenCreationCallback::_class = java::fetch_class("com/facebook/AccessToken$AccessTokenCreationCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::AccessToken::AccessToken(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::util::Collection& arg3, const ::java::util::Collection& arg4, const ::com::facebook::AccessTokenSource& arg5, const ::java::util::Date& arg6, const ::java::util::Date& arg7) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;Ljava/util/Collection;Lcom/facebook/AccessTokenSource;Ljava/util/Date;Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    jobject _arg7 = arg7.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

::com::facebook::AccessToken com::facebook::AccessToken::getCurrentAccessToken(){
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentAccessToken", "()Lcom/facebook/AccessToken;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

void com::facebook::AccessToken::setCurrentAccessToken(const ::com::facebook::AccessToken& arg0){
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCurrentAccessToken", "(Lcom/facebook/AccessToken;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::AccessToken::refreshCurrentAccessTokenAsync(){
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "refreshCurrentAccessTokenAsync", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

::java::lang::String com::facebook::AccessToken::getToken() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getToken", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Date com::facebook::AccessToken::getExpires() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpires", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::util::Set com::facebook::AccessToken::getPermissions() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissions", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set com::facebook::AccessToken::getDeclinedPermissions() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeclinedPermissions", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::com::facebook::AccessTokenSource com::facebook::AccessToken::getSource() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()Lcom/facebook/AccessTokenSource;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::AccessTokenSource _ret(ret);
    return _ret;
}

::java::util::Date com::facebook::AccessToken::getLastRefresh() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastRefresh", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::AccessToken::getApplicationId() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::AccessToken::getUserId() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::AccessToken::createFromNativeLinkingIntent(const ::android::content::Intent& arg0, const ::java::lang::String& arg1, const ::com::facebook::AccessToken_AccessTokenCreationCallback& arg2){
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromNativeLinkingIntent", "(Landroid/content/Intent;Ljava/lang/String;Lcom/facebook/AccessToken$AccessTokenCreationCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

::java::lang::String com::facebook::AccessToken::toString() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::AccessToken::equals(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t com::facebook::AccessToken::hashCode() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool com::facebook::AccessToken::isExpired() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExpired", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t com::facebook::AccessToken::describeContents() const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::AccessToken::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::AccessToken::_class) ::com::facebook::AccessToken::_class = java::fetch_class("com/facebook/AccessToken");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::com::facebook::LegacyTokenHelper com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory::create() const {
    if (!::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory::_class) ::com::facebook::AccessTokenCache_SharedPreferencesTokenCachingStrategyFactory::_class = java::fetch_class("com/facebook/AccessTokenCache$SharedPreferencesTokenCachingStrategyFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "create", "()Lcom/facebook/LegacyTokenHelper;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::LegacyTokenHelper _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::AccessTokenCache::AccessTokenCache() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::AccessTokenCache::_class) ::com::facebook::AccessTokenCache::_class = java::fetch_class("com/facebook/AccessTokenCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::AccessToken com::facebook::AccessTokenCache::load() const {
    if (!::com::facebook::AccessTokenCache::_class) ::com::facebook::AccessTokenCache::_class = java::fetch_class("com/facebook/AccessTokenCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "()Lcom/facebook/AccessToken;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

void com::facebook::AccessTokenCache::save(const ::com::facebook::AccessToken& arg0) const {
    if (!::com::facebook::AccessTokenCache::_class) ::com::facebook::AccessTokenCache::_class = java::fetch_class("com/facebook/AccessTokenCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(Lcom/facebook/AccessToken;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::AccessTokenCache::clear() const {
    if (!::com::facebook::AccessTokenCache::_class) ::com::facebook::AccessTokenCache::_class = java::fetch_class("com/facebook/AccessTokenCache");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::com::facebook::AccessTokenSource> com::facebook::AccessTokenSource::values(){
    if (!::com::facebook::AccessTokenSource::_class) ::com::facebook::AccessTokenSource::_class = java::fetch_class("com/facebook/AccessTokenSource");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/AccessTokenSource;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::AccessTokenSource> _ret(rets, ::com::facebook::AccessTokenSource((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::AccessTokenSource retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::AccessTokenSource com::facebook::AccessTokenSource::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::AccessTokenSource::_class) ::com::facebook::AccessTokenSource::_class = java::fetch_class("com/facebook/AccessTokenSource");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/AccessTokenSource;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::AccessTokenSource _ret(ret);
    return _ret;
}

void com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver::_class) ::com::facebook::AccessTokenTracker_CurrentAccessTokenBroadcastReceiver::_class = java::fetch_class("com/facebook/AccessTokenTracker$CurrentAccessTokenBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::AccessTokenTracker::AccessTokenTracker() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::AccessTokenTracker::_class) ::com::facebook::AccessTokenTracker::_class = java::fetch_class("com/facebook/AccessTokenTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::AccessTokenTracker::startTracking() const {
    if (!::com::facebook::AccessTokenTracker::_class) ::com::facebook::AccessTokenTracker::_class = java::fetch_class("com/facebook/AccessTokenTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::AccessTokenTracker::stopTracking() const {
    if (!::com::facebook::AccessTokenTracker::_class) ::com::facebook::AccessTokenTracker::_class = java::fetch_class("com/facebook/AccessTokenTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopTracking", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::AccessTokenTracker::isTracking() const {
    if (!::com::facebook::AccessTokenTracker::_class) ::com::facebook::AccessTokenTracker::_class = java::fetch_class("com/facebook/AccessTokenTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::BuildConfig::BuildConfig() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::BuildConfig::_class) ::com::facebook::BuildConfig::_class = java::fetch_class("com/facebook/BuildConfig");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::CallbackManager_Factory::CallbackManager_Factory() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::CallbackManager_Factory::_class) ::com::facebook::CallbackManager_Factory::_class = java::fetch_class("com/facebook/CallbackManager$Factory");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::CallbackManager com::facebook::CallbackManager_Factory::create(){
    if (!::com::facebook::CallbackManager_Factory::_class) ::com::facebook::CallbackManager_Factory::_class = java::fetch_class("com/facebook/CallbackManager$Factory");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "()Lcom/facebook/CallbackManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::CallbackManager _ret(ret);
    return _ret;
}

bool com::facebook::CallbackManager::onActivityResult(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::com::facebook::CallbackManager::_class) ::com::facebook::CallbackManager::_class = java::fetch_class("com/facebook/CallbackManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActivityResult", "(IILandroid/content/Intent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookActivity::FacebookActivity() : ::java::lang::Object((jobject)0), ::android::app::Activity((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0), ::android::support::v4::app::FragmentActivity((jobject)0), ::android::view::ContextThemeWrapper((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::LayoutInflater_Factory((jobject)0), ::android::view::LayoutInflater_Factory2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0), ::android::view::Window_Callback((jobject)0) {
    if (!::com::facebook::FacebookActivity::_class) ::com::facebook::FacebookActivity::_class = java::fetch_class("com/facebook/FacebookActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::FacebookActivity::onCreate(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::FacebookActivity::_class) ::com::facebook::FacebookActivity::_class = java::fetch_class("com/facebook/FacebookActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::FacebookActivity::onConfigurationChanged(const ::android::content::res::Configuration& arg0) const {
    if (!::com::facebook::FacebookActivity::_class) ::com::facebook::FacebookActivity::_class = java::fetch_class("com/facebook/FacebookActivity");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConfigurationChanged", "(Landroid/content/res/Configuration;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookAuthorizationException::FacebookAuthorizationException() : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookAuthorizationException::_class) ::com::facebook::FacebookAuthorizationException::_class = java::fetch_class("com/facebook/FacebookAuthorizationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookAuthorizationException::FacebookAuthorizationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookAuthorizationException::_class) ::com::facebook::FacebookAuthorizationException::_class = java::fetch_class("com/facebook/FacebookAuthorizationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookAuthorizationException::FacebookAuthorizationException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookAuthorizationException::_class) ::com::facebook::FacebookAuthorizationException::_class = java::fetch_class("com/facebook/FacebookAuthorizationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookAuthorizationException::FacebookAuthorizationException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookAuthorizationException::_class) ::com::facebook::FacebookAuthorizationException::_class = java::fetch_class("com/facebook/FacebookAuthorizationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookBroadcastReceiver::FacebookBroadcastReceiver() : ::java::lang::Object((jobject)0), ::android::content::BroadcastReceiver((jobject)0) {
    if (!::com::facebook::FacebookBroadcastReceiver::_class) ::com::facebook::FacebookBroadcastReceiver::_class = java::fetch_class("com/facebook/FacebookBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::FacebookBroadcastReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::FacebookBroadcastReceiver::_class) ::com::facebook::FacebookBroadcastReceiver::_class = java::fetch_class("com/facebook/FacebookBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::FacebookButtonBase::setFragment(const ::android::support::v4::app::Fragment& arg0) const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFragment", "(Landroid/support/v4/app/Fragment;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::app::Fragment com::facebook::FacebookButtonBase::getFragment() const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFragment", "()Landroid/support/v4/app/Fragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::app::Fragment _ret(ret);
    return _ret;
}

void com::facebook::FacebookButtonBase::setOnClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t com::facebook::FacebookButtonBase::getRequestCode() const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::FacebookButtonBase::getCompoundPaddingLeft() const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::FacebookButtonBase::getCompoundPaddingRight() const {
    if (!::com::facebook::FacebookButtonBase::_class) ::com::facebook::FacebookButtonBase::_class = java::fetch_class("com/facebook/FacebookButtonBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::FacebookCallback::onSuccess(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::FacebookCallback::_class) ::com::facebook::FacebookCallback::_class = java::fetch_class("com/facebook/FacebookCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuccess", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::FacebookCallback::onCancel() const {
    if (!::com::facebook::FacebookCallback::_class) ::com::facebook::FacebookCallback::_class = java::fetch_class("com/facebook/FacebookCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::FacebookCallback::onError(const ::com::facebook::FacebookException& arg0) const {
    if (!::com::facebook::FacebookCallback::_class) ::com::facebook::FacebookCallback::_class = java::fetch_class("com/facebook/FacebookCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onError", "(Lcom/facebook/FacebookException;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookContentProvider::FacebookContentProvider() : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::FacebookContentProvider::getAttachmentUrl(const ::java::lang::String& arg0, const ::java::util::UUID& arg1, const ::java::lang::String& arg2){
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAttachmentUrl", "(Ljava/lang/String;Ljava/util/UUID;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::FacebookContentProvider::onCreate() const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::database::Cursor com::facebook::FacebookContentProvider::query(const ::android::net::Uri& arg0, const std::vector< ::java::lang::String>& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3, const ::java::lang::String& arg4) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "query", "(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookContentProvider::getType(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "(Landroid/net/Uri;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::FacebookContentProvider::insert(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t com::facebook::FacebookContentProvider::delete_(const ::android::net::Uri& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::String>& arg2) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "delete_", "(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t com::facebook::FacebookContentProvider::update(const ::android::net::Uri& arg0, const ::android::content::ContentValues& arg1, const ::java::lang::String& arg2, const std::vector< ::java::lang::String>& arg3) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::os::ParcelFileDescriptor com::facebook::FacebookContentProvider::openFile(const ::android::net::Uri& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::FacebookContentProvider::_class) ::com::facebook::FacebookContentProvider::_class = java::fetch_class("com/facebook/FacebookContentProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openFile", "(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::os::ParcelFileDescriptor _ret(ret);
    return _ret;
}

bool com::facebook::FacebookDialog::canShow(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::FacebookDialog::_class) ::com::facebook::FacebookDialog::_class = java::fetch_class("com/facebook/FacebookDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "canShow", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::FacebookDialog::show(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::FacebookDialog::_class) ::com::facebook::FacebookDialog::_class = java::fetch_class("com/facebook/FacebookDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::FacebookDialog::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1) const {
    if (!::com::facebook::FacebookDialog::_class) ::com::facebook::FacebookDialog::_class = java::fetch_class("com/facebook/FacebookDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::FacebookDialog::registerCallback(const ::com::facebook::CallbackManager& arg0, const ::com::facebook::FacebookCallback& arg1, int32_t arg2) const {
    if (!::com::facebook::FacebookDialog::_class) ::com::facebook::FacebookDialog::_class = java::fetch_class("com/facebook/FacebookDialog");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerCallback", "(Lcom/facebook/CallbackManager;Lcom/facebook/FacebookCallback;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookDialogException::FacebookDialogException(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookDialogException::_class) ::com::facebook::FacebookDialogException::_class = java::fetch_class("com/facebook/FacebookDialogException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t com::facebook::FacebookDialogException::getErrorCode() const {
    if (!::com::facebook::FacebookDialogException::_class) ::com::facebook::FacebookDialogException::_class = java::fetch_class("com/facebook/FacebookDialogException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String com::facebook::FacebookDialogException::getFailingUrl() const {
    if (!::com::facebook::FacebookDialogException::_class) ::com::facebook::FacebookDialogException::_class = java::fetch_class("com/facebook/FacebookDialogException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFailingUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookDialogException::toString() const {
    if (!::com::facebook::FacebookDialogException::_class) ::com::facebook::FacebookDialogException::_class = java::fetch_class("com/facebook/FacebookDialogException");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookException::FacebookException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookException::FacebookException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookException::FacebookException(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookException::FacebookException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookException::FacebookException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::FacebookException::toString() const {
    if (!::com::facebook::FacebookException::_class) ::com::facebook::FacebookException::_class = java::fetch_class("com/facebook/FacebookException");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookGraphResponseException::FacebookGraphResponseException(const ::com::facebook::GraphResponse& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookGraphResponseException::_class) ::com::facebook::FacebookGraphResponseException::_class = java::fetch_class("com/facebook/FacebookGraphResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/GraphResponse;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::GraphResponse com::facebook::FacebookGraphResponseException::getGraphResponse() const {
    if (!::com::facebook::FacebookGraphResponseException::_class) ::com::facebook::FacebookGraphResponseException::_class = java::fetch_class("com/facebook/FacebookGraphResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGraphResponse", "()Lcom/facebook/GraphResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphResponse _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookGraphResponseException::toString() const {
    if (!::com::facebook::FacebookGraphResponseException::_class) ::com::facebook::FacebookGraphResponseException::_class = java::fetch_class("com/facebook/FacebookGraphResponseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookOperationCanceledException::FacebookOperationCanceledException() : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookOperationCanceledException::_class) ::com::facebook::FacebookOperationCanceledException::_class = java::fetch_class("com/facebook/FacebookOperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookOperationCanceledException::FacebookOperationCanceledException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookOperationCanceledException::_class) ::com::facebook::FacebookOperationCanceledException::_class = java::fetch_class("com/facebook/FacebookOperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookOperationCanceledException::FacebookOperationCanceledException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookOperationCanceledException::_class) ::com::facebook::FacebookOperationCanceledException::_class = java::fetch_class("com/facebook/FacebookOperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookOperationCanceledException::FacebookOperationCanceledException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookOperationCanceledException::_class) ::com::facebook::FacebookOperationCanceledException::_class = java::fetch_class("com/facebook/FacebookOperationCanceledException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::com::facebook::FacebookRequestError_Category> com::facebook::FacebookRequestError_Category::values(){
    if (!::com::facebook::FacebookRequestError_Category::_class) ::com::facebook::FacebookRequestError_Category::_class = java::fetch_class("com/facebook/FacebookRequestError$Category");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/FacebookRequestError$Category;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::FacebookRequestError_Category> _ret(rets, ::com::facebook::FacebookRequestError_Category((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::FacebookRequestError_Category retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::FacebookRequestError_Category com::facebook::FacebookRequestError_Category::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::FacebookRequestError_Category::_class) ::com::facebook::FacebookRequestError_Category::_class = java::fetch_class("com/facebook/FacebookRequestError$Category");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/FacebookRequestError$Category;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::FacebookRequestError_Category _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookRequestError::FacebookRequestError(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::com::facebook::FacebookRequestError_Category com::facebook::FacebookRequestError::getCategory() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCategory", "()Lcom/facebook/FacebookRequestError$Category;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::FacebookRequestError_Category _ret(ret);
    return _ret;
}

int32_t com::facebook::FacebookRequestError::getRequestStatusCode() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestStatusCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::FacebookRequestError::getErrorCode() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::FacebookRequestError::getSubErrorCode() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubErrorCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String com::facebook::FacebookRequestError::getErrorType() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookRequestError::getErrorMessage() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookRequestError::getErrorRecoveryMessage() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorRecoveryMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookRequestError::getErrorUserMessage() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorUserMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookRequestError::getErrorUserTitle() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getErrorUserTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::FacebookRequestError::getRequestResultBody() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestResultBody", "()Lorg/json/JSONObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::FacebookRequestError::getRequestResult() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestResult", "()Lorg/json/JSONObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::FacebookRequestError::getBatchRequestResult() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBatchRequestResult", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::net::HttpURLConnection com::facebook::FacebookRequestError::getConnection() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/net/HttpURLConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::HttpURLConnection _ret(ret);
    return _ret;
}

::com::facebook::FacebookException com::facebook::FacebookRequestError::getException() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getException", "()Lcom/facebook/FacebookException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::FacebookException _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookRequestError::toString() const {
    if (!::com::facebook::FacebookRequestError::_class) ::com::facebook::FacebookRequestError::_class = java::fetch_class("com/facebook/FacebookRequestError");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookSdk::FacebookSdk() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::FacebookSdk::sdkInitialize(const ::android::content::Context& arg0, int32_t arg1){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sdkInitialize", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::FacebookSdk::sdkInitialize(const ::android::content::Context& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sdkInitialize", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool com::facebook::FacebookSdk::isInitialized(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isInitialized", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::java::util::Set com::facebook::FacebookSdk::getLoggingBehaviors(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLoggingBehaviors", "()Ljava/util/Set;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::addLoggingBehavior(const ::com::facebook::LoggingBehavior& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addLoggingBehavior", "(Lcom/facebook/LoggingBehavior;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::FacebookSdk::removeLoggingBehavior(const ::com::facebook::LoggingBehavior& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "removeLoggingBehavior", "(Lcom/facebook/LoggingBehavior;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::FacebookSdk::clearLoggingBehaviors(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearLoggingBehaviors", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

bool com::facebook::FacebookSdk::isLoggingBehaviorEnabled(const ::com::facebook::LoggingBehavior& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLoggingBehaviorEnabled", "(Lcom/facebook/LoggingBehavior;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool com::facebook::FacebookSdk::isDebugEnabled(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDebugEnabled", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::FacebookSdk::setIsDebugEnabled(bool arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setIsDebugEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool com::facebook::FacebookSdk::isLegacyTokenUpgradeSupported(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isLegacyTokenUpgradeSupported", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void com::facebook::FacebookSdk::setLegacyTokenUpgradeSupported(bool arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLegacyTokenUpgradeSupported", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::util::concurrent::Executor com::facebook::FacebookSdk::getExecutor(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExecutor", "()Ljava/util/concurrent/Executor;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::concurrent::Executor _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setExecutor(const ::java::util::concurrent::Executor& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setExecutor", "(Ljava/util/concurrent/Executor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::FacebookSdk::getFacebookDomain(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFacebookDomain", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setFacebookDomain(const ::java::lang::String& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setFacebookDomain", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::android::content::Context com::facebook::FacebookSdk::getApplicationContext(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getApplicationContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::publishInstallAsync(const ::android::content::Context& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "publishInstallAsync", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String com::facebook::FacebookSdk::getSdkVersion(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSdkVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool com::facebook::FacebookSdk::getLimitEventAndDataUsage(const ::android::content::Context& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLimitEventAndDataUsage", "(Landroid/content/Context;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void com::facebook::FacebookSdk::setLimitEventAndDataUsage(const ::android::content::Context& arg0, bool arg1){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setLimitEventAndDataUsage", "(Landroid/content/Context;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t com::facebook::FacebookSdk::getOnProgressThreshold(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getOnProgressThreshold", "()J");
    return java::jni->CallStaticLongMethod(_class, mid);
}

void com::facebook::FacebookSdk::setOnProgressThreshold(int64_t arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOnProgressThreshold", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::FacebookSdk::getApplicationSignature(const ::android::content::Context& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getApplicationSignature", "(Landroid/content/Context;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookSdk::getApplicationId(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setApplicationId(const ::java::lang::String& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setApplicationId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::FacebookSdk::getApplicationName(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getApplicationName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setApplicationName(const ::java::lang::String& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setApplicationName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::FacebookSdk::getClientToken(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getClientToken", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setClientToken(const ::java::lang::String& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setClientToken", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t com::facebook::FacebookSdk::getWebDialogTheme(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getWebDialogTheme", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

void com::facebook::FacebookSdk::setWebDialogTheme(int32_t arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setWebDialogTheme", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::io::File com::facebook::FacebookSdk::getCacheDir(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCacheDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

void com::facebook::FacebookSdk::setCacheDir(const ::java::io::File& arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCacheDir", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

int32_t com::facebook::FacebookSdk::getCallbackRequestCodeOffset(){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCallbackRequestCodeOffset", "()I");
    return java::jni->CallStaticIntMethod(_class, mid);
}

bool com::facebook::FacebookSdk::isFacebookRequestCode(int32_t arg0){
    if (!::com::facebook::FacebookSdk::_class) ::com::facebook::FacebookSdk::_class = java::fetch_class("com/facebook/FacebookSdk");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isFacebookRequestCode", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookSdkNotInitializedException::FacebookSdkNotInitializedException() : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookSdkNotInitializedException::_class) ::com::facebook::FacebookSdkNotInitializedException::_class = java::fetch_class("com/facebook/FacebookSdkNotInitializedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookSdkNotInitializedException::FacebookSdkNotInitializedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookSdkNotInitializedException::_class) ::com::facebook::FacebookSdkNotInitializedException::_class = java::fetch_class("com/facebook/FacebookSdkNotInitializedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookSdkNotInitializedException::FacebookSdkNotInitializedException(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookSdkNotInitializedException::_class) ::com::facebook::FacebookSdkNotInitializedException::_class = java::fetch_class("com/facebook/FacebookSdkNotInitializedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookSdkNotInitializedException::FacebookSdkNotInitializedException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookSdkNotInitializedException::_class) ::com::facebook::FacebookSdkNotInitializedException::_class = java::fetch_class("com/facebook/FacebookSdkNotInitializedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::FacebookServiceException::FacebookServiceException(const ::com::facebook::FacebookRequestError& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::com::facebook::FacebookException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::com::facebook::FacebookServiceException::_class) ::com::facebook::FacebookServiceException::_class = java::fetch_class("com/facebook/FacebookServiceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/FacebookRequestError;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::FacebookRequestError com::facebook::FacebookServiceException::getRequestError() const {
    if (!::com::facebook::FacebookServiceException::_class) ::com::facebook::FacebookServiceException::_class = java::fetch_class("com/facebook/FacebookServiceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestError", "()Lcom/facebook/FacebookRequestError;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::FacebookRequestError _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::FacebookServiceException::toString() const {
    if (!::com::facebook::FacebookServiceException::_class) ::com::facebook::FacebookServiceException::_class = java::fetch_class("com/facebook/FacebookServiceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest_Attachment::GraphRequest_Attachment(const ::com::facebook::GraphRequest& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest_Attachment::_class) ::com::facebook::GraphRequest_Attachment::_class = java::fetch_class("com/facebook/GraphRequest$Attachment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/GraphRequest;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::GraphRequest com::facebook::GraphRequest_Attachment::getRequest() const {
    if (!::com::facebook::GraphRequest_Attachment::_class) ::com::facebook::GraphRequest_Attachment::_class = java::fetch_class("com/facebook/GraphRequest$Attachment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequest", "()Lcom/facebook/GraphRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::GraphRequest_Attachment::getValue() const {
    if (!::com::facebook::GraphRequest_Attachment::_class) ::com::facebook::GraphRequest_Attachment::_class = java::fetch_class("com/facebook/GraphRequest$Attachment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest_Callback::onCompleted(const ::com::facebook::GraphResponse& arg0) const {
    if (!::com::facebook::GraphRequest_Callback::_class) ::com::facebook::GraphRequest_Callback::_class = java::fetch_class("com/facebook/GraphRequest$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompleted", "(Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequest_GraphJSONArrayCallback::onCompleted(const ::org::json::JSONArray& arg0, const ::com::facebook::GraphResponse& arg1) const {
    if (!::com::facebook::GraphRequest_GraphJSONArrayCallback::_class) ::com::facebook::GraphRequest_GraphJSONArrayCallback::_class = java::fetch_class("com/facebook/GraphRequest$GraphJSONArrayCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompleted", "(Lorg/json/JSONArray;Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_GraphJSONObjectCallback::onCompleted(const ::org::json::JSONObject& arg0, const ::com::facebook::GraphResponse& arg1) const {
    if (!::com::facebook::GraphRequest_GraphJSONObjectCallback::_class) ::com::facebook::GraphRequest_GraphJSONObjectCallback::_class = java::fetch_class("com/facebook/GraphRequest$GraphJSONObjectCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCompleted", "(Lorg/json/JSONObject;Lcom/facebook/GraphResponse;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_KeyValueSerializer::writeString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::GraphRequest_KeyValueSerializer::_class) ::com::facebook::GraphRequest_KeyValueSerializer::_class = java::fetch_class("com/facebook/GraphRequest$KeyValueSerializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_OnProgressCallback::onProgress(int64_t arg0, int64_t arg1) const {
    if (!::com::facebook::GraphRequest_OnProgressCallback::_class) ::com::facebook::GraphRequest_OnProgressCallback::_class = java::fetch_class("com/facebook/GraphRequest$OnProgressCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProgress", "(JJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String com::facebook::GraphRequest_ParcelableResourceWithMimeType::getMimeType() const {
    if (!::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class) ::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = java::fetch_class("com/facebook/GraphRequest$ParcelableResourceWithMimeType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::os::Parcelable com::facebook::GraphRequest_ParcelableResourceWithMimeType::getResource() const {
    if (!::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class) ::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = java::fetch_class("com/facebook/GraphRequest$ParcelableResourceWithMimeType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getResource", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

int32_t com::facebook::GraphRequest_ParcelableResourceWithMimeType::describeContents() const {
    if (!::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class) ::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = java::fetch_class("com/facebook/GraphRequest$ParcelableResourceWithMimeType");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::GraphRequest_ParcelableResourceWithMimeType::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class) ::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = java::fetch_class("com/facebook/GraphRequest$ParcelableResourceWithMimeType");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest_ParcelableResourceWithMimeType::GraphRequest_ParcelableResourceWithMimeType(const ::android::os::Parcelable& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class) ::com::facebook::GraphRequest_ParcelableResourceWithMimeType::_class = java::fetch_class("com/facebook/GraphRequest$ParcelableResourceWithMimeType");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcelable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest_Serializer::GraphRequest_Serializer(const ::java::io::OutputStream& arg0, const ::com::facebook::internal::Logger& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::com::facebook::GraphRequest_KeyValueSerializer((jobject)0) {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Lcom/facebook/internal/Logger;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void com::facebook::GraphRequest_Serializer::writeObject(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::com::facebook::GraphRequest& arg2) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeObject", "(Ljava/lang/String;Ljava/lang/Object;Lcom/facebook/GraphRequest;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::GraphRequest_Serializer::writeRequestsAsJson(const ::java::lang::String& arg0, const ::org::json::JSONArray& arg1, const ::java::util::Collection& arg2) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeRequestsAsJson", "(Ljava/lang/String;Lorg/json/JSONArray;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::GraphRequest_Serializer::writeString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeString", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_Serializer::writeBitmap(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBitmap", "(Ljava/lang/String;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_Serializer::writeBytes(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeBytes", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequest_Serializer::writeContentUri(const ::java::lang::String& arg0, const ::android::net::Uri& arg1, const ::java::lang::String& arg2) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeContentUri", "(Ljava/lang/String;Landroid/net/Uri;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::GraphRequest_Serializer::writeFile(const ::java::lang::String& arg0, const ::android::os::ParcelFileDescriptor& arg1, const ::java::lang::String& arg2) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeFile", "(Ljava/lang/String;Landroid/os/ParcelFileDescriptor;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::GraphRequest_Serializer::writeRecordBoundary() const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeRecordBoundary", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::GraphRequest_Serializer::writeContentDisposition(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeContentDisposition", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::GraphRequest_Serializer::write(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/lang/String;[Ljava/lang/Object;)V");
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

void com::facebook::GraphRequest_Serializer::writeLine(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::com::facebook::GraphRequest_Serializer::_class) ::com::facebook::GraphRequest_Serializer::_class = java::fetch_class("com/facebook/GraphRequest$Serializer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeLine", "(Ljava/lang/String;[Ljava/lang/Object;)V");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest::GraphRequest() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest::GraphRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/AccessToken;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest::GraphRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::com::facebook::HttpMethod& arg3) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/AccessToken;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/HttpMethod;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest::GraphRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::com::facebook::HttpMethod& arg3, const ::com::facebook::GraphRequest_Callback& arg4) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/AccessToken;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/HttpMethod;Lcom/facebook/GraphRequest$Callback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequest::GraphRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2, const ::com::facebook::HttpMethod& arg3, const ::com::facebook::GraphRequest_Callback& arg4, const ::java::lang::String& arg5) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/AccessToken;Ljava/lang/String;Landroid/os/Bundle;Lcom/facebook/HttpMethod;Lcom/facebook/GraphRequest$Callback;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::com::facebook::GraphRequest com::facebook::GraphRequest::newDeleteObjectRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newDeleteObjectRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newMeRequest(const ::com::facebook::AccessToken& arg0, const ::com::facebook::GraphRequest_GraphJSONObjectCallback& arg1){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newMeRequest", "(Lcom/facebook/AccessToken;Lcom/facebook/GraphRequest$GraphJSONObjectCallback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newPostRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::org::json::JSONObject& arg2, const ::com::facebook::GraphRequest_Callback& arg3){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPostRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Lorg/json/JSONObject;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newMyFriendsRequest(const ::com::facebook::AccessToken& arg0, const ::com::facebook::GraphRequest_GraphJSONArrayCallback& arg1){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newMyFriendsRequest", "(Lcom/facebook/AccessToken;Lcom/facebook/GraphRequest$GraphJSONArrayCallback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newGraphPathRequest(const ::com::facebook::AccessToken& arg0, const ::java::lang::String& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newGraphPathRequest", "(Lcom/facebook/AccessToken;Ljava/lang/String;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newPlacesSearchRequest(const ::com::facebook::AccessToken& arg0, const ::android::location::Location& arg1, int32_t arg2, int32_t arg3, const ::java::lang::String& arg4, const ::com::facebook::GraphRequest_GraphJSONArrayCallback& arg5){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newPlacesSearchRequest", "(Lcom/facebook/AccessToken;Landroid/location/Location;IILjava/lang/String;Lcom/facebook/GraphRequest$GraphJSONArrayCallback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newCustomAudienceThirdPartyIdRequest(const ::com::facebook::AccessToken& arg0, const ::android::content::Context& arg1, const ::java::lang::String& arg2, const ::com::facebook::GraphRequest_Callback& arg3){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCustomAudienceThirdPartyIdRequest", "(Lcom/facebook/AccessToken;Landroid/content/Context;Ljava/lang/String;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequest::newCustomAudienceThirdPartyIdRequest(const ::com::facebook::AccessToken& arg0, const ::android::content::Context& arg1, const ::com::facebook::GraphRequest_Callback& arg2){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newCustomAudienceThirdPartyIdRequest", "(Lcom/facebook/AccessToken;Landroid/content/Context;Lcom/facebook/GraphRequest$Callback;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::GraphRequest::getGraphObject() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGraphObject", "()Lorg/json/JSONObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setGraphObject(const ::org::json::JSONObject& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGraphObject", "(Lorg/json/JSONObject;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::GraphRequest::getGraphPath() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGraphPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setGraphPath(const ::java::lang::String& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGraphPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::HttpMethod com::facebook::GraphRequest::getHttpMethod() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHttpMethod", "()Lcom/facebook/HttpMethod;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::HttpMethod _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setHttpMethod(const ::com::facebook::HttpMethod& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHttpMethod", "(Lcom/facebook/HttpMethod;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::GraphRequest::getVersion() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setVersion(const ::java::lang::String& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVersion", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequest::setSkipClientToken(bool arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSkipClientToken", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle com::facebook::GraphRequest::getParameters() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setParameters(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::com::facebook::AccessToken com::facebook::GraphRequest::getAccessToken() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessToken", "()Lcom/facebook/AccessToken;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setAccessToken(const ::com::facebook::AccessToken& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAccessToken", "(Lcom/facebook/AccessToken;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::GraphRequest::getBatchEntryName() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBatchEntryName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setBatchEntryName(const ::java::lang::String& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBatchEntryName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::GraphRequest::getBatchEntryDependsOn() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBatchEntryDependsOn", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setBatchEntryDependsOn(const ::java::lang::String& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBatchEntryDependsOn", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::GraphRequest::getBatchEntryOmitResultOnSuccess() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBatchEntryOmitResultOnSuccess", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::GraphRequest::setBatchEntryOmitResultOnSuccess(bool arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBatchEntryOmitResultOnSuccess", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String com::facebook::GraphRequest::getDefaultBatchApplicationId(){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefaultBatchApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setDefaultBatchApplicationId(const ::java::lang::String& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefaultBatchApplicationId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::com::facebook::GraphRequest_Callback com::facebook::GraphRequest::getCallback() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCallback", "()Lcom/facebook/GraphRequest$Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphRequest_Callback _ret(ret);
    return _ret;
}

void com::facebook::GraphRequest::setCallback(const ::com::facebook::GraphRequest_Callback& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallback", "(Lcom/facebook/GraphRequest$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequest::setTag(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTag", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object com::facebook::GraphRequest::getTag() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::com::facebook::GraphResponse com::facebook::GraphRequest::executeAndWait() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeAndWait", "()Lcom/facebook/GraphResponse;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphResponse _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeAsync() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeAsync", "()Lcom/facebook/GraphRequestAsyncTask;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::java::net::HttpURLConnection com::facebook::GraphRequest::toHttpConnection(const std::vector< ::com::facebook::GraphRequest>& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHttpConnection", "([Lcom/facebook/GraphRequest;)Ljava/net/HttpURLConnection;");
    unsigned arg0s = arg0.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::facebook::GraphRequest& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::HttpURLConnection _ret(ret);
    return _ret;
}

::java::net::HttpURLConnection com::facebook::GraphRequest::toHttpConnection(const ::java::util::Collection& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHttpConnection", "(Ljava/util/Collection;)Ljava/net/HttpURLConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::HttpURLConnection _ret(ret);
    return _ret;
}

::java::net::HttpURLConnection com::facebook::GraphRequest::toHttpConnection(const ::com::facebook::GraphRequestBatch& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toHttpConnection", "(Lcom/facebook/GraphRequestBatch;)Ljava/net/HttpURLConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::net::HttpURLConnection _ret(ret);
    return _ret;
}

::com::facebook::GraphResponse com::facebook::GraphRequest::executeAndWait(const ::com::facebook::GraphRequest& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeAndWait", "(Lcom/facebook/GraphRequest;)Lcom/facebook/GraphResponse;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::GraphResponse _ret(ret);
    return _ret;
}

::java::util::List com::facebook::GraphRequest::executeBatchAndWait(const std::vector< ::com::facebook::GraphRequest>& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAndWait", "([Lcom/facebook/GraphRequest;)Ljava/util/List;");
    unsigned arg0s = arg0.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::facebook::GraphRequest& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::GraphRequest::executeBatchAndWait(const ::java::util::Collection& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAndWait", "(Ljava/util/Collection;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::GraphRequest::executeBatchAndWait(const ::com::facebook::GraphRequestBatch& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAndWait", "(Lcom/facebook/GraphRequestBatch;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeBatchAsync(const std::vector< ::com::facebook::GraphRequest>& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAsync", "([Lcom/facebook/GraphRequest;)Lcom/facebook/GraphRequestAsyncTask;");
    unsigned arg0s = arg0.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::facebook::GraphRequest& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeBatchAsync(const ::java::util::Collection& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAsync", "(Ljava/util/Collection;)Lcom/facebook/GraphRequestAsyncTask;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeBatchAsync(const ::com::facebook::GraphRequestBatch& arg0){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeBatchAsync", "(Lcom/facebook/GraphRequestBatch;)Lcom/facebook/GraphRequestAsyncTask;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::java::util::List com::facebook::GraphRequest::executeConnectionAndWait(const ::java::net::HttpURLConnection& arg0, const ::java::util::Collection& arg1){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeConnectionAndWait", "(Ljava/net/HttpURLConnection;Ljava/util/Collection;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List com::facebook::GraphRequest::executeConnectionAndWait(const ::java::net::HttpURLConnection& arg0, const ::com::facebook::GraphRequestBatch& arg1){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeConnectionAndWait", "(Ljava/net/HttpURLConnection;Lcom/facebook/GraphRequestBatch;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeConnectionAsync(const ::java::net::HttpURLConnection& arg0, const ::com::facebook::GraphRequestBatch& arg1){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeConnectionAsync", "(Ljava/net/HttpURLConnection;Lcom/facebook/GraphRequestBatch;)Lcom/facebook/GraphRequestAsyncTask;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequest::executeConnectionAsync(const ::android::os::Handler& arg0, const ::java::net::HttpURLConnection& arg1, const ::com::facebook::GraphRequestBatch& arg2){
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "executeConnectionAsync", "(Landroid/os/Handler;Ljava/net/HttpURLConnection;Lcom/facebook/GraphRequestBatch;)Lcom/facebook/GraphRequestAsyncTask;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::GraphRequest::toString() const {
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const std::vector< ::com::facebook::GraphRequest>& arg0) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Lcom/facebook/GraphRequest;)V");
    unsigned arg0s = arg0.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::facebook::GraphRequest& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const ::com::facebook::GraphRequestBatch& arg0) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Lcom/facebook/GraphRequestBatch;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const ::java::net::HttpURLConnection& arg0, const std::vector< ::com::facebook::GraphRequest>& arg1) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/HttpURLConnection;[Lcom/facebook/GraphRequest;)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::com::facebook::GraphRequest& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const ::java::net::HttpURLConnection& arg0, const ::java::util::Collection& arg1) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/HttpURLConnection;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestAsyncTask::GraphRequestAsyncTask(const ::java::net::HttpURLConnection& arg0, const ::com::facebook::GraphRequestBatch& arg1) : ::java::lang::Object((jobject)0), ::android::os::AsyncTask((jobject)0) {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/net/HttpURLConnection;Lcom/facebook/GraphRequestBatch;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String com::facebook::GraphRequestAsyncTask::toString() const {
    if (!::com::facebook::GraphRequestAsyncTask::_class) ::com::facebook::GraphRequestAsyncTask::_class = java::fetch_class("com/facebook/GraphRequestAsyncTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequestBatch_Callback::onBatchCompleted(const ::com::facebook::GraphRequestBatch& arg0) const {
    if (!::com::facebook::GraphRequestBatch_Callback::_class) ::com::facebook::GraphRequestBatch_Callback::_class = java::fetch_class("com/facebook/GraphRequestBatch$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBatchCompleted", "(Lcom/facebook/GraphRequestBatch;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequestBatch_OnProgressCallback::onBatchProgress(const ::com::facebook::GraphRequestBatch& arg0, int64_t arg1, int64_t arg2) const {
    if (!::com::facebook::GraphRequestBatch_OnProgressCallback::_class) ::com::facebook::GraphRequestBatch_OnProgressCallback::_class = java::fetch_class("com/facebook/GraphRequestBatch$OnProgressCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBatchProgress", "(Lcom/facebook/GraphRequestBatch;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestBatch::GraphRequestBatch() : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestBatch::GraphRequestBatch(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::GraphRequestBatch::GraphRequestBatch(const std::vector< ::com::facebook::GraphRequest>& arg0) : ::java::lang::Object((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0) {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "([Lcom/facebook/GraphRequest;)V");
    unsigned arg0s = arg0.size();
    if (!::com::facebook::GraphRequest::_class) ::com::facebook::GraphRequest::_class = java::fetch_class("com/facebook/GraphRequest");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::com::facebook::GraphRequest::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::com::facebook::GraphRequest& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t com::facebook::GraphRequestBatch::getTimeout() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeout", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::GraphRequestBatch::setTimeout(int32_t arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeout", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequestBatch::addCallback(const ::com::facebook::GraphRequestBatch_Callback& arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "addCallback", "(Lcom/facebook/GraphRequestBatch$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequestBatch::removeCallback(const ::com::facebook::GraphRequestBatch_Callback& arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallback", "(Lcom/facebook/GraphRequestBatch$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool com::facebook::GraphRequestBatch::add(const ::com::facebook::GraphRequest& arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Lcom/facebook/GraphRequest;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequestBatch::add(int32_t arg0, const ::com::facebook::GraphRequest& arg1) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILcom/facebook/GraphRequest;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::GraphRequestBatch::clear() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::com::facebook::GraphRequest com::facebook::GraphRequestBatch::get(int32_t arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Lcom/facebook/GraphRequest;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequestBatch::remove(int32_t arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Lcom/facebook/GraphRequest;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphRequestBatch::set(int32_t arg0, const ::com::facebook::GraphRequest& arg1) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILcom/facebook/GraphRequest;)Lcom/facebook/GraphRequest;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

int32_t com::facebook::GraphRequestBatch::size() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String com::facebook::GraphRequestBatch::getBatchApplicationId() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBatchApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::GraphRequestBatch::setBatchApplicationId(const ::java::lang::String& arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBatchApplicationId", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::List com::facebook::GraphRequestBatch::executeAndWait() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeAndWait", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::com::facebook::GraphRequestAsyncTask com::facebook::GraphRequestBatch::executeAsync() const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeAsync", "()Lcom/facebook/GraphRequestAsyncTask;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphRequestAsyncTask _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::GraphRequestBatch::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::GraphRequestBatch::add(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void com::facebook::GraphRequestBatch::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::com::facebook::GraphRequestBatch::_class) ::com::facebook::GraphRequestBatch::_class = java::fetch_class("com/facebook/GraphRequestBatch");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::GraphResponse_PagingDirection> com::facebook::GraphResponse_PagingDirection::values(){
    if (!::com::facebook::GraphResponse_PagingDirection::_class) ::com::facebook::GraphResponse_PagingDirection::_class = java::fetch_class("com/facebook/GraphResponse$PagingDirection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/GraphResponse$PagingDirection;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::GraphResponse_PagingDirection> _ret(rets, ::com::facebook::GraphResponse_PagingDirection((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::GraphResponse_PagingDirection retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::GraphResponse_PagingDirection com::facebook::GraphResponse_PagingDirection::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::GraphResponse_PagingDirection::_class) ::com::facebook::GraphResponse_PagingDirection::_class = java::fetch_class("com/facebook/GraphResponse$PagingDirection");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/GraphResponse$PagingDirection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::GraphResponse_PagingDirection _ret(ret);
    return _ret;
}

::com::facebook::FacebookRequestError com::facebook::GraphResponse::getError() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "()Lcom/facebook/FacebookRequestError;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::FacebookRequestError _ret(ret);
    return _ret;
}

::org::json::JSONObject com::facebook::GraphResponse::getJSONObject() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONObject", "()Lorg/json/JSONObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONObject _ret(ret);
    return _ret;
}

::org::json::JSONArray com::facebook::GraphResponse::getJSONArray() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJSONArray", "()Lorg/json/JSONArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::json::JSONArray _ret(ret);
    return _ret;
}

::java::net::HttpURLConnection com::facebook::GraphResponse::getConnection() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConnection", "()Ljava/net/HttpURLConnection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::HttpURLConnection _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphResponse::getRequest() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequest", "()Lcom/facebook/GraphRequest;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::GraphResponse::getRawResponse() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawResponse", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::GraphRequest com::facebook::GraphResponse::getRequestForPagedResults(const ::com::facebook::GraphResponse_PagingDirection& arg0) const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRequestForPagedResults", "(Lcom/facebook/GraphResponse$PagingDirection;)Lcom/facebook/GraphRequest;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::GraphRequest _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::GraphResponse::toString() const {
    if (!::com::facebook::GraphResponse::_class) ::com::facebook::GraphResponse::_class = java::fetch_class("com/facebook/GraphResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::HttpMethod> com::facebook::HttpMethod::values(){
    if (!::com::facebook::HttpMethod::_class) ::com::facebook::HttpMethod::_class = java::fetch_class("com/facebook/HttpMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/HttpMethod;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::HttpMethod> _ret(rets, ::com::facebook::HttpMethod((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::HttpMethod retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::HttpMethod com::facebook::HttpMethod::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::HttpMethod::_class) ::com::facebook::HttpMethod::_class = java::fetch_class("com/facebook/HttpMethod");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/HttpMethod;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::HttpMethod _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::LegacyTokenHelper::LegacyTokenHelper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::LegacyTokenHelper::LegacyTokenHelper(const ::android::content::Context& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::os::Bundle com::facebook::LegacyTokenHelper::load() const {
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::save(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(Landroid/os/Bundle;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::LegacyTokenHelper::clear() const {
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::LegacyTokenHelper::hasTokenInformation(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hasTokenInformation", "(Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String com::facebook::LegacyTokenHelper::getToken(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getToken", "(Landroid/os/Bundle;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putToken(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putToken", "(Landroid/os/Bundle;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Date com::facebook::LegacyTokenHelper::getExpirationDate(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExpirationDate", "(Landroid/os/Bundle;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putExpirationDate(const ::android::os::Bundle& arg0, const ::java::util::Date& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putExpirationDate", "(Landroid/os/Bundle;Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t com::facebook::LegacyTokenHelper::getExpirationMilliseconds(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getExpirationMilliseconds", "(Landroid/os/Bundle;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void com::facebook::LegacyTokenHelper::putExpirationMilliseconds(const ::android::os::Bundle& arg0, int64_t arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putExpirationMilliseconds", "(Landroid/os/Bundle;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set com::facebook::LegacyTokenHelper::getPermissions(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPermissions", "(Landroid/os/Bundle;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putPermissions(const ::android::os::Bundle& arg0, const ::java::util::Collection& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putPermissions", "(Landroid/os/Bundle;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void com::facebook::LegacyTokenHelper::putDeclinedPermissions(const ::android::os::Bundle& arg0, const ::java::util::Collection& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putDeclinedPermissions", "(Landroid/os/Bundle;Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::com::facebook::AccessTokenSource com::facebook::LegacyTokenHelper::getSource(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSource", "(Landroid/os/Bundle;)Lcom/facebook/AccessTokenSource;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::AccessTokenSource _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putSource(const ::android::os::Bundle& arg0, const ::com::facebook::AccessTokenSource& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putSource", "(Landroid/os/Bundle;Lcom/facebook/AccessTokenSource;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Date com::facebook::LegacyTokenHelper::getLastRefreshDate(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLastRefreshDate", "(Landroid/os/Bundle;)Ljava/util/Date;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Date _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putLastRefreshDate(const ::android::os::Bundle& arg0, const ::java::util::Date& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putLastRefreshDate", "(Landroid/os/Bundle;Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int64_t com::facebook::LegacyTokenHelper::getLastRefreshMilliseconds(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getLastRefreshMilliseconds", "(Landroid/os/Bundle;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void com::facebook::LegacyTokenHelper::putLastRefreshMilliseconds(const ::android::os::Bundle& arg0, int64_t arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putLastRefreshMilliseconds", "(Landroid/os/Bundle;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String com::facebook::LegacyTokenHelper::getApplicationId(const ::android::os::Bundle& arg0){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getApplicationId", "(Landroid/os/Bundle;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void com::facebook::LegacyTokenHelper::putApplicationId(const ::android::os::Bundle& arg0, const ::java::lang::String& arg1){
    if (!::com::facebook::LegacyTokenHelper::_class) ::com::facebook::LegacyTokenHelper::_class = java::fetch_class("com/facebook/LegacyTokenHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "putApplicationId", "(Landroid/os/Bundle;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::LoggingBehavior> com::facebook::LoggingBehavior::values(){
    if (!::com::facebook::LoggingBehavior::_class) ::com::facebook::LoggingBehavior::_class = java::fetch_class("com/facebook/LoggingBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/LoggingBehavior;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::LoggingBehavior> _ret(rets, ::com::facebook::LoggingBehavior((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::LoggingBehavior retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::LoggingBehavior com::facebook::LoggingBehavior::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::LoggingBehavior::_class) ::com::facebook::LoggingBehavior::_class = java::fetch_class("com/facebook/LoggingBehavior");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/LoggingBehavior;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::LoggingBehavior _ret(ret);
    return _ret;
}

::com::facebook::Profile com::facebook::Profile::getCurrentProfile(){
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCurrentProfile", "()Lcom/facebook/Profile;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::com::facebook::Profile _ret(ret);
    return _ret;
}

void com::facebook::Profile::setCurrentProfile(const ::com::facebook::Profile& arg0){
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCurrentProfile", "(Lcom/facebook/Profile;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void com::facebook::Profile::fetchProfileForCurrentAccessToken(){
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fetchProfileForCurrentAccessToken", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::Profile::Profile(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4, const ::android::net::Uri& arg5) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject _arg5 = arg5.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

::android::net::Uri com::facebook::Profile::getProfilePictureUri(int32_t arg0, int32_t arg1) const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProfilePictureUri", "(II)Landroid/net/Uri;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::Profile::getId() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::Profile::getFirstName() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::Profile::getMiddleName() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMiddleName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::Profile::getLastName() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::Profile::getName() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::Profile::getLinkUri() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLinkUri", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool com::facebook::Profile::equals(const ::java::lang::Object& arg0) const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t com::facebook::Profile::hashCode() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t com::facebook::Profile::describeContents() const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::Profile::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::Profile::_class) ::com::facebook::Profile::_class = java::fetch_class("com/facebook/Profile");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void com::facebook::ProfileTracker_ProfileBroadcastReceiver::onReceive(const ::android::content::Context& arg0, const ::android::content::Intent& arg1) const {
    if (!::com::facebook::ProfileTracker_ProfileBroadcastReceiver::_class) ::com::facebook::ProfileTracker_ProfileBroadcastReceiver::_class = java::fetch_class("com/facebook/ProfileTracker$ProfileBroadcastReceiver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceive", "(Landroid/content/Context;Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::ProfileTracker::ProfileTracker() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::ProfileTracker::_class) ::com::facebook::ProfileTracker::_class = java::fetch_class("com/facebook/ProfileTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void com::facebook::ProfileTracker::startTracking() const {
    if (!::com::facebook::ProfileTracker::_class) ::com::facebook::ProfileTracker::_class = java::fetch_class("com/facebook/ProfileTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "startTracking", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::ProfileTracker::stopTracking() const {
    if (!::com::facebook::ProfileTracker::_class) ::com::facebook::ProfileTracker::_class = java::fetch_class("com/facebook/ProfileTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopTracking", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool com::facebook::ProfileTracker::isTracking() const {
    if (!::com::facebook::ProfileTracker::_class) ::com::facebook::ProfileTracker::_class = java::fetch_class("com/facebook/ProfileTracker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTracking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void com::facebook::ProgressNoopOutputStream::setCurrentRequest(const ::com::facebook::GraphRequest& arg0) const {
    if (!::com::facebook::ProgressNoopOutputStream::_class) ::com::facebook::ProgressNoopOutputStream::_class = java::fetch_class("com/facebook/ProgressNoopOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentRequest", "(Lcom/facebook/GraphRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressNoopOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::com::facebook::ProgressNoopOutputStream::_class) ::com::facebook::ProgressNoopOutputStream::_class = java::fetch_class("com/facebook/ProgressNoopOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressNoopOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::com::facebook::ProgressNoopOutputStream::_class) ::com::facebook::ProgressNoopOutputStream::_class = java::fetch_class("com/facebook/ProgressNoopOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::ProgressNoopOutputStream::write(int32_t arg0) const {
    if (!::com::facebook::ProgressNoopOutputStream::_class) ::com::facebook::ProgressNoopOutputStream::_class = java::fetch_class("com/facebook/ProgressNoopOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressOutputStream::setCurrentRequest(const ::com::facebook::GraphRequest& arg0) const {
    if (!::com::facebook::ProgressOutputStream::_class) ::com::facebook::ProgressOutputStream::_class = java::fetch_class("com/facebook/ProgressOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentRequest", "(Lcom/facebook/GraphRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressOutputStream::write(const std::vector< int8_t>& arg0) const {
    if (!::com::facebook::ProgressOutputStream::_class) ::com::facebook::ProgressOutputStream::_class = java::fetch_class("com/facebook/ProgressOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressOutputStream::write(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::com::facebook::ProgressOutputStream::_class) ::com::facebook::ProgressOutputStream::_class = java::fetch_class("com/facebook/ProgressOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void com::facebook::ProgressOutputStream::write(int32_t arg0) const {
    if (!::com::facebook::ProgressOutputStream::_class) ::com::facebook::ProgressOutputStream::_class = java::fetch_class("com/facebook/ProgressOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void com::facebook::ProgressOutputStream::close() const {
    if (!::com::facebook::ProgressOutputStream::_class) ::com::facebook::ProgressOutputStream::_class = java::fetch_class("com/facebook/ProgressOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void com::facebook::RequestOutputStream::setCurrentRequest(const ::com::facebook::GraphRequest& arg0) const {
    if (!::com::facebook::RequestOutputStream::_class) ::com::facebook::RequestOutputStream::_class = java::fetch_class("com/facebook/RequestOutputStream");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentRequest", "(Lcom/facebook/GraphRequest;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::com::facebook::TestUserManager_Mode> com::facebook::TestUserManager_Mode::values(){
    if (!::com::facebook::TestUserManager_Mode::_class) ::com::facebook::TestUserManager_Mode::_class = java::fetch_class("com/facebook/TestUserManager$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/TestUserManager$Mode;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::TestUserManager_Mode> _ret(rets, ::com::facebook::TestUserManager_Mode((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::TestUserManager_Mode retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::TestUserManager_Mode com::facebook::TestUserManager_Mode::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::TestUserManager_Mode::_class) ::com::facebook::TestUserManager_Mode::_class = java::fetch_class("com/facebook/TestUserManager$Mode");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/TestUserManager$Mode;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::TestUserManager_Mode _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::TestUserManager::TestUserManager(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::com::facebook::AccessToken com::facebook::TestUserManager::getAccessTokenForPrivateUser(const ::java::util::List& arg0) const {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessTokenForPrivateUser", "(Ljava/util/List;)Lcom/facebook/AccessToken;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

::com::facebook::AccessToken com::facebook::TestUserManager::getAccessTokenForSharedUser(const ::java::util::List& arg0) const {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessTokenForSharedUser", "(Ljava/util/List;)Lcom/facebook/AccessToken;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

::com::facebook::AccessToken com::facebook::TestUserManager::getAccessTokenForSharedUser(const ::java::util::List& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessTokenForSharedUser", "(Ljava/util/List;Ljava/lang/String;)Lcom/facebook/AccessToken;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::AccessToken _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::TestUserManager::getTestApplicationId() const {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestApplicationId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::TestUserManager::getTestApplicationSecret() const {
    if (!::com::facebook::TestUserManager::_class) ::com::facebook::TestUserManager::_class = java::fetch_class("com/facebook/TestUserManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTestApplicationSecret", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_string::R_string() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_string::_class) ::com::facebook::R_string::_class = java::fetch_class("com/facebook/R$string");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_dimen::R_dimen() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_dimen::_class) ::com::facebook::R_dimen::_class = java::fetch_class("com/facebook/R$dimen");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_id::R_id() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_id::_class) ::com::facebook::R_id::_class = java::fetch_class("com/facebook/R$id");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_layout::R_layout() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_layout::_class) ::com::facebook::R_layout::_class = java::fetch_class("com/facebook/R$layout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_styleable::R_styleable() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_styleable::_class) ::com::facebook::R_styleable::_class = java::fetch_class("com/facebook/R$styleable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_style::R_style() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_style::_class) ::com::facebook::R_style::_class = java::fetch_class("com/facebook/R$style");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R::R() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R::_class) ::com::facebook::R::_class = java::fetch_class("com/facebook/R");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_drawable::R_drawable() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_drawable::_class) ::com::facebook::R_drawable::_class = java::fetch_class("com/facebook/R$drawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_color::R_color() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_color::_class) ::com::facebook::R_color::_class = java::fetch_class("com/facebook/R$color");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::R_attr::R_attr() : ::java::lang::Object((jobject)0) {
    if (!::com::facebook::R_attr::_class) ::com::facebook::R_attr::_class = java::fetch_class("com/facebook/R$attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

