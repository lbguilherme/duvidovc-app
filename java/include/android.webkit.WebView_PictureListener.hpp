#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Picture; } }
namespace android { namespace webkit { class WebView; } }

namespace android {
namespace webkit {
class WebView_PictureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebView_PictureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebView_PictureListener(const ::android::webkit::WebView_PictureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebView_PictureListener(::android::webkit::WebView_PictureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebView_PictureListener& operator=(const ::android::webkit::WebView_PictureListener& x) {obj = x.obj; return *this;}
    ::android::webkit::WebView_PictureListener& operator=(::android::webkit::WebView_PictureListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onNewPicture(const ::android::webkit::WebView&, const ::android::graphics::Picture&) const;

};
}
}


