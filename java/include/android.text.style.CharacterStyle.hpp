#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { namespace style { class CharacterStyle; } } }

namespace android {
namespace text {
namespace style {
class CharacterStyle : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CharacterStyle(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CharacterStyle(const ::android::text::style::CharacterStyle& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CharacterStyle(::android::text::style::CharacterStyle&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::CharacterStyle& operator=(const ::android::text::style::CharacterStyle& x) {obj = x.obj; return *this;}
    ::android::text::style::CharacterStyle& operator=(::android::text::style::CharacterStyle&& x) {obj = std::move(x.obj); return *this;}
    
    CharacterStyle();
    void updateDrawState(const ::android::text::TextPaint&) const;
    static ::android::text::style::CharacterStyle wrap(const ::android::text::style::CharacterStyle&);
    ::android::text::style::CharacterStyle getUnderlying() const;

};
}
}
}


