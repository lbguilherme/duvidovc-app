#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { namespace http { class SslError; } } }
namespace android { namespace os { class Message; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace webkit { class HttpAuthHandler; } }
namespace android { namespace webkit { class SslErrorHandler; } }
namespace android { namespace webkit { class WebResourceResponse; } }
namespace android { namespace webkit { class WebView; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebViewClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebViewClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebViewClient(const ::android::webkit::WebViewClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebViewClient(::android::webkit::WebViewClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebViewClient& operator=(const ::android::webkit::WebViewClient& x) {obj = x.obj; return *this;}
    ::android::webkit::WebViewClient& operator=(::android::webkit::WebViewClient&& x) {obj = std::move(x.obj); return *this;}
    
    WebViewClient();
    bool shouldOverrideUrlLoading(const ::android::webkit::WebView&, const ::java::lang::String&) const ;
    void onPageStarted(const ::android::webkit::WebView&, const ::java::lang::String&, const ::android::graphics::Bitmap&) const ;
    void onPageFinished(const ::android::webkit::WebView&, const ::java::lang::String&) const ;
    void onLoadResource(const ::android::webkit::WebView&, const ::java::lang::String&) const ;
    ::android::webkit::WebResourceResponse shouldInterceptRequest(const ::android::webkit::WebView&, const ::java::lang::String&) const ;
    void onTooManyRedirects(const ::android::webkit::WebView&, const ::android::os::Message&, const ::android::os::Message&) const ;
    void onReceivedError(const ::android::webkit::WebView&, int32_t, const ::java::lang::String&, const ::java::lang::String&) const ;
    void onFormResubmission(const ::android::webkit::WebView&, const ::android::os::Message&, const ::android::os::Message&) const ;
    void doUpdateVisitedHistory(const ::android::webkit::WebView&, const ::java::lang::String&, bool) const ;
    void onReceivedSslError(const ::android::webkit::WebView&, const ::android::webkit::SslErrorHandler&, const ::android::net::http::SslError&) const ;
    void onReceivedHttpAuthRequest(const ::android::webkit::WebView&, const ::android::webkit::HttpAuthHandler&, const ::java::lang::String&, const ::java::lang::String&) const ;
    bool shouldOverrideKeyEvent(const ::android::webkit::WebView&, const ::android::view::KeyEvent&) const ;
    void onUnhandledKeyEvent(const ::android::webkit::WebView&, const ::android::view::KeyEvent&) const ;
    void onScaleChanged(const ::android::webkit::WebView&, float, float) const ;
    void onReceivedLoginRequest(const ::android::webkit::WebView&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const ;

};
}
}


