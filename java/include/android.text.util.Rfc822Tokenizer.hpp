#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.widget.MultiAutoCompleteTextView_Tokenizer.hpp"

namespace android { namespace text { namespace util { class Rfc822Token; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace util { class Collection; } }

namespace android {
namespace text {
namespace util {
class Rfc822Tokenizer : public virtual ::java::lang::Object,
                        public virtual ::android::widget::MultiAutoCompleteTextView_Tokenizer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Rfc822Tokenizer(jobject _obj) : ::java::lang::Object(_obj), ::android::widget::MultiAutoCompleteTextView_Tokenizer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Rfc822Tokenizer(const ::android::text::util::Rfc822Tokenizer& x) : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {obj = x.obj;}
    Rfc822Tokenizer(::android::text::util::Rfc822Tokenizer&& x) : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::util::Rfc822Tokenizer& operator=(const ::android::text::util::Rfc822Tokenizer& x) {obj = x.obj; return *this;}
    ::android::text::util::Rfc822Tokenizer& operator=(::android::text::util::Rfc822Tokenizer&& x) {obj = std::move(x.obj); return *this;}
    
    Rfc822Tokenizer();
    static void tokenize(const ::java::lang::CharSequence&, const ::java::util::Collection&);
    static std::vector< ::android::text::util::Rfc822Token> tokenize(const ::java::lang::CharSequence&);
    int32_t findTokenStart(const ::java::lang::CharSequence&, int32_t) const;
    int32_t findTokenEnd(const ::java::lang::CharSequence&, int32_t) const;
    ::java::lang::CharSequence terminateToken(const ::java::lang::CharSequence&) const;

};
}
}
}


