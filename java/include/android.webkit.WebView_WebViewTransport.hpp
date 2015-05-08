#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace webkit { class WebView; } }

namespace android {
namespace webkit {
class WebView_WebViewTransport : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebView_WebViewTransport(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebView_WebViewTransport(const ::android::webkit::WebView_WebViewTransport& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebView_WebViewTransport(::android::webkit::WebView_WebViewTransport&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebView_WebViewTransport& operator=(const ::android::webkit::WebView_WebViewTransport& x) {obj = x.obj; return *this;}
    ::android::webkit::WebView_WebViewTransport& operator=(::android::webkit::WebView_WebViewTransport&& x) {obj = std::move(x.obj); return *this;}
    
    WebView_WebViewTransport(const ::android::webkit::WebView&);
    void setWebView(const ::android::webkit::WebView&) const ;
    ::android::webkit::WebView getWebView() const ;

};
}
}


