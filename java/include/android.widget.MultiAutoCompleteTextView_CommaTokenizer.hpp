#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.MultiAutoCompleteTextView_Tokenizer.hpp"

namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace widget {
class MultiAutoCompleteTextView_CommaTokenizer : public virtual ::java::lang::Object,
                                                 public virtual ::android::widget::MultiAutoCompleteTextView_Tokenizer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MultiAutoCompleteTextView_CommaTokenizer(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::MultiAutoCompleteTextView_Tokenizer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MultiAutoCompleteTextView_CommaTokenizer(const ::android::widget::MultiAutoCompleteTextView_CommaTokenizer& x) : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {obj = x.obj;}
    MultiAutoCompleteTextView_CommaTokenizer(::android::widget::MultiAutoCompleteTextView_CommaTokenizer&& x) : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::MultiAutoCompleteTextView_CommaTokenizer& operator=(const ::android::widget::MultiAutoCompleteTextView_CommaTokenizer& x) {obj = x.obj; return *this;}
    ::android::widget::MultiAutoCompleteTextView_CommaTokenizer& operator=(::android::widget::MultiAutoCompleteTextView_CommaTokenizer&& x) {obj = std::move(x.obj); return *this;}
    
    MultiAutoCompleteTextView_CommaTokenizer();
    int32_t findTokenStart(const ::java::lang::CharSequence&, int32_t) const ;
    int32_t findTokenEnd(const ::java::lang::CharSequence&, int32_t) const ;
    ::java::lang::CharSequence terminateToken(const ::java::lang::CharSequence&) const ;

};
}
}


