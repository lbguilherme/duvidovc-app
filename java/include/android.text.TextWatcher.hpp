#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.NoCopySpan.hpp"

namespace android { namespace text { class Editable; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class TextWatcher : public virtual ::java::lang::Object,
                    public virtual ::android::text::NoCopySpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextWatcher(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextWatcher(const ::android::text::TextWatcher& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj;}
    TextWatcher(::android::text::TextWatcher&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextWatcher& operator=(const ::android::text::TextWatcher& x) {obj = x.obj; return *this;}
    ::android::text::TextWatcher& operator=(::android::text::TextWatcher&& x) {obj = std::move(x.obj); return *this;}
    
    void beforeTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const ;
    void onTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const ;
    void afterTextChanged(const ::android::text::Editable&) const ;

};
}
}


