#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.webkit.WebViewClient.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { namespace http { class SslError; } } }
namespace android { namespace webkit { class SslErrorHandler; } }
namespace android { namespace webkit { class WebView; } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace internal {
class WebDialog_DialogWebViewClient : public virtual ::java::lang::Object,
                                      public virtual ::android::webkit::WebViewClient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebDialog_DialogWebViewClient(jobject _obj) : ::java::lang::Object(_obj), ::android::webkit::WebViewClient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebDialog_DialogWebViewClient(const ::com::facebook::internal::WebDialog_DialogWebViewClient& x) : ::java::lang::Object((jobject)0), ::android::webkit::WebViewClient((jobject)0) {obj = x.obj;}
    WebDialog_DialogWebViewClient(::com::facebook::internal::WebDialog_DialogWebViewClient&& x) : ::java::lang::Object((jobject)0), ::android::webkit::WebViewClient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::WebDialog_DialogWebViewClient& operator=(const ::com::facebook::internal::WebDialog_DialogWebViewClient& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::WebDialog_DialogWebViewClient& operator=(::com::facebook::internal::WebDialog_DialogWebViewClient&& x) {obj = std::move(x.obj); return *this;}
    
    bool shouldOverrideUrlLoading(const ::android::webkit::WebView&, const ::java::lang::String&) const;
    void onReceivedError(const ::android::webkit::WebView&, int32_t, const ::java::lang::String&, const ::java::lang::String&) const;
    void onReceivedSslError(const ::android::webkit::WebView&, const ::android::webkit::SslErrorHandler&, const ::android::net::http::SslError&) const;
    void onPageStarted(const ::android::webkit::WebView&, const ::java::lang::String&, const ::android::graphics::Bitmap&) const;
    void onPageFinished(const ::android::webkit::WebView&, const ::java::lang::String&) const;

};
}
}
}


