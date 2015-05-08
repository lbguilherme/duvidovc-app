#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.ReplacementSpan.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Paint_FontMetricsInt; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class DynamicDrawableSpan : public virtual ::java::lang::Object,
                            public virtual ::android::text::style::ReplacementSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DynamicDrawableSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::ReplacementSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DynamicDrawableSpan(const ::android::text::style::DynamicDrawableSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    DynamicDrawableSpan(::android::text::style::DynamicDrawableSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::DynamicDrawableSpan& operator=(const ::android::text::style::DynamicDrawableSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::DynamicDrawableSpan& operator=(::android::text::style::DynamicDrawableSpan&& x) {obj = std::move(x.obj); return *this;}
    
    DynamicDrawableSpan();
    int32_t getVerticalAlignment() const ;
    ::android::graphics::drawable::Drawable getDrawable() const ;
    int32_t getSize(const ::android::graphics::Paint&, const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::graphics::Paint_FontMetricsInt&) const ;
    void draw(const ::android::graphics::Canvas&, const ::java::lang::CharSequence&, int32_t, int32_t, float, int32_t, int32_t, int32_t, const ::android::graphics::Paint&) const ;

};
}
}
}


