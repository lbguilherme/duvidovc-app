#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.webkit.JsResult.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class JsPromptResult : public virtual ::java::lang::Object,
                       public virtual ::android::webkit::JsResult {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsPromptResult(jobject _obj) : ::java::lang::Object(_obj), ::android::webkit::JsResult(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsPromptResult(const ::android::webkit::JsPromptResult& x) : ::java::lang::Object((jobject)0), ::android::webkit::JsResult((jobject)0) {obj = x.obj;}
    JsPromptResult(::android::webkit::JsPromptResult&& x) : ::java::lang::Object((jobject)0), ::android::webkit::JsResult((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::JsPromptResult& operator=(const ::android::webkit::JsPromptResult& x) {obj = x.obj; return *this;}
    ::android::webkit::JsPromptResult& operator=(::android::webkit::JsPromptResult&& x) {obj = std::move(x.obj); return *this;}
    
    void confirm(const ::java::lang::String&) const ;

};
}
}


