#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.UpdateAppearance.hpp"

namespace android { namespace text { class TextPaint; } }
namespace android { namespace view { class View; } }

namespace android {
namespace text {
namespace style {
class ClickableSpan : public virtual ::java::lang::Object,
                      public virtual ::android::text::style::CharacterStyle,
                      public virtual ::android::text::style::UpdateAppearance {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClickableSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClickableSpan(const ::android::text::style::ClickableSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    ClickableSpan(::android::text::style::ClickableSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::ClickableSpan& operator=(const ::android::text::style::ClickableSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::ClickableSpan& operator=(::android::text::style::ClickableSpan&& x) {obj = std::move(x.obj); return *this;}
    
    ClickableSpan();
    void onClick(const ::android::view::View&) const;
    void updateDrawState(const ::android::text::TextPaint&) const;

};
}
}
}


