#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace text { class Spanned; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class InputFilter : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InputFilter(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InputFilter(const ::android::text::InputFilter& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    InputFilter(::android::text::InputFilter&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::InputFilter& operator=(const ::android::text::InputFilter& x) {obj = x.obj; return *this;}
    ::android::text::InputFilter& operator=(::android::text::InputFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence filter(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::Spanned&, int32_t, int32_t) const ;

};
}
}

#include "android.text.InputFilter_AllCaps.hpp"
#include "android.text.InputFilter_LengthFilter.hpp"

