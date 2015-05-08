#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace os { class Message; } }
namespace android { namespace view { class View; } }
namespace android { namespace webkit { class ConsoleMessage; } }
namespace android { namespace webkit { class GeolocationPermissions_Callback; } }
namespace android { namespace webkit { class JsPromptResult; } }
namespace android { namespace webkit { class JsResult; } }
namespace android { namespace webkit { class ValueCallback; } }
namespace android { namespace webkit { class WebChromeClient_CustomViewCallback; } }
namespace android { namespace webkit { class WebStorage_QuotaUpdater; } }
namespace android { namespace webkit { class WebView; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebChromeClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebChromeClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebChromeClient(const ::android::webkit::WebChromeClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebChromeClient(::android::webkit::WebChromeClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebChromeClient& operator=(const ::android::webkit::WebChromeClient& x) {obj = x.obj; return *this;}
    ::android::webkit::WebChromeClient& operator=(::android::webkit::WebChromeClient&& x) {obj = std::move(x.obj); return *this;}
    
    WebChromeClient();
    void onProgressChanged(const ::android::webkit::WebView&, int32_t) const ;
    void onReceivedTitle(const ::android::webkit::WebView&, const ::java::lang::String&) const ;
    void onReceivedIcon(const ::android::webkit::WebView&, const ::android::graphics::Bitmap&) const ;
    void onReceivedTouchIconUrl(const ::android::webkit::WebView&, const ::java::lang::String&, bool) const ;
    void onShowCustomView(const ::android::view::View&, const ::android::webkit::WebChromeClient_CustomViewCallback&) const ;
    void onShowCustomView(const ::android::view::View&, int32_t, const ::android::webkit::WebChromeClient_CustomViewCallback&) const ;
    void onHideCustomView() const ;
    bool onCreateWindow(const ::android::webkit::WebView&, bool, bool, const ::android::os::Message&) const ;
    void onRequestFocus(const ::android::webkit::WebView&) const ;
    void onCloseWindow(const ::android::webkit::WebView&) const ;
    bool onJsAlert(const ::android::webkit::WebView&, const ::java::lang::String&, const ::java::lang::String&, const ::android::webkit::JsResult&) const ;
    bool onJsConfirm(const ::android::webkit::WebView&, const ::java::lang::String&, const ::java::lang::String&, const ::android::webkit::JsResult&) const ;
    bool onJsPrompt(const ::android::webkit::WebView&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::android::webkit::JsPromptResult&) const ;
    bool onJsBeforeUnload(const ::android::webkit::WebView&, const ::java::lang::String&, const ::java::lang::String&, const ::android::webkit::JsResult&) const ;
    void onExceededDatabaseQuota(const ::java::lang::String&, const ::java::lang::String&, int64_t, int64_t, int64_t, const ::android::webkit::WebStorage_QuotaUpdater&) const ;
    void onReachedMaxAppCacheSize(int64_t, int64_t, const ::android::webkit::WebStorage_QuotaUpdater&) const ;
    void onGeolocationPermissionsShowPrompt(const ::java::lang::String&, const ::android::webkit::GeolocationPermissions_Callback&) const ;
    void onGeolocationPermissionsHidePrompt() const ;
    bool onJsTimeout() const ;
    void onConsoleMessage(const ::java::lang::String&, int32_t, const ::java::lang::String&) const ;
    bool onConsoleMessage(const ::android::webkit::ConsoleMessage&) const ;
    ::android::graphics::Bitmap getDefaultVideoPoster() const ;
    ::android::view::View getVideoLoadingProgressView() const ;
    void getVisitedHistory(const ::android::webkit::ValueCallback&) const ;

};
}
}

#include "android.webkit.WebChromeClient_CustomViewCallback.hpp"

