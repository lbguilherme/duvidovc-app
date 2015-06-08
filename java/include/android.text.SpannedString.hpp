#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.GetChars.hpp"
#include "android.text.SpannableStringInternal.hpp"
#include "android.text.Spanned.hpp"
#include "java.lang.CharSequence.hpp"

namespace android { namespace text { class SpannedString; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
class SpannedString : public virtual ::java::lang::Object,
                      public virtual ::android::text::GetChars,
                      public virtual ::android::text::SpannableStringInternal,
                      public virtual ::android::text::Spanned,
                      public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpannedString(jobject _obj) : ::java::lang::Object(_obj), ::android::text::GetChars(_obj), ::android::text::SpannableStringInternal(_obj), ::android::text::Spanned(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpannedString(const ::android::text::SpannedString& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    SpannedString(::android::text::SpannedString&& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::SpannedString& operator=(const ::android::text::SpannedString& x) {obj = x.obj; return *this;}
    ::android::text::SpannedString& operator=(::android::text::SpannedString&& x) {obj = std::move(x.obj); return *this;}
    
    SpannedString(const ::java::lang::CharSequence&);
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    static ::android::text::SpannedString valueOf(const ::java::lang::CharSequence&);
    int32_t nextSpanTransition(int32_t, int32_t, const ::java::lang::Class&) const;
    std::vector< ::java::lang::Object> getSpans(int32_t, int32_t, const ::java::lang::Class&) const;
    int32_t getSpanFlags(const ::java::lang::Object&) const;
    int32_t getSpanEnd(const ::java::lang::Object&) const;
    int32_t getSpanStart(const ::java::lang::Object&) const;

};
}
}


