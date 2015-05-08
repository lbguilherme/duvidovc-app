#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebView_HitTestResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebView_HitTestResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebView_HitTestResult(const ::android::webkit::WebView_HitTestResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebView_HitTestResult(::android::webkit::WebView_HitTestResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebView_HitTestResult& operator=(const ::android::webkit::WebView_HitTestResult& x) {obj = x.obj; return *this;}
    ::android::webkit::WebView_HitTestResult& operator=(::android::webkit::WebView_HitTestResult&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getType() const ;
    ::java::lang::String getExtra() const ;

};
}
}


