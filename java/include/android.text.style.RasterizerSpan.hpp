#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.UpdateAppearance.hpp"

namespace android { namespace graphics { class Rasterizer; } }
namespace android { namespace text { class TextPaint; } }

namespace android {
namespace text {
namespace style {
class RasterizerSpan : public virtual ::java::lang::Object,
                       public virtual ::android::text::style::CharacterStyle,
                       public virtual ::android::text::style::UpdateAppearance {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RasterizerSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RasterizerSpan(const ::android::text::style::RasterizerSpan& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    RasterizerSpan(::android::text::style::RasterizerSpan&& x) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::RasterizerSpan& operator=(const ::android::text::style::RasterizerSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::RasterizerSpan& operator=(::android::text::style::RasterizerSpan&& x) {obj = std::move(x.obj); return *this;}
    
    RasterizerSpan(const ::android::graphics::Rasterizer&);
    ::android::graphics::Rasterizer getRasterizer() const;
    void updateDrawState(const ::android::text::TextPaint&) const;

};
}
}
}


