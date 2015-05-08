#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Picture.hpp"
#include "android.graphics.Rect.hpp"
#include "android.net.http.SslCertificate.hpp"
#include "android.net.http.SslError.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Message.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.LayoutInflater.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.accessibility.AccessibilityNodeInfo.hpp"
#include "android.view.inputmethod.EditorInfo.hpp"
#include "android.view.inputmethod.InputConnection.hpp"
#include "android.webkit.CacheManager.hpp"
#include "android.webkit.ConsoleMessage.hpp"
#include "android.webkit.CookieManager.hpp"
#include "android.webkit.CookieSyncManager.hpp"
#include "android.webkit.DateSorter.hpp"
#include "android.webkit.DownloadListener.hpp"
#include "android.webkit.GeolocationPermissions.hpp"
#include "android.webkit.HttpAuthHandler.hpp"
#include "android.webkit.JsPromptResult.hpp"
#include "android.webkit.JsResult.hpp"
#include "android.webkit.MimeTypeMap.hpp"
#include "android.webkit.PluginStub.hpp"
#include "android.webkit.SslErrorHandler.hpp"
#include "android.webkit.URLUtil.hpp"
#include "android.webkit.ValueCallback.hpp"
#include "android.webkit.WebBackForwardList.hpp"
#include "android.webkit.WebChromeClient.hpp"
#include "android.webkit.WebHistoryItem.hpp"
#include "android.webkit.WebIconDatabase.hpp"
#include "android.webkit.WebResourceResponse.hpp"
#include "android.webkit.WebSettings.hpp"
#include "android.webkit.WebStorage.hpp"
#include "android.webkit.WebSyncManager.hpp"
#include "android.webkit.WebView.hpp"
#include "android.webkit.WebViewClient.hpp"
#include "android.webkit.WebViewDatabase.hpp"
#include "android.webkit.WebViewFragment.hpp"
#include "java.io.File.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Map.hpp"

jclass android::webkit::CookieSyncManager::_class = nullptr;
jclass android::webkit::WebViewDatabase::_class = nullptr;
jclass android::webkit::WebSyncManager::_class = nullptr;
jclass android::webkit::WebStorage::_class = nullptr;
jclass android::webkit::WebSettings_RenderPriority::_class = nullptr;
jclass android::webkit::JsPromptResult::_class = nullptr;
jclass android::webkit::DownloadListener::_class = nullptr;
jclass android::webkit::WebSettings::_class = nullptr;
jclass android::webkit::ConsoleMessage::_class = nullptr;
jclass android::webkit::WebView_HitTestResult::_class = nullptr;
jclass android::webkit::WebStorage_Origin::_class = nullptr;
jclass android::webkit::DateSorter::_class = nullptr;
jclass android::webkit::CacheManager::_class = nullptr;
jclass android::webkit::ConsoleMessage_MessageLevel::_class = nullptr;
jclass android::webkit::WebIconDatabase::_class = nullptr;
jclass android::webkit::WebChromeClient::_class = nullptr;
jclass android::webkit::WebChromeClient_CustomViewCallback::_class = nullptr;
jclass android::webkit::SslErrorHandler::_class = nullptr;
jclass android::webkit::PluginStub::_class = nullptr;
jclass android::webkit::WebSettings_LayoutAlgorithm::_class = nullptr;
jclass android::webkit::GeolocationPermissions::_class = nullptr;
jclass android::webkit::WebViewFragment::_class = nullptr;
jclass android::webkit::WebViewClient::_class = nullptr;
jclass android::webkit::WebSettings_PluginState::_class = nullptr;
jclass android::webkit::WebSettings_ZoomDensity::_class = nullptr;
jclass android::webkit::CacheManager_CacheResult::_class = nullptr;
jclass android::webkit::WebSettings_TextSize::_class = nullptr;
jclass android::webkit::WebResourceResponse::_class = nullptr;
jclass android::webkit::WebIconDatabase_IconListener::_class = nullptr;
jclass android::webkit::HttpAuthHandler::_class = nullptr;
jclass android::webkit::MimeTypeMap::_class = nullptr;
jclass android::webkit::WebView_PictureListener::_class = nullptr;
jclass android::webkit::WebView::_class = nullptr;
jclass android::webkit::URLUtil::_class = nullptr;
jclass android::webkit::WebBackForwardList::_class = nullptr;
jclass android::webkit::CookieManager::_class = nullptr;
jclass android::webkit::GeolocationPermissions_Callback::_class = nullptr;
jclass android::webkit::ValueCallback::_class = nullptr;
jclass android::webkit::JsResult::_class = nullptr;
jclass android::webkit::WebStorage_QuotaUpdater::_class = nullptr;
jclass android::webkit::WebHistoryItem::_class = nullptr;
jclass android::webkit::WebView_WebViewTransport::_class = nullptr;

::android::webkit::CookieSyncManager android::webkit::CookieSyncManager::getInstance(){
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/webkit/CookieSyncManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::CookieSyncManager _ret(ret);
    return _ret;
}

