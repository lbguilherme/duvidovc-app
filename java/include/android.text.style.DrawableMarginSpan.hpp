#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.LeadingMarginSpan.hpp"
#include "android.text.style.LineHeightSpan.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Paint_FontMetricsInt; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace text { class Layout; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class DrawableMarginSpan : public virtual ::java::lang::Object,
                           public virtual ::android::text::style::LeadingMarginSpan,
                           public virtual ::android::text::style::LineHeightSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableMarginSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::LeadingMarginSpan(_obj), ::android::text::style::LineHeightSpan(_obj), ::android::text::style::ParagraphStyle(_obj), ::android::text::style::WrapTogetherSpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableMarginSpan(const ::android::text::style::DrawableMarginSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj;}
    DrawableMarginSpan(::android::text::style::DrawableMarginSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::DrawableMarginSpan& operator=(const ::android::text::style::DrawableMarginSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::DrawableMarginSpan& operator=(::android::text::style::DrawableMarginSpan&& x) {obj = std::move(x.obj); return *this;}
    
    DrawableMarginSpan(const ::android::graphics::drawable::Drawable&);
    DrawableMarginSpan(const ::android::graphics::drawable::Drawable&, int32_t);
    int32_t getLeadingMargin(bool) const ;
    void drawLeadingMargin(const ::android::graphics::Canvas&, const ::android::graphics::Paint&, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t, bool, const ::android::text::Layout&) const ;
    void chooseHeight(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Paint_FontMetricsInt&) const ;

};
}
}
}


