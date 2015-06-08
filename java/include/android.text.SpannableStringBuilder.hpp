#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.Editable.hpp"
#include "android.text.GetChars.hpp"
#include "android.text.Spannable.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.CharSequence.hpp"

namespace android { namespace graphics { class Paint; } }
namespace android { namespace text { class InputFilter; } }
namespace android { namespace text { class SpannableStringBuilder; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
class SpannableStringBuilder : public virtual ::java::lang::Object,
                               public virtual ::android::text::Editable,
                               public virtual ::android::text::GetChars,
                               public virtual ::android::text::Spannable,
                               public virtual ::java::lang::Appendable,
                               public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SpannableStringBuilder(jobject _obj) : ::java::lang::Object(_obj), ::android::text::Editable(_obj), ::android::text::GetChars(_obj), ::android::text::Spannable(_obj), ::android::text::Spanned(_obj), ::java::lang::Appendable(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SpannableStringBuilder(const ::android::text::SpannableStringBuilder& x) : ::java::lang::Object((jobject)0), ::android::text::Editable((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    SpannableStringBuilder(::android::text::SpannableStringBuilder&& x) : ::java::lang::Object((jobject)0), ::android::text::Editable((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::SpannableStringBuilder& operator=(const ::android::text::SpannableStringBuilder& x) {obj = x.obj; return *this;}
    ::android::text::SpannableStringBuilder& operator=(::android::text::SpannableStringBuilder&& x) {obj = std::move(x.obj); return *this;}
    
    SpannableStringBuilder();
    SpannableStringBuilder(const ::java::lang::CharSequence&);
    SpannableStringBuilder(const ::java::lang::CharSequence&, int32_t, int32_t);
    static ::android::text::SpannableStringBuilder valueOf(const ::java::lang::CharSequence&);
    uint16_t charAt(int32_t) const;
    int32_t length() const;
    ::android::text::SpannableStringBuilder insert(int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const;
    ::android::text::SpannableStringBuilder insert(int32_t, const ::java::lang::CharSequence&) const;
    ::android::text::SpannableStringBuilder delete_(int32_t, int32_t) const;
    void clear() const;
    void clearSpans() const;
    ::android::text::SpannableStringBuilder append(const ::java::lang::CharSequence&) const;
    ::android::text::SpannableStringBuilder append(const ::java::lang::CharSequence&, int32_t, int32_t) const;
    ::android::text::SpannableStringBuilder append(uint16_t) const;
    ::android::text::SpannableStringBuilder replace(int32_t, int32_t, const ::java::lang::CharSequence&) const;
    ::android::text::SpannableStringBuilder replace(int32_t, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const;
    void setSpan(const ::java::lang::Object&, int32_t, int32_t, int32_t) const;
    void removeSpan(const ::java::lang::Object&) const;
    int32_t getSpanStart(const ::java::lang::Object&) const;
    int32_t getSpanEnd(const ::java::lang::Object&) const;
    int32_t getSpanFlags(const ::java::lang::Object&) const;
    std::vector< ::java::lang::Object> getSpans(int32_t, int32_t, const ::java::lang::Class&) const;
    int32_t nextSpanTransition(int32_t, int32_t, const ::java::lang::Class&) const;
    ::java::lang::CharSequence subSequence(int32_t, int32_t) const;
    void getChars(int32_t, int32_t, const std::vector< uint16_t>&, int32_t) const;
    ::java::lang::String toString() const;
    int32_t getTextRunCursor(int32_t, int32_t, int32_t, int32_t, int32_t, const ::android::graphics::Paint&) const;
    void setFilters(const std::vector< ::android::text::InputFilter>&) const;
    std::vector< ::android::text::InputFilter> getFilters() const;

};
}
}


