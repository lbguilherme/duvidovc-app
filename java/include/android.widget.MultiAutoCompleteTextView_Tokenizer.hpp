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
class MultiAutoCompleteTextView_Tokenizer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultiAutoCompleteTextView_Tokenizer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultiAutoCompleteTextView_Tokenizer(const ::android::widget::MultiAutoCompleteTextView_Tokenizer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MultiAutoCompleteTextView_Tokenizer(::android::widget::MultiAutoCompleteTextView_Tokenizer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::MultiAutoCompleteTextView_Tokenizer& operator=(const ::android::widget::MultiAutoCompleteTextView_Tokenizer& x) {obj = x.obj; return *this;}
    ::android::widget::MultiAutoCompleteTextView_Tokenizer& operator=(::android::widget::MultiAutoCompleteTextView_Tokenizer&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t findTokenStart(const ::java::lang::CharSequence&, int32_t) const ;
    int32_t findTokenEnd(const ::java::lang::CharSequence&, int32_t) const ;
    ::java::lang::CharSequence terminateToken(const ::java::lang::CharSequence&) const ;

};
}
}


