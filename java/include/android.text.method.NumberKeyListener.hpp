#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.InputFilter.hpp"
#include "android.text.method.BaseKeyListener.hpp"

namespace android { namespace text { class Editable; } }
namespace android { namespace text { class Spanned; } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace method {
class NumberKeyListener : public virtual ::java::lang::Object,
                          public virtual ::android::text::InputFilter,
                          public virtual ::android::text::method::BaseKeyListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NumberKeyListener(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj), ::android::text::method::BaseKeyListener(_obj), ::android::text::method::KeyListener(_obj), ::android::text::method::MetaKeyKeyListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NumberKeyListener(const ::android::text::method::NumberKeyListener& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj;}
    NumberKeyListener(::android::text::method::NumberKeyListener&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::method::BaseKeyListener((jobject)0), ::android::text::method::KeyListener((jobject)0), ::android::text::method::MetaKeyKeyListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::NumberKeyListener& operator=(const ::android::text::method::NumberKeyListener& x) {obj = x.obj; return *this;}
    ::android::text::method::NumberKeyListener& operator=(::android::text::method::NumberKeyListener&& x) {obj = std::move(x.obj); return *this;}
    
    NumberKeyListener();
    ::java::lang::CharSequence filter(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::Spanned&, int32_t, int32_t) const;
    bool onKeyDown(const ::android::view::View&, const ::android::text::Editable&, int32_t, const ::android::view::KeyEvent&) const;

};
}
}
}


