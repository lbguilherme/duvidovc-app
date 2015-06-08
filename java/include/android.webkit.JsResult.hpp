#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace webkit {
class JsResult : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JsResult(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JsResult(const ::android::webkit::JsResult& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JsResult(::android::webkit::JsResult&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::JsResult& operator=(const ::android::webkit::JsResult& x) {obj = x.obj; return *this;}
    ::android::webkit::JsResult& operator=(::android::webkit::JsResult&& x) {obj = std::move(x.obj); return *this;}
    
    void cancel() const;
    void confirm() const;

};
}
}


