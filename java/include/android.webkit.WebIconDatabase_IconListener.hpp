#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace webkit {
class WebIconDatabase_IconListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WebIconDatabase_IconListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WebIconDatabase_IconListener(const ::android::webkit::WebIconDatabase_IconListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WebIconDatabase_IconListener(::android::webkit::WebIconDatabase_IconListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::webkit::WebIconDatabase_IconListener& operator=(const ::android::webkit::WebIconDatabase_IconListener& x) {obj = x.obj; return *this;}
    ::android::webkit::WebIconDatabase_IconListener& operator=(::android::webkit::WebIconDatabase_IconListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onReceivedIcon(const ::java::lang::String&, const ::android::graphics::Bitmap&) const;

};
}
}


