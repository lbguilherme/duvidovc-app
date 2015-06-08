#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.UpdateLayout.hpp"

namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { namespace style { class MetricAffectingSpan; } } }

namespace android {
namespace text {
namespace style {
class MetricAffectingSpan : public virtual ::java::lang::Object,
                            public virtual ::android::text::style::CharacterStyle,
                            public virtual ::android::text::style::UpdateLayout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MetricAffectingSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MetricAffectingSpan(const ::android::text::style::MetricAffectingSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    MetricAffectingSpan(::android::text::style::MetricAffectingSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::MetricAffectingSpan& operator=(const ::android::text::style::MetricAffectingSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::MetricAffectingSpan& operator=(::android::text::style::MetricAffectingSpan&& x) {obj = std::move(x.obj); return *this;}
    
    MetricAffectingSpan();
    void updateMeasureState(const ::android::text::TextPaint&) const;
    ::android::text::style::MetricAffectingSpan getUnderlying() const;

};
}
}
}


