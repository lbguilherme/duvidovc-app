#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.ParagraphStyle.hpp"


namespace android {
namespace text {
namespace style {
class WrapTogetherSpan : public virtual ::java::lang::Object,
                         public virtual ::android::text::style::ParagraphStyle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WrapTogetherSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WrapTogetherSpan(const ::android::text::style::WrapTogetherSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    WrapTogetherSpan(::android::text::style::WrapTogetherSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::WrapTogetherSpan& operator=(const ::android::text::style::WrapTogetherSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::WrapTogetherSpan& operator=(::android::text::style::WrapTogetherSpan&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


