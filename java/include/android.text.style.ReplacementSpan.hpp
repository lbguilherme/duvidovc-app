#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.MetricAffectingSpan.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Paint_FontMetricsInt; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class ReplacementSpan : public virtual ::java::lang::Object,
                        public virtual ::android::text::style::MetricAffectingSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReplacementSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReplacementSpan(const ::android::text::style::ReplacementSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    ReplacementSpan(::android::text::style::ReplacementSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::ReplacementSpan& operator=(const ::android::text::style::ReplacementSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::ReplacementSpan& operator=(::android::text::style::ReplacementSpan&& x) {obj = std::move(x.obj); return *this;}
    
    ReplacementSpan();
    int32_t getSize(const ::android::graphics::Paint&, const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::graphics::Paint_FontMetricsInt&) const ;
    void draw(const ::android::graphics::Canvas&, const ::java::lang::CharSequence&, int32_t, int32_t, float, int32_t, int32_t, int32_t, const ::android::graphics::Paint&) const ;
    void updateMeasureState(const ::android::text::TextPaint&) const ;
    void updateDrawState(const ::android::text::TextPaint&) const ;

};
}
}
}


