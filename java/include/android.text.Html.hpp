#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Html_ImageGetter; } }
namespace android { namespace text { class Html_TagHandler; } }
namespace android { namespace text { class Spanned; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class Html : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Html(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Html(const ::android::text::Html& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Html(::android::text::Html&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Html& operator=(const ::android::text::Html& x) {obj = x.obj; return *this;}
    ::android::text::Html& operator=(::android::text::Html&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::text::Spanned fromHtml(const ::java::lang::String&);
    static ::android::text::Spanned fromHtml(const ::java::lang::String&, const ::android::text::Html_ImageGetter&, const ::android::text::Html_TagHandler&);
    static ::java::lang::String toHtml(const ::android::text::Spanned&);

};
}
}

#include "android.text.Html_ImageGetter.hpp"
#include "android.text.Html_TagHandler.hpp"

