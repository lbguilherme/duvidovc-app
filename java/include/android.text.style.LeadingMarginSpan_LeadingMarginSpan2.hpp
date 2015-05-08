#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.LeadingMarginSpan.hpp"
#include "android.text.style.WrapTogetherSpan.hpp"


namespace android {
namespace text {
namespace style {
class LeadingMarginSpan_LeadingMarginSpan2 : public virtual ::java::lang::Object,
                                             public virtual ::android::text::style::LeadingMarginSpan,
                                             public virtual ::android::text::style::WrapTogetherSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LeadingMarginSpan_LeadingMarginSpan2(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::LeadingMarginSpan(_obj), ::android::text::style::ParagraphStyle(_obj), ::android::text::style::WrapTogetherSpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LeadingMarginSpan_LeadingMarginSpan2(const ::android::text::style::LeadingMarginSpan_LeadingMarginSpan2& x) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj;}
    LeadingMarginSpan_LeadingMarginSpan2(::android::text::style::LeadingMarginSpan_LeadingMarginSpan2&& x) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::LeadingMarginSpan_LeadingMarginSpan2& operator=(const ::android::text::style::LeadingMarginSpan_LeadingMarginSpan2& x) {obj = x.obj; return *this;}
    ::android::text::style::LeadingMarginSpan_LeadingMarginSpan2& operator=(::android::text::style::LeadingMarginSpan_LeadingMarginSpan2&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLeadingMarginLineCount() const ;

};
}
}
}


