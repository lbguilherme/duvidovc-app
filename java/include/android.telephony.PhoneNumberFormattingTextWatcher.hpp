#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.TextWatcher.hpp"

namespace android { namespace text { class Editable; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace telephony {
class PhoneNumberFormattingTextWatcher : public virtual ::java::lang::Object,
                                         public virtual ::android::text::TextWatcher {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PhoneNumberFormattingTextWatcher(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PhoneNumberFormattingTextWatcher(const ::android::telephony::PhoneNumberFormattingTextWatcher& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0) {obj = x.obj;}
    PhoneNumberFormattingTextWatcher(::android::telephony::PhoneNumberFormattingTextWatcher&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::PhoneNumberFormattingTextWatcher& operator=(const ::android::telephony::PhoneNumberFormattingTextWatcher& x) {obj = x.obj; return *this;}
    ::android::telephony::PhoneNumberFormattingTextWatcher& operator=(::android::telephony::PhoneNumberFormattingTextWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    PhoneNumberFormattingTextWatcher();
    void beforeTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const;
    void onTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const;
    void afterTextChanged(const ::android::text::Editable&) const;

};
}
}


