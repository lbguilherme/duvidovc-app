#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.NumberKeyListener.hpp"

namespace android { namespace text { class Spanned; } }
namespace android { namespace text { namespace method { class DigitsKeyListener; } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace method {
class DigitsKeyListener : public virtual ::java::lang::Object,
                          public virtual ::android::text::method::NumberKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DigitsKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj), ::android::text::method::NumberKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DigitsKeyListener(const ::android::text::method::DigitsKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {obj = x.obj;}
    DigitsKeyListener(::android::text::method::DigitsKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0), ::android::text::method::NumberKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::DigitsKeyListener& operator=(const ::android::text::method::DigitsKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::DigitsKeyListener& operator=(::android::text::method::DigitsKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    DigitsKeyListener();
    DigitsKeyListener(bool, bool);
    static ::android::text::method::DigitsKeyListener getInstance();
    static ::android::text::method::DigitsKeyListener getInstance(bool, bool);
    static ::android::text::method::DigitsKeyListener getInstance(const ::java::lang::String&);
    int32_t getInputType() const ;
    ::java::lang::CharSequence filter(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::Spanned&, int32_t, int32_t) const ;

};
}
}
}


