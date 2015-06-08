#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.UpdateAppearance.hpp"

namespace android { namespace graphics { class MaskFilter; } }
namespace android { namespace text { class TextPaint; } }

namespace android {
namespace text {
namespace style {
class MaskFilterSpan : public virtual ::java::lang::Object,
                       public virtual ::android::text::style::CharacterStyle,
                       public virtual ::android::text::style::UpdateAppearance {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MaskFilterSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MaskFilterSpan(const ::android::text::style::MaskFilterSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    MaskFilterSpan(::android::text::style::MaskFilterSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::MaskFilterSpan& operator=(const ::android::text::style::MaskFilterSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::MaskFilterSpan& operator=(::android::text::style::MaskFilterSpan&& x) {obj = std::move(x.obj); return *this;}
    
    MaskFilterSpan(const ::android::graphics::MaskFilter&);
    ::android::graphics::MaskFilter getMaskFilter() const;
    void updateDrawState(const ::android::text::TextPaint&) const;

};
}
}
}


