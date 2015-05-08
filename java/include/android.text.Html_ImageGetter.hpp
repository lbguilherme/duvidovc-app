#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class Html_ImageGetter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Html_ImageGetter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Html_ImageGetter(const ::android::text::Html_ImageGetter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Html_ImageGetter(::android::text::Html_ImageGetter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Html_ImageGetter& operator=(const ::android::text::Html_ImageGetter& x) {obj = x.obj; return *this;}
    ::android::text::Html_ImageGetter& operator=(::android::text::Html_ImageGetter&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::graphics::drawable::Drawable getDrawable(const ::java::lang::String&) const ;

};
}
}


