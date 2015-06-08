#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class AutoCompleteTextView_Validator : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AutoCompleteTextView_Validator(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AutoCompleteTextView_Validator(const ::android::widget::AutoCompleteTextView_Validator& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AutoCompleteTextView_Validator(::android::widget::AutoCompleteTextView_Validator&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AutoCompleteTextView_Validator& operator=(const ::android::widget::AutoCompleteTextView_Validator& x) {obj = x.obj; return *this;}
    ::android::widget::AutoCompleteTextView_Validator& operator=(::android::widget::AutoCompleteTextView_Validator&& x) {obj = std::move(x.obj); return *this;}
    
    bool isValid(const ::java::lang::CharSequence&) const;
    ::java::lang::CharSequence fixText(const ::java::lang::CharSequence&) const;

};
}
}


