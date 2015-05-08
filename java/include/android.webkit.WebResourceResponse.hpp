#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebResourceResponse : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebResourceResponse(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebResourceResponse(const ::android::webkit::WebResourceResponse& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebResourceResponse(::android::webkit::WebResourceResponse&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebResourceResponse& operator=(const ::android::webkit::WebResourceResponse& x) {obj = x.obj; return *this;}
    ::android::webkit::WebResourceResponse& operator=(::android::webkit::WebResourceResponse&& x) {obj = std::move(x.obj); return *this;}
    
    WebResourceResponse(const ::java::lang::String&, const ::java::lang::String&, const ::java::io::InputStream&);
    void setMimeType(const ::java::lang::String&) const ;
    ::java::lang::String getMimeType() const ;
    void setEncoding(const ::java::lang::String&) const ;
    ::java::lang::String getEncoding() const ;
    void setData(const ::java::io::InputStream&) const ;
    ::java::io::InputStream getData() const ;

};
}
}


