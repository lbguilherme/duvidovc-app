#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.GetChars.hpp"
#include "android.text.Spannable.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.CharSequence.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class InputFilter; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class Editable : public virtual ::java::lang::Object,
                 public virtual ::android::text::GetChars,
                 public virtual ::android::text::Spannable,
                 public virtual ::java::lang::Appendable,
                 public virtual ::java::lang::CharSequence {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Editable(jobject _obj) : ::java::lang::Object(_obj), ::android::text::GetChars(_obj), ::android::text::Spannable(_obj), ::android::text::Spanned(_obj), ::java::lang::Appendable(_obj), ::java::lang::CharSequence(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Editable(const ::android::text::Editable& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj;}
    Editable(::android::text::Editable&& x) : ::java::lang::Object((jobject)0), ::android::text::GetChars((jobject)0), ::android::text::Spannable((jobject)0), ::android::text::Spanned((jobject)0), ::java::lang::Appendable((jobject)0), ::java::lang::CharSequence((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Editable& operator=(const ::android::text::Editable& x) {obj = x.obj; return *this;}
    ::android::text::Editable& operator=(::android::text::Editable&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::text::Editable replace(int32_t, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const;
    ::android::text::Editable replace(int32_t, int32_t, const ::java::lang::CharSequence&) const;
    ::android::text::Editable insert(int32_t, const ::java::lang::CharSequence&, int32_t, int32_t) const;
    ::android::text::Editable insert(int32_t, const ::java::lang::CharSequence&) const;
    ::android::text::Editable delete_(int32_t, int32_t) const;
    ::android::text::Editable append(const ::java::lang::CharSequence&) const;
    ::android::text::Editable append(const ::java::lang::CharSequence&, int32_t, int32_t) const;
    ::android::text::Editable append(uint16_t) const;
    void clear() const;
    void clearSpans() const;
    void setFilters(const std::vector< ::android::text::InputFilter>&) const;
    std::vector< ::android::text::InputFilter> getFilters() const;

};
}
}

#include "android.text.Editable_Factory.hpp"

