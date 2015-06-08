#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.ParagraphStyle.hpp"

namespace android { namespace text { class Layout_Alignment; } }

namespace android {
namespace text {
namespace style {
class AlignmentSpan : public virtual ::java::lang::Object,
                      public virtual ::android::text::style::ParagraphStyle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlignmentSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlignmentSpan(const ::android::text::style::AlignmentSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    AlignmentSpan(::android::text::style::AlignmentSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::AlignmentSpan& operator=(const ::android::text::style::AlignmentSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::AlignmentSpan& operator=(::android::text::style::AlignmentSpan&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::text::Layout_Alignment getAlignment() const;

};
}
}
}

#include "android.text.style.AlignmentSpan_Standard.hpp"