::android::webkit::CookieSyncManager android::webkit::CookieSyncManager::createInstance(const ::android::content::Context& arg0){
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createInstance", "(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::CookieSyncManager _ret(ret);
    return _ret;
}

void android::webkit::CookieSyncManager::stopSync() const {
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::CookieSyncManager::startSync() const {
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::CookieSyncManager::resetSync() const {
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::CookieSyncManager::sync() const {
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::CookieSyncManager::run() const {
    if (!::android::webkit::CookieSyncManager::_class) ::android::webkit::CookieSyncManager::_class = java::fetch_class("android/webkit/CookieSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::webkit::WebViewDatabase android::webkit::WebViewDatabase::getInstance(const ::android::content::Context& arg0){
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Landroid/content/Context;)Landroid/webkit/WebViewDatabase;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebViewDatabase _ret(ret);
    return _ret;
}

bool android::webkit::WebViewDatabase::hasUsernamePassword() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasUsernamePassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebViewDatabase::clearUsernamePassword() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearUsernamePassword", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebViewDatabase::hasHttpAuthUsernamePassword() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasHttpAuthUsernamePassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebViewDatabase::clearHttpAuthUsernamePassword() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearHttpAuthUsernamePassword", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebViewDatabase::hasFormData() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFormData", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebViewDatabase::clearFormData() const {
    if (!::android::webkit::WebViewDatabase::_class) ::android::webkit::WebViewDatabase::_class = java::fetch_class("android/webkit/WebViewDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearFormData", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebSyncManager::run() const {
    if (!::android::webkit::WebSyncManager::_class) ::android::webkit::WebSyncManager::_class = java::fetch_class("android/webkit/WebSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebSyncManager::sync() const {
    if (!::android::webkit::WebSyncManager::_class) ::android::webkit::WebSyncManager::_class = java::fetch_class("android/webkit/WebSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "sync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebSyncManager::resetSync() const {
    if (!::android::webkit::WebSyncManager::_class) ::android::webkit::WebSyncManager::_class = java::fetch_class("android/webkit/WebSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebSyncManager::startSync() const {
    if (!::android::webkit::WebSyncManager::_class) ::android::webkit::WebSyncManager::_class = java::fetch_class("android/webkit/WebSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "startSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebSyncManager::stopSync() const {
    if (!::android::webkit::WebSyncManager::_class) ::android::webkit::WebSyncManager::_class = java::fetch_class("android/webkit/WebSyncManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopSync", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebStorage::WebStorage() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::webkit::WebStorage::getOrigins(const ::android::webkit::ValueCallback& arg0) const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrigins", "(Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebStorage::getUsageForOrigin(const ::java::lang::String& arg0, const ::android::webkit::ValueCallback& arg1) const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUsageForOrigin", "(Ljava/lang/String;Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebStorage::getQuotaForOrigin(const ::java::lang::String& arg0, const ::android::webkit::ValueCallback& arg1) const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuotaForOrigin", "(Ljava/lang/String;Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebStorage::setQuotaForOrigin(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuotaForOrigin", "(Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebStorage::deleteOrigin(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteOrigin", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebStorage::deleteAllData() const {
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteAllData", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::webkit::WebStorage android::webkit::WebStorage::getInstance(){
    if (!::android::webkit::WebStorage::_class) ::android::webkit::WebStorage::_class = java::fetch_class("android/webkit/WebStorage");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/webkit/WebStorage;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::WebStorage _ret(ret);
    return _ret;
}

std::vector< ::android::webkit::WebSettings_RenderPriority> android::webkit::WebSettings_RenderPriority::values(){
    if (!::android::webkit::WebSettings_RenderPriority::_class) ::android::webkit::WebSettings_RenderPriority::_class = java::fetch_class("android/webkit/WebSettings$RenderPriority");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/WebSettings$RenderPriority;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::WebSettings_RenderPriority> _ret(rets, ::android::webkit::WebSettings_RenderPriority((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::WebSettings_RenderPriority retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::WebSettings_RenderPriority android::webkit::WebSettings_RenderPriority::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::WebSettings_RenderPriority::_class) ::android::webkit::WebSettings_RenderPriority::_class = java::fetch_class("android/webkit/WebSettings$RenderPriority");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/WebSettings$RenderPriority;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebSettings_RenderPriority _ret(ret);
    return _ret;
}

void android::webkit::JsPromptResult::confirm(const ::java::lang::String& arg0) const {
    if (!::android::webkit::JsPromptResult::_class) ::android::webkit::JsPromptResult::_class = java::fetch_class("android/webkit/JsPromptResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "confirm", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::DownloadListener::onDownloadStart(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, int64_t arg4) const {
    if (!::android::webkit::DownloadListener::_class) ::android::webkit::DownloadListener::_class = java::fetch_class("android/webkit/DownloadListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDownloadStart", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    int64_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::webkit::WebSettings::setNavDump(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNavDump", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getNavDump() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNavDump", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setSupportZoom(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSupportZoom", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::supportZoom() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportZoom", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setBuiltInZoomControls(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBuiltInZoomControls", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getBuiltInZoomControls() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBuiltInZoomControls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setDisplayZoomControls(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayZoomControls", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getDisplayZoomControls() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayZoomControls", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setAllowFileAccess(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowFileAccess", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getAllowFileAccess() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowFileAccess", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setAllowContentAccess(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllowContentAccess", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getAllowContentAccess() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowContentAccess", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setLoadWithOverviewMode(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoadWithOverviewMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getLoadWithOverviewMode() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoadWithOverviewMode", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setEnableSmoothTransition(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnableSmoothTransition", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::enableSmoothTransition() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "enableSmoothTransition", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setUseWebViewBackgroundForOverscrollBackground(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseWebViewBackgroundForOverscrollBackground", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getUseWebViewBackgroundForOverscrollBackground() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseWebViewBackgroundForOverscrollBackground", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setSaveFormData(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSaveFormData", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getSaveFormData() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSaveFormData", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setSavePassword(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSavePassword", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getSavePassword() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSavePassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setTextZoom(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextZoom", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getTextZoom() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextZoom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setTextSize(const ::android::webkit::WebSettings_TextSize& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSize", "(Landroid/webkit/WebSettings$TextSize;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebSettings_TextSize android::webkit::WebSettings::getTextSize() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSize", "()Landroid/webkit/WebSettings$TextSize;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebSettings_TextSize _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setDefaultZoom(const ::android::webkit::WebSettings_ZoomDensity& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultZoom", "(Landroid/webkit/WebSettings$ZoomDensity;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebSettings_ZoomDensity android::webkit::WebSettings::getDefaultZoom() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultZoom", "()Landroid/webkit/WebSettings$ZoomDensity;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebSettings_ZoomDensity _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setLightTouchEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLightTouchEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getLightTouchEnabled() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLightTouchEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setUseDoubleTree(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseDoubleTree", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getUseDoubleTree() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseDoubleTree", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setUserAgent(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserAgent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getUserAgent() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserAgent", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setUseWideViewPort(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseWideViewPort", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getUseWideViewPort() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseWideViewPort", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setSupportMultipleWindows(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSupportMultipleWindows", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::supportMultipleWindows() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "supportMultipleWindows", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setLayoutAlgorithm(const ::android::webkit::WebSettings_LayoutAlgorithm& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutAlgorithm", "(Landroid/webkit/WebSettings$LayoutAlgorithm;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebSettings_LayoutAlgorithm android::webkit::WebSettings::getLayoutAlgorithm() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutAlgorithm", "()Landroid/webkit/WebSettings$LayoutAlgorithm;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebSettings_LayoutAlgorithm _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setStandardFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStandardFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getStandardFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStandardFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setFixedFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFixedFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getFixedFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFixedFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setSansSerifFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSansSerifFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getSansSerifFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSansSerifFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setSerifFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSerifFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getSerifFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSerifFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setCursiveFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursiveFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getCursiveFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursiveFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setFantasyFontFamily(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFantasyFontFamily", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getFantasyFontFamily() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFantasyFontFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setMinimumFontSize(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumFontSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getMinimumFontSize() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumFontSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setMinimumLogicalFontSize(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumLogicalFontSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getMinimumLogicalFontSize() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimumLogicalFontSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setDefaultFontSize(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultFontSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getDefaultFontSize() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultFontSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setDefaultFixedFontSize(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultFixedFontSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getDefaultFixedFontSize() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultFixedFontSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebSettings::setLoadsImagesAutomatically(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLoadsImagesAutomatically", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getLoadsImagesAutomatically() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoadsImagesAutomatically", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setBlockNetworkImage(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlockNetworkImage", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getBlockNetworkImage() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockNetworkImage", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setBlockNetworkLoads(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBlockNetworkLoads", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getBlockNetworkLoads() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBlockNetworkLoads", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setJavaScriptEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJavaScriptEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setPluginsEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPluginsEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setPluginState(const ::android::webkit::WebSettings_PluginState& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPluginState", "(Landroid/webkit/WebSettings$PluginState;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setPluginsPath(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPluginsPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDatabasePath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setGeolocationDatabasePath(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGeolocationDatabasePath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setAppCacheEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAppCacheEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setAppCachePath(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAppCachePath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setAppCacheMaxSize(int64_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAppCacheMaxSize", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setDatabaseEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDatabaseEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setDomStorageEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDomStorageEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getDomStorageEnabled() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomStorageEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String android::webkit::WebSettings::getDatabasePath() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabasePath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::webkit::WebSettings::getDatabaseEnabled() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDatabaseEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setGeolocationEnabled(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGeolocationEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getJavaScriptEnabled() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJavaScriptEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebSettings::getPluginsEnabled() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPluginsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::webkit::WebSettings_PluginState android::webkit::WebSettings::getPluginState() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPluginState", "()Landroid/webkit/WebSettings$PluginState;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebSettings_PluginState _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebSettings::getPluginsPath() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPluginsPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setJavaScriptCanOpenWindowsAutomatically(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setJavaScriptCanOpenWindowsAutomatically", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebSettings::getJavaScriptCanOpenWindowsAutomatically() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getJavaScriptCanOpenWindowsAutomatically", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebSettings::setDefaultTextEncodingName(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDefaultTextEncodingName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getDefaultTextEncodingName() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultTextEncodingName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setUserAgentString(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserAgentString", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebSettings::getUserAgentString() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserAgentString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebSettings::setNeedInitialFocus(bool arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNeedInitialFocus", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setRenderPriority(const ::android::webkit::WebSettings_RenderPriority& arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRenderPriority", "(Landroid/webkit/WebSettings$RenderPriority;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebSettings::setCacheMode(int32_t arg0) const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCacheMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebSettings::getCacheMode() const {
    if (!::android::webkit::WebSettings::_class) ::android::webkit::WebSettings::_class = java::fetch_class("android/webkit/WebSettings");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::ConsoleMessage::ConsoleMessage(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2, const ::android::webkit::ConsoleMessage_MessageLevel& arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::ConsoleMessage::_class) ::android::webkit::ConsoleMessage::_class = java::fetch_class("android/webkit/ConsoleMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;ILandroid/webkit/ConsoleMessage$MessageLevel;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::webkit::ConsoleMessage_MessageLevel android::webkit::ConsoleMessage::messageLevel() const {
    if (!::android::webkit::ConsoleMessage::_class) ::android::webkit::ConsoleMessage::_class = java::fetch_class("android/webkit/ConsoleMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "messageLevel", "()Landroid/webkit/ConsoleMessage$MessageLevel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::ConsoleMessage_MessageLevel _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::ConsoleMessage::message() const {
    if (!::android::webkit::ConsoleMessage::_class) ::android::webkit::ConsoleMessage::_class = java::fetch_class("android/webkit/ConsoleMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "message", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::ConsoleMessage::sourceId() const {
    if (!::android::webkit::ConsoleMessage::_class) ::android::webkit::ConsoleMessage::_class = java::fetch_class("android/webkit/ConsoleMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "sourceId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::webkit::ConsoleMessage::lineNumber() const {
    if (!::android::webkit::ConsoleMessage::_class) ::android::webkit::ConsoleMessage::_class = java::fetch_class("android/webkit/ConsoleMessage");
    static jmethodID mid = java::jni->GetMethodID(_class, "lineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::webkit::WebView_HitTestResult::getType() const {
    if (!::android::webkit::WebView_HitTestResult::_class) ::android::webkit::WebView_HitTestResult::_class = java::fetch_class("android/webkit/WebView$HitTestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::webkit::WebView_HitTestResult::getExtra() const {
    if (!::android::webkit::WebView_HitTestResult::_class) ::android::webkit::WebView_HitTestResult::_class = java::fetch_class("android/webkit/WebView$HitTestResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtra", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebStorage_Origin::getOrigin() const {
    if (!::android::webkit::WebStorage_Origin::_class) ::android::webkit::WebStorage_Origin::_class = java::fetch_class("android/webkit/WebStorage$Origin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrigin", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::webkit::WebStorage_Origin::getQuota() const {
    if (!::android::webkit::WebStorage_Origin::_class) ::android::webkit::WebStorage_Origin::_class = java::fetch_class("android/webkit/WebStorage$Origin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuota", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::webkit::WebStorage_Origin::getUsage() const {
    if (!::android::webkit::WebStorage_Origin::_class) ::android::webkit::WebStorage_Origin::_class = java::fetch_class("android/webkit/WebStorage$Origin");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUsage", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::DateSorter::DateSorter(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::DateSorter::_class) ::android::webkit::DateSorter::_class = java::fetch_class("android/webkit/DateSorter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::webkit::DateSorter::getIndex(int64_t arg0) const {
    if (!::android::webkit::DateSorter::_class) ::android::webkit::DateSorter::_class = java::fetch_class("android/webkit/DateSorter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndex", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::DateSorter::getLabel(int32_t arg0) const {
    if (!::android::webkit::DateSorter::_class) ::android::webkit::DateSorter::_class = java::fetch_class("android/webkit/DateSorter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLabel", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::webkit::DateSorter::getBoundary(int32_t arg0) const {
    if (!::android::webkit::DateSorter::_class) ::android::webkit::DateSorter::_class = java::fetch_class("android/webkit/DateSorter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoundary", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::CacheManager::CacheManager() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::io::File android::webkit::CacheManager::getCacheFileBaseDir(){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCacheFileBaseDir", "()Ljava/io/File;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::io::File _ret(ret);
    return _ret;
}

bool android::webkit::CacheManager::cacheDisabled(){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "cacheDisabled", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::webkit::CacheManager::startCacheTransaction(){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "startCacheTransaction", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

bool android::webkit::CacheManager::endCacheTransaction(){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "endCacheTransaction", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

::android::webkit::CacheManager_CacheResult android::webkit::CacheManager::getCacheFile(const ::java::lang::String& arg0, const ::java::util::Map& arg1){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getCacheFile", "(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/CacheManager$CacheResult;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::webkit::CacheManager_CacheResult _ret(ret);
    return _ret;
}

void android::webkit::CacheManager::saveCacheFile(const ::java::lang::String& arg0, const ::android::webkit::CacheManager_CacheResult& arg1){
    if (!::android::webkit::CacheManager::_class) ::android::webkit::CacheManager::_class = java::fetch_class("android/webkit/CacheManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "saveCacheFile", "(Ljava/lang/String;Landroid/webkit/CacheManager$CacheResult;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

std::vector< ::android::webkit::ConsoleMessage_MessageLevel> android::webkit::ConsoleMessage_MessageLevel::values(){
    if (!::android::webkit::ConsoleMessage_MessageLevel::_class) ::android::webkit::ConsoleMessage_MessageLevel::_class = java::fetch_class("android/webkit/ConsoleMessage$MessageLevel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/ConsoleMessage$MessageLevel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::ConsoleMessage_MessageLevel> _ret(rets, ::android::webkit::ConsoleMessage_MessageLevel((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::ConsoleMessage_MessageLevel retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::ConsoleMessage_MessageLevel android::webkit::ConsoleMessage_MessageLevel::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::ConsoleMessage_MessageLevel::_class) ::android::webkit::ConsoleMessage_MessageLevel::_class = java::fetch_class("android/webkit/ConsoleMessage$MessageLevel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/ConsoleMessage$MessageLevel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::ConsoleMessage_MessageLevel _ret(ret);
    return _ret;
}

void android::webkit::WebIconDatabase::open(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebIconDatabase::close() const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebIconDatabase::removeAllIcons() const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllIcons", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebIconDatabase::requestIconForPageUrl(const ::java::lang::String& arg0, const ::android::webkit::WebIconDatabase_IconListener& arg1) const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestIconForPageUrl", "(Ljava/lang/String;Landroid/webkit/WebIconDatabase$IconListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebIconDatabase::retainIconForPageUrl(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainIconForPageUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebIconDatabase::releaseIconForPageUrl(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetMethodID(_class, "releaseIconForPageUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebIconDatabase android::webkit::WebIconDatabase::getInstance(){
    if (!::android::webkit::WebIconDatabase::_class) ::android::webkit::WebIconDatabase::_class = java::fetch_class("android/webkit/WebIconDatabase");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/webkit/WebIconDatabase;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::WebIconDatabase _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebChromeClient::WebChromeClient() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::webkit::WebChromeClient::onProgressChanged(const ::android::webkit::WebView& arg0, int32_t arg1) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProgressChanged", "(Landroid/webkit/WebView;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebChromeClient::onReceivedTitle(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedTitle", "(Landroid/webkit/WebView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebChromeClient::onReceivedIcon(const ::android::webkit::WebView& arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedIcon", "(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebChromeClient::onReceivedTouchIconUrl(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedTouchIconUrl", "(Landroid/webkit/WebView;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebChromeClient::onShowCustomView(const ::android::view::View& arg0, const ::android::webkit::WebChromeClient_CustomViewCallback& arg1) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowCustomView", "(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebChromeClient::onShowCustomView(const ::android::view::View& arg0, int32_t arg1, const ::android::webkit::WebChromeClient_CustomViewCallback& arg2) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowCustomView", "(Landroid/view/View;ILandroid/webkit/WebChromeClient$CustomViewCallback;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebChromeClient::onHideCustomView() const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHideCustomView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebChromeClient::onCreateWindow(const ::android::webkit::WebView& arg0, bool arg1, bool arg2, const ::android::os::Message& arg3) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateWindow", "(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::webkit::WebChromeClient::onRequestFocus(const ::android::webkit::WebView& arg0) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestFocus", "(Landroid/webkit/WebView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebChromeClient::onCloseWindow(const ::android::webkit::WebView& arg0) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCloseWindow", "(Landroid/webkit/WebView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebChromeClient::onJsAlert(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::webkit::JsResult& arg3) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJsAlert", "(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::webkit::WebChromeClient::onJsConfirm(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::webkit::JsResult& arg3) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJsConfirm", "(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::webkit::WebChromeClient::onJsPrompt(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::android::webkit::JsPromptResult& arg4) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJsPrompt", "(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::webkit::WebChromeClient::onJsBeforeUnload(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::android::webkit::JsResult& arg3) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJsBeforeUnload", "(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::webkit::WebChromeClient::onExceededDatabaseQuota(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int64_t arg2, int64_t arg3, int64_t arg4, const ::android::webkit::WebStorage_QuotaUpdater& arg5) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onExceededDatabaseQuota", "(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    int64_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::webkit::WebChromeClient::onReachedMaxAppCacheSize(int64_t arg0, int64_t arg1, const ::android::webkit::WebStorage_QuotaUpdater& arg2) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReachedMaxAppCacheSize", "(JJLandroid/webkit/WebStorage$QuotaUpdater;)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebChromeClient::onGeolocationPermissionsShowPrompt(const ::java::lang::String& arg0, const ::android::webkit::GeolocationPermissions_Callback& arg1) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGeolocationPermissionsShowPrompt", "(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebChromeClient::onGeolocationPermissionsHidePrompt() const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGeolocationPermissionsHidePrompt", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebChromeClient::onJsTimeout() const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onJsTimeout", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebChromeClient::onConsoleMessage(const ::java::lang::String& arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConsoleMessage", "(Ljava/lang/String;ILjava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::webkit::WebChromeClient::onConsoleMessage(const ::android::webkit::ConsoleMessage& arg0) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onConsoleMessage", "(Landroid/webkit/ConsoleMessage;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::graphics::Bitmap android::webkit::WebChromeClient::getDefaultVideoPoster() const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultVideoPoster", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::view::View android::webkit::WebChromeClient::getVideoLoadingProgressView() const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVideoLoadingProgressView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::webkit::WebChromeClient::getVisitedHistory(const ::android::webkit::ValueCallback& arg0) const {
    if (!::android::webkit::WebChromeClient::_class) ::android::webkit::WebChromeClient::_class = java::fetch_class("android/webkit/WebChromeClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVisitedHistory", "(Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebChromeClient_CustomViewCallback::onCustomViewHidden() const {
    if (!::android::webkit::WebChromeClient_CustomViewCallback::_class) ::android::webkit::WebChromeClient_CustomViewCallback::_class = java::fetch_class("android/webkit/WebChromeClient$CustomViewCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCustomViewHidden", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::SslErrorHandler::proceed() const {
    if (!::android::webkit::SslErrorHandler::_class) ::android::webkit::SslErrorHandler::_class = java::fetch_class("android/webkit/SslErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "proceed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::SslErrorHandler::cancel() const {
    if (!::android::webkit::SslErrorHandler::_class) ::android::webkit::SslErrorHandler::_class = java::fetch_class("android/webkit/SslErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View android::webkit::PluginStub::getEmbeddedView(int32_t arg0, const ::android::content::Context& arg1) const {
    if (!::android::webkit::PluginStub::_class) ::android::webkit::PluginStub::_class = java::fetch_class("android/webkit/PluginStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmbeddedView", "(ILandroid/content/Context;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::webkit::PluginStub::getFullScreenView(int32_t arg0, const ::android::content::Context& arg1) const {
    if (!::android::webkit::PluginStub::_class) ::android::webkit::PluginStub::_class = java::fetch_class("android/webkit/PluginStub");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFullScreenView", "(ILandroid/content/Context;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

std::vector< ::android::webkit::WebSettings_LayoutAlgorithm> android::webkit::WebSettings_LayoutAlgorithm::values(){
    if (!::android::webkit::WebSettings_LayoutAlgorithm::_class) ::android::webkit::WebSettings_LayoutAlgorithm::_class = java::fetch_class("android/webkit/WebSettings$LayoutAlgorithm");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/WebSettings$LayoutAlgorithm;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::WebSettings_LayoutAlgorithm> _ret(rets, ::android::webkit::WebSettings_LayoutAlgorithm((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::WebSettings_LayoutAlgorithm retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::WebSettings_LayoutAlgorithm android::webkit::WebSettings_LayoutAlgorithm::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::WebSettings_LayoutAlgorithm::_class) ::android::webkit::WebSettings_LayoutAlgorithm::_class = java::fetch_class("android/webkit/WebSettings$LayoutAlgorithm");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/WebSettings$LayoutAlgorithm;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebSettings_LayoutAlgorithm _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::GeolocationPermissions::GeolocationPermissions() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::webkit::GeolocationPermissions android::webkit::GeolocationPermissions::getInstance(){
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/webkit/GeolocationPermissions;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::GeolocationPermissions _ret(ret);
    return _ret;
}

void android::webkit::GeolocationPermissions::getOrigins(const ::android::webkit::ValueCallback& arg0) const {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrigins", "(Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::GeolocationPermissions::getAllowed(const ::java::lang::String& arg0, const ::android::webkit::ValueCallback& arg1) const {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAllowed", "(Ljava/lang/String;Landroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::GeolocationPermissions::clear(const ::java::lang::String& arg0) const {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::GeolocationPermissions::allow(const ::java::lang::String& arg0) const {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "allow", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::GeolocationPermissions::clearAll() const {
    if (!::android::webkit::GeolocationPermissions::_class) ::android::webkit::GeolocationPermissions::_class = java::fetch_class("android/webkit/GeolocationPermissions");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebViewFragment::WebViewFragment() : ::java::lang::Object((jobject)0), ::android::app::Fragment((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::view::View_OnCreateContextMenuListener((jobject)0) {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::view::View android::webkit::WebViewFragment::onCreateView(const ::android::view::LayoutInflater& arg0, const ::android::view::ViewGroup& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateView", "(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::webkit::WebViewFragment::onPause() const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebViewFragment::onResume() const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebViewFragment::onDestroyView() const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroyView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebViewFragment::onDestroy() const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::webkit::WebView android::webkit::WebViewFragment::getWebView() const {
    if (!::android::webkit::WebViewFragment::_class) ::android::webkit::WebViewFragment::_class = java::fetch_class("android/webkit/WebViewFragment");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWebView", "()Landroid/webkit/WebView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebView _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebViewClient::WebViewClient() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::webkit::WebViewClient::shouldOverrideUrlLoading(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldOverrideUrlLoading", "(Landroid/webkit/WebView;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebViewClient::onPageStarted(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::android::graphics::Bitmap& arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageStarted", "(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::onPageFinished(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPageFinished", "(Landroid/webkit/WebView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebViewClient::onLoadResource(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadResource", "(Landroid/webkit/WebView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::webkit::WebResourceResponse android::webkit::WebViewClient::shouldInterceptRequest(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldInterceptRequest", "(Landroid/webkit/WebView;Ljava/lang/String;)Landroid/webkit/WebResourceResponse;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::webkit::WebResourceResponse _ret(ret);
    return _ret;
}

void android::webkit::WebViewClient::onTooManyRedirects(const ::android::webkit::WebView& arg0, const ::android::os::Message& arg1, const ::android::os::Message& arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTooManyRedirects", "(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::onReceivedError(const ::android::webkit::WebView& arg0, int32_t arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedError", "(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::webkit::WebViewClient::onFormResubmission(const ::android::webkit::WebView& arg0, const ::android::os::Message& arg1, const ::android::os::Message& arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFormResubmission", "(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::doUpdateVisitedHistory(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "doUpdateVisitedHistory", "(Landroid/webkit/WebView;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::onReceivedSslError(const ::android::webkit::WebView& arg0, const ::android::webkit::SslErrorHandler& arg1, const ::android::net::http::SslError& arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedSslError", "(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::onReceivedHttpAuthRequest(const ::android::webkit::WebView& arg0, const ::android::webkit::HttpAuthHandler& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedHttpAuthRequest", "(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::webkit::WebViewClient::shouldOverrideKeyEvent(const ::android::webkit::WebView& arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldOverrideKeyEvent", "(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebViewClient::onUnhandledKeyEvent(const ::android::webkit::WebView& arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onUnhandledKeyEvent", "(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebViewClient::onScaleChanged(const ::android::webkit::WebView& arg0, float arg1, float arg2) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScaleChanged", "(Landroid/webkit/WebView;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebViewClient::onReceivedLoginRequest(const ::android::webkit::WebView& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::android::webkit::WebViewClient::_class) ::android::webkit::WebViewClient::_class = java::fetch_class("android/webkit/WebViewClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedLoginRequest", "(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

std::vector< ::android::webkit::WebSettings_PluginState> android::webkit::WebSettings_PluginState::values(){
    if (!::android::webkit::WebSettings_PluginState::_class) ::android::webkit::WebSettings_PluginState::_class = java::fetch_class("android/webkit/WebSettings$PluginState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/WebSettings$PluginState;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::WebSettings_PluginState> _ret(rets, ::android::webkit::WebSettings_PluginState((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::WebSettings_PluginState retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::WebSettings_PluginState android::webkit::WebSettings_PluginState::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::WebSettings_PluginState::_class) ::android::webkit::WebSettings_PluginState::_class = java::fetch_class("android/webkit/WebSettings$PluginState");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/WebSettings$PluginState;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebSettings_PluginState _ret(ret);
    return _ret;
}

std::vector< ::android::webkit::WebSettings_ZoomDensity> android::webkit::WebSettings_ZoomDensity::values(){
    if (!::android::webkit::WebSettings_ZoomDensity::_class) ::android::webkit::WebSettings_ZoomDensity::_class = java::fetch_class("android/webkit/WebSettings$ZoomDensity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/WebSettings$ZoomDensity;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::WebSettings_ZoomDensity> _ret(rets, ::android::webkit::WebSettings_ZoomDensity((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::WebSettings_ZoomDensity retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::WebSettings_ZoomDensity android::webkit::WebSettings_ZoomDensity::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::WebSettings_ZoomDensity::_class) ::android::webkit::WebSettings_ZoomDensity::_class = java::fetch_class("android/webkit/WebSettings$ZoomDensity");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/WebSettings$ZoomDensity;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebSettings_ZoomDensity _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::CacheManager_CacheResult::CacheManager_CacheResult() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::webkit::CacheManager_CacheResult::getHttpStatusCode() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHttpStatusCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::webkit::CacheManager_CacheResult::getContentLength() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentLength", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String android::webkit::CacheManager_CacheResult::getLocalPath() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalPath", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t android::webkit::CacheManager_CacheResult::getExpires() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpires", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::lang::String android::webkit::CacheManager_CacheResult::getExpiresString() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpiresString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getLastModified() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastModified", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getETag() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getETag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getMimeType() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getLocation() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocation", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getEncoding() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::CacheManager_CacheResult::getContentDisposition() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDisposition", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::io::InputStream android::webkit::CacheManager_CacheResult::getInputStream() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputStream", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream android::webkit::CacheManager_CacheResult::getOutputStream() const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutputStream", "()Ljava/io/OutputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

void android::webkit::CacheManager_CacheResult::setInputStream(const ::java::io::InputStream& arg0) const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputStream", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::CacheManager_CacheResult::setEncoding(const ::java::lang::String& arg0) const {
    if (!::android::webkit::CacheManager_CacheResult::_class) ::android::webkit::CacheManager_CacheResult::_class = java::fetch_class("android/webkit/CacheManager$CacheResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::webkit::WebSettings_TextSize> android::webkit::WebSettings_TextSize::values(){
    if (!::android::webkit::WebSettings_TextSize::_class) ::android::webkit::WebSettings_TextSize::_class = java::fetch_class("android/webkit/WebSettings$TextSize");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/webkit/WebSettings$TextSize;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::webkit::WebSettings_TextSize> _ret(rets, ::android::webkit::WebSettings_TextSize((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::webkit::WebSettings_TextSize retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::webkit::WebSettings_TextSize android::webkit::WebSettings_TextSize::valueOf(const ::java::lang::String& arg0){
    if (!::android::webkit::WebSettings_TextSize::_class) ::android::webkit::WebSettings_TextSize::_class = java::fetch_class("android/webkit/WebSettings$TextSize");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/webkit/WebSettings$TextSize;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::webkit::WebSettings_TextSize _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebResourceResponse::WebResourceResponse(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::io::InputStream& arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::webkit::WebResourceResponse::setMimeType(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMimeType", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebResourceResponse::getMimeType() const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebResourceResponse::setEncoding(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEncoding", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebResourceResponse::getEncoding() const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebResourceResponse::setData(const ::java::io::InputStream& arg0) const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::io::InputStream android::webkit::WebResourceResponse::getData() const {
    if (!::android::webkit::WebResourceResponse::_class) ::android::webkit::WebResourceResponse::_class = java::fetch_class("android/webkit/WebResourceResponse");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/io/InputStream;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

void android::webkit::WebIconDatabase_IconListener::onReceivedIcon(const ::java::lang::String& arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::webkit::WebIconDatabase_IconListener::_class) ::android::webkit::WebIconDatabase_IconListener::_class = java::fetch_class("android/webkit/WebIconDatabase$IconListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceivedIcon", "(Ljava/lang/String;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::webkit::HttpAuthHandler::useHttpAuthUsernamePassword() const {
    if (!::android::webkit::HttpAuthHandler::_class) ::android::webkit::HttpAuthHandler::_class = java::fetch_class("android/webkit/HttpAuthHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "useHttpAuthUsernamePassword", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::HttpAuthHandler::cancel() const {
    if (!::android::webkit::HttpAuthHandler::_class) ::android::webkit::HttpAuthHandler::_class = java::fetch_class("android/webkit/HttpAuthHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::HttpAuthHandler::proceed(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::HttpAuthHandler::_class) ::android::webkit::HttpAuthHandler::_class = java::fetch_class("android/webkit/HttpAuthHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "proceed", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::webkit::MimeTypeMap::getFileExtensionFromUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getFileExtensionFromUrl", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::webkit::MimeTypeMap::hasMimeType(const ::java::lang::String& arg0) const {
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMimeType", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::MimeTypeMap::getMimeTypeFromExtension(const ::java::lang::String& arg0) const {
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMimeTypeFromExtension", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::webkit::MimeTypeMap::hasExtension(const ::java::lang::String& arg0) const {
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasExtension", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::MimeTypeMap::getExtensionFromMimeType(const ::java::lang::String& arg0) const {
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtensionFromMimeType", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::webkit::MimeTypeMap android::webkit::MimeTypeMap::getSingleton(){
    if (!::android::webkit::MimeTypeMap::_class) ::android::webkit::MimeTypeMap::_class = java::fetch_class("android/webkit/MimeTypeMap");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSingleton", "()Landroid/webkit/MimeTypeMap;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::MimeTypeMap _ret(ret);
    return _ret;
}

void android::webkit::WebView_PictureListener::onNewPicture(const ::android::webkit::WebView& arg0, const ::android::graphics::Picture& arg1) const {
    if (!::android::webkit::WebView_PictureListener::_class) ::android::webkit::WebView_PictureListener::_class = java::fetch_class("android/webkit/WebView$PictureListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNewPicture", "(Landroid/webkit/WebView;Landroid/graphics/Picture;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebView::WebView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebView::WebView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebView::WebView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebView::WebView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2, bool arg3) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewGroup_OnHierarchyChangeListener((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalFocusChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsoluteLayout((jobject)0) {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;IZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

bool android::webkit::WebView::shouldDelayChildPressedState() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setOverScrollMode(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setScrollBarStyle(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollBarStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setHorizontalScrollbarOverlay(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalScrollbarOverlay", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setVerticalScrollbarOverlay(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalScrollbarOverlay", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::overlayHorizontalScrollbar() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "overlayHorizontalScrollbar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::overlayVerticalScrollbar() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "overlayVerticalScrollbar", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::webkit::WebView::getVisibleTitleHeight() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVisibleTitleHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::net::http::SslCertificate android::webkit::WebView::getCertificate() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCertificate", "()Landroid/net/http/SslCertificate;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::http::SslCertificate _ret(ret);
    return _ret;
}

void android::webkit::WebView::setCertificate(const ::android::net::http::SslCertificate& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCertificate", "(Landroid/net/http/SslCertificate;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::savePassword(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "savePassword", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebView::setHttpAuthUsernamePassword(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHttpAuthUsernamePassword", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

std::vector< ::java::lang::String> android::webkit::WebView::getHttpAuthUsernamePassword(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHttpAuthUsernamePassword", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::webkit::WebView::destroy() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::enablePlatformNotifications(){
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enablePlatformNotifications", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::webkit::WebView::disablePlatformNotifications(){
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "disablePlatformNotifications", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void android::webkit::WebView::setNetworkAvailable(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNetworkAvailable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebBackForwardList android::webkit::WebView::saveState(const ::android::os::Bundle& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveState", "(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::webkit::WebBackForwardList _ret(ret);
    return _ret;
}

bool android::webkit::WebView::savePicture(const ::android::os::Bundle& arg0, const ::java::io::File& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "savePicture", "(Landroid/os/Bundle;Ljava/io/File;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::webkit::WebView::restorePicture(const ::android::os::Bundle& arg0, const ::java::io::File& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "restorePicture", "(Landroid/os/Bundle;Ljava/io/File;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::webkit::WebBackForwardList android::webkit::WebView::restoreState(const ::android::os::Bundle& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "restoreState", "(Landroid/os/Bundle;)Landroid/webkit/WebBackForwardList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::webkit::WebBackForwardList _ret(ret);
    return _ret;
}

void android::webkit::WebView::loadUrl(const ::java::lang::String& arg0, const ::java::util::Map& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadUrl", "(Ljava/lang/String;Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::loadUrl(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadUrl", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::postUrl(const ::java::lang::String& arg0, const std::vector< int8_t>& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "postUrl", "(Ljava/lang/String;[B)V");
    jobject _arg0 = arg0.obj;
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::loadData(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadData", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebView::loadDataWithBaseURL(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2, const ::java::lang::String& arg3, const ::java::lang::String& arg4) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadDataWithBaseURL", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::webkit::WebView::saveWebArchive(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveWebArchive", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::saveWebArchive(const ::java::lang::String& arg0, bool arg1, const ::android::webkit::ValueCallback& arg2) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "saveWebArchive", "(Ljava/lang/String;ZLandroid/webkit/ValueCallback;)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebView::stopLoading() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopLoading", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::reload() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "reload", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebView::canGoBack() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canGoBack", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebView::goBack() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "goBack", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebView::canGoForward() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canGoForward", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::WebView::goForward() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "goForward", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::WebView::canGoBackOrForward(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canGoBackOrForward", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::webkit::WebView::goBackOrForward(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "goBackOrForward", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::isPrivateBrowsingEnabled() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPrivateBrowsingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::pageUp(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pageUp", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::pageDown(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pageDown", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::webkit::WebView::clearView() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::graphics::Picture android::webkit::WebView::capturePicture() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "capturePicture", "()Landroid/graphics/Picture;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Picture _ret(ret);
    return _ret;
}

float android::webkit::WebView::getScale() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScale", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::webkit::WebView::setInitialScale(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInitialScale", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::invokeZoomPicker() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invokeZoomPicker", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::webkit::WebView_HitTestResult android::webkit::WebView::getHitTestResult() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHitTestResult", "()Landroid/webkit/WebView$HitTestResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebView_HitTestResult _ret(ret);
    return _ret;
}

void android::webkit::WebView::requestFocusNodeHref(const ::android::os::Message& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocusNodeHref", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::requestImageRef(const ::android::os::Message& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestImageRef", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::webkit::WebView::getUrl() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebView::getOriginalUrl() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginalUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebView::getTitle() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::webkit::WebView::getFavicon() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFavicon", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

int32_t android::webkit::WebView::getProgress() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProgress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::webkit::WebView::getContentHeight() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::webkit::WebView::pauseTimers() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pauseTimers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::resumeTimers() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "resumeTimers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::onPause() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::onResume() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onResume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::freeMemory() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "freeMemory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::clearCache(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearCache", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::clearFormData() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearFormData", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::clearHistory() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearHistory", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::clearSslPreferences() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearSslPreferences", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::webkit::WebBackForwardList android::webkit::WebView::copyBackForwardList() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyBackForwardList", "()Landroid/webkit/WebBackForwardList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebBackForwardList _ret(ret);
    return _ret;
}

void android::webkit::WebView::findNext(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "findNext", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebView::findAll(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "findAll", "(Ljava/lang/String;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::showFindDialog(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showFindDialog", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::webkit::WebView::findAddress(const ::java::lang::String& arg0){
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "findAddress", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::WebView::clearMatches() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearMatches", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::documentHasImages(const ::android::os::Message& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "documentHasImages", "(Landroid/os/Message;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::computeScroll() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::setWebViewClient(const ::android::webkit::WebViewClient& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWebViewClient", "(Landroid/webkit/WebViewClient;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setDownloadListener(const ::android::webkit::DownloadListener& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDownloadListener", "(Landroid/webkit/DownloadListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setWebChromeClient(const ::android::webkit::WebChromeClient& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWebChromeClient", "(Landroid/webkit/WebChromeClient;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setPictureListener(const ::android::webkit::WebView_PictureListener& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPictureListener", "(Landroid/webkit/WebView$PictureListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::addJavascriptInterface(const ::java::lang::Object& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addJavascriptInterface", "(Ljava/lang/Object;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::removeJavascriptInterface(const ::java::lang::String& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeJavascriptInterface", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebSettings android::webkit::WebView::getSettings() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSettings", "()Landroid/webkit/WebSettings;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebSettings _ret(ret);
    return _ret;
}

void android::webkit::WebView::setLayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLayoutParams", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::performLongClick() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performLongClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::inputmethod::InputConnection android::webkit::WebView::onCreateInputConnection(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputConnection", "(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

bool android::webkit::WebView::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::webkit::WebView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::webkit::WebView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::emulateShiftHeld() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "emulateShiftHeld", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebView::onChildViewAdded(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildViewAdded", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::onChildViewRemoved(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildViewRemoved", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::onGlobalFocusChanged(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGlobalFocusChanged", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::webkit::WebView::onWindowFocusChanged(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::onHoverEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onHoverEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::webkit::WebView::setMapTrackballToArrowKeys(bool arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMapTrackballToArrowKeys", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::WebView::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::webkit::WebView::flingScroll(int32_t arg0, int32_t arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "flingScroll", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::webkit::WebView::getZoomControls() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZoomControls", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::webkit::WebView::canZoomIn() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canZoomIn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::canZoomOut() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canZoomOut", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::zoomIn() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "zoomIn", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::zoomOut() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "zoomOut", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::webkit::WebView::requestFocus(int32_t arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestFocus", "(ILandroid/graphics/Rect;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::webkit::WebView::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::WebView::setBackgroundColor(int32_t arg0) const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::WebView::debugDump() const {
    if (!::android::webkit::WebView::_class) ::android::webkit::WebView::_class = java::fetch_class("android/webkit/WebView");
    static jmethodID mid = java::jni->GetMethodID(_class, "debugDump", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::URLUtil::URLUtil() : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String android::webkit::URLUtil::guessUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "guessUrl", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::URLUtil::composeSearchUrl(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "composeSearchUrl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< int8_t> android::webkit::URLUtil::decode(const std::vector< int8_t>& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "decode", "([B)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

bool android::webkit::URLUtil::isAssetUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAssetUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isCookielessProxyUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isCookielessProxyUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isFileUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isFileUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isAboutUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isAboutUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isDataUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isDataUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isJavaScriptUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isJavaScriptUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isHttpUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isHttpUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isHttpsUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isHttpsUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isNetworkUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isNetworkUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isContentUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isContentUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

bool android::webkit::URLUtil::isValidUrl(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isValidUrl", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

::java::lang::String android::webkit::URLUtil::stripAnchor(const ::java::lang::String& arg0){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "stripAnchor", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::URLUtil::guessFileName(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2){
    if (!::android::webkit::URLUtil::_class) ::android::webkit::URLUtil::_class = java::fetch_class("android/webkit/URLUtil");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "guessFileName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::webkit::WebHistoryItem android::webkit::WebBackForwardList::getCurrentItem() const {
    if (!::android::webkit::WebBackForwardList::_class) ::android::webkit::WebBackForwardList::_class = java::fetch_class("android/webkit/WebBackForwardList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentItem", "()Landroid/webkit/WebHistoryItem;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebHistoryItem _ret(ret);
    return _ret;
}

int32_t android::webkit::WebBackForwardList::getCurrentIndex() const {
    if (!::android::webkit::WebBackForwardList::_class) ::android::webkit::WebBackForwardList::_class = java::fetch_class("android/webkit/WebBackForwardList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::webkit::WebHistoryItem android::webkit::WebBackForwardList::getItemAtIndex(int32_t arg0) const {
    if (!::android::webkit::WebBackForwardList::_class) ::android::webkit::WebBackForwardList::_class = java::fetch_class("android/webkit/WebBackForwardList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemAtIndex", "(I)Landroid/webkit/WebHistoryItem;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::webkit::WebHistoryItem _ret(ret);
    return _ret;
}

int32_t android::webkit::WebBackForwardList::getSize() const {
    if (!::android::webkit::WebBackForwardList::_class) ::android::webkit::WebBackForwardList::_class = java::fetch_class("android/webkit/WebBackForwardList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::webkit::CookieManager android::webkit::CookieManager::getInstance(){
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Landroid/webkit/CookieManager;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::android::webkit::CookieManager _ret(ret);
    return _ret;
}

void android::webkit::CookieManager::setAcceptCookie(bool arg0) const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAcceptCookie", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::webkit::CookieManager::acceptCookie() const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "acceptCookie", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::CookieManager::setCookie(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCookie", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::webkit::CookieManager::getCookie(const ::java::lang::String& arg0) const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCookie", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::webkit::CookieManager::removeSessionCookie() const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeSessionCookie", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::CookieManager::removeAllCookie() const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllCookie", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::CookieManager::hasCookies() const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasCookies", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::webkit::CookieManager::removeExpiredCookie() const {
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeExpiredCookie", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::webkit::CookieManager::allowFileSchemeCookies(){
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allowFileSchemeCookies", "()Z");
    return java::jni->CallStaticBooleanMethod(_class, mid);
}

void android::webkit::CookieManager::setAcceptFileSchemeCookies(bool arg0){
    if (!::android::webkit::CookieManager::_class) ::android::webkit::CookieManager::_class = java::fetch_class("android/webkit/CookieManager");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setAcceptFileSchemeCookies", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void android::webkit::GeolocationPermissions_Callback::invoke(const ::java::lang::String& arg0, bool arg1, bool arg2) const {
    if (!::android::webkit::GeolocationPermissions_Callback::_class) ::android::webkit::GeolocationPermissions_Callback::_class = java::fetch_class("android/webkit/GeolocationPermissions$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "invoke", "(Ljava/lang/String;ZZ)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::webkit::ValueCallback::onReceiveValue(const ::java::lang::Object& arg0) const {
    if (!::android::webkit::ValueCallback::_class) ::android::webkit::ValueCallback::_class = java::fetch_class("android/webkit/ValueCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onReceiveValue", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::webkit::JsResult::cancel() const {
    if (!::android::webkit::JsResult::_class) ::android::webkit::JsResult::_class = java::fetch_class("android/webkit/JsResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::JsResult::confirm() const {
    if (!::android::webkit::JsResult::_class) ::android::webkit::JsResult::_class = java::fetch_class("android/webkit/JsResult");
    static jmethodID mid = java::jni->GetMethodID(_class, "confirm", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::webkit::WebStorage_QuotaUpdater::updateQuota(int64_t arg0) const {
    if (!::android::webkit::WebStorage_QuotaUpdater::_class) ::android::webkit::WebStorage_QuotaUpdater::_class = java::fetch_class("android/webkit/WebStorage$QuotaUpdater");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateQuota", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::webkit::WebHistoryItem::getId() const {
    if (!::android::webkit::WebHistoryItem::_class) ::android::webkit::WebHistoryItem::_class = java::fetch_class("android/webkit/WebHistoryItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::webkit::WebHistoryItem::getUrl() const {
    if (!::android::webkit::WebHistoryItem::_class) ::android::webkit::WebHistoryItem::_class = java::fetch_class("android/webkit/WebHistoryItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebHistoryItem::getOriginalUrl() const {
    if (!::android::webkit::WebHistoryItem::_class) ::android::webkit::WebHistoryItem::_class = java::fetch_class("android/webkit/WebHistoryItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOriginalUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String android::webkit::WebHistoryItem::getTitle() const {
    if (!::android::webkit::WebHistoryItem::_class) ::android::webkit::WebHistoryItem::_class = java::fetch_class("android/webkit/WebHistoryItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::graphics::Bitmap android::webkit::WebHistoryItem::getFavicon() const {
    if (!::android::webkit::WebHistoryItem::_class) ::android::webkit::WebHistoryItem::_class = java::fetch_class("android/webkit/WebHistoryItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFavicon", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::webkit::WebView_WebViewTransport::WebView_WebViewTransport(const ::android::webkit::WebView& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::webkit::WebView_WebViewTransport::_class) ::android::webkit::WebView_WebViewTransport::_class = java::fetch_class("android/webkit/WebView$WebViewTransport");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/webkit/WebView;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::webkit::WebView_WebViewTransport::setWebView(const ::android::webkit::WebView& arg0) const {
    if (!::android::webkit::WebView_WebViewTransport::_class) ::android::webkit::WebView_WebViewTransport::_class = java::fetch_class("android/webkit/WebView$WebViewTransport");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWebView", "(Landroid/webkit/WebView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::webkit::WebView android::webkit::WebView_WebViewTransport::getWebView() const {
    if (!::android::webkit::WebView_WebViewTransport::_class) ::android::webkit::WebView_WebViewTransport::_class = java::fetch_class("android/webkit/WebView$WebViewTransport");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWebView", "()Landroid/webkit/WebView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::webkit::WebView _ret(ret);
    return _ret;
}

