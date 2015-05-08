#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.InputFilter.hpp"

namespace android { namespace text { class Spanned; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class InputFilter_LengthFilter : public virtual ::java::lang::Object,
                                 public virtual ::android::text::InputFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputFilter_LengthFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputFilter_LengthFilter(const ::android::text::InputFilter_LengthFilter& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {obj = x.obj;}
    InputFilter_LengthFilter(::android::text::InputFilter_LengthFilter&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::InputFilter_LengthFilter& operator=(const ::android::text::InputFilter_LengthFilter& x) {obj = x.obj; return *this;}
    ::android::text::InputFilter_LengthFilter& operator=(::android::text::InputFilter_LengthFilter&& x) {obj = std::move(x.obj); return *this;}
    
    InputFilter_LengthFilter(int32_t);
    ::java::lang::CharSequence filter(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::Spanned&, int32_t, int32_t) const ;

};
}
}


