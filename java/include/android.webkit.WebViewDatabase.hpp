#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace webkit { class WebViewDatabase; } }

namespace android {
namespace webkit {
class WebViewDatabase : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebViewDatabase(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebViewDatabase(const ::android::webkit::WebViewDatabase& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebViewDatabase(::android::webkit::WebViewDatabase&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebViewDatabase& operator=(const ::android::webkit::WebViewDatabase& x) {obj = x.obj; return *this;}
    ::android::webkit::WebViewDatabase& operator=(::android::webkit::WebViewDatabase&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::webkit::WebViewDatabase getInstance(const ::android::content::Context&);
    bool hasUsernamePassword() const ;
    void clearUsernamePassword() const ;
    bool hasHttpAuthUsernamePassword() const ;
    void clearHttpAuthUsernamePassword() const ;
    bool hasFormData() const ;
    void clearFormData() const ;

};
}
}


