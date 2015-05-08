#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace webkit {
class WebChromeClient_CustomViewCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebChromeClient_CustomViewCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebChromeClient_CustomViewCallback(const ::android::webkit::WebChromeClient_CustomViewCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebChromeClient_CustomViewCallback(::android::webkit::WebChromeClient_CustomViewCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebChromeClient_CustomViewCallback& operator=(const ::android::webkit::WebChromeClient_CustomViewCallback& x) {obj = x.obj; return *this;}
    ::android::webkit::WebChromeClient_CustomViewCallback& operator=(::android::webkit::WebChromeClient_CustomViewCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onCustomViewHidden() const ;

};
}
}


