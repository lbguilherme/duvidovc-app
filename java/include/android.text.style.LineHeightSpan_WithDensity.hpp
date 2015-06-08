#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.LineHeightSpan.hpp"

namespace android { namespace graphics { class Paint_FontMetricsInt; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class LineHeightSpan_WithDensity : public virtual ::java::lang::Object,
                                   public virtual ::android::text::style::LineHeightSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LineHeightSpan_WithDensity(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::LineHeightSpan(_obj), ::android::text::style::ParagraphStyle(_obj), ::android::text::style::WrapTogetherSpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LineHeightSpan_WithDensity(const ::android::text::style::LineHeightSpan_WithDensity& x) : ::java::lang::Object((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj;}
    LineHeightSpan_WithDensity(::android::text::style::LineHeightSpan_WithDensity&& x) : ::java::lang::Object((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::LineHeightSpan_WithDensity& operator=(const ::android::text::style::LineHeightSpan_WithDensity& x) {obj = x.obj; return *this;}
    ::android::text::style::LineHeightSpan_WithDensity& operator=(::android::text::style::LineHeightSpan_WithDensity&& x) {obj = std::move(x.obj); return *this;}
    
    void chooseHeight(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Paint_FontMetricsInt&, const ::android::text::TextPaint&) const;

};
}
}
}


