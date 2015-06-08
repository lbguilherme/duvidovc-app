#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.GetChars.hpp"
#include "android.text.Spannable.hpp"
#include "android.text.SpannableStringInternal.hpp"
#include "java.lang.CharSequence.hpp"

namespace android { namespace text { class SpannableString; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace text {
class SpannableString : public virtual ::java::lang::Object,
                        public virtual ::android::text::GetChars,
                        public virtual ::android::text::Spannable,
                        public virtual ::android::text::SpannableStringInternal,
                        public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpannableString(jobject _obj) : ::java::lang::Object(_obj), ::android::text::GetChars(_obj), ::android::text::Spannable(_obj), ::android::text::SpannableStringInternal(_obj), ::android::text::Spanned(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpannableString(const ::android::text::SpannableString& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    SpannableString(::android::text::SpannableString&& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::SpannableStringInternal((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::SpannableString& operator=(const ::android::text::SpannableString& x) {obj = x.obj; return *this;}
    ::android::text::SpannableString& operator=(::android::text::SpannableString&& x) {obj = std::move(x.obj); return *this;}
    
    SpannableString(const ::java::lang::CharSequence&);
    static ::android::text::SpannableString valueOf(const ::java::lang::CharSequence&);
    void setSpan(const ::java::lang::Object&, int32_t, int32_t, int32_t) const;
    void removeSpan(const ::java::lang::Object&) const;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    int32_t nextSpanTransition(int32_t, int32_t, const ::java::lang::Class&) const;
    std::vector< ::java::lang::Object> getSpans(int32_t, int32_t, const ::java::lang::Class&) const;
    int32_t getSpanFlags(const ::java::lang::Object&) const;
    int32_t getSpanEnd(const ::java::lang::Object&) const;
    int32_t getSpanStart(const ::java::lang::Object&) const;

};
}
}


