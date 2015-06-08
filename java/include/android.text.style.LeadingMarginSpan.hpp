#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.ParagraphStyle.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace text { class Layout; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class LeadingMarginSpan : public virtual ::java::lang::Object,
                          public virtual ::android::text::style::ParagraphStyle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LeadingMarginSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LeadingMarginSpan(const ::android::text::style::LeadingMarginSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    LeadingMarginSpan(::android::text::style::LeadingMarginSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::LeadingMarginSpan& operator=(const ::android::text::style::LeadingMarginSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::LeadingMarginSpan& operator=(::android::text::style::LeadingMarginSpan&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getLeadingMargin(bool) const;
    void drawLeadingMargin(const ::android::graphics::Canvas&, const ::android::graphics::Paint&, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t, bool, const ::android::text::Layout&) const;

};
}
}
}

#include "android.text.style.LeadingMarginSpan_LeadingMarginSpan2.hpp"
#include "android.text.style.LeadingMarginSpan_Standard.hpp"

