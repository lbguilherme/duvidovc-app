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
class LoginFilter : public virtual ::java::lang::Object,
                    public virtual ::android::text::InputFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginFilter(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginFilter(const ::android::text::LoginFilter& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {obj = x.obj;}
    LoginFilter(::android::text::LoginFilter&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::LoginFilter& operator=(const ::android::text::LoginFilter& x) {obj = x.obj; return *this;}
    ::android::text::LoginFilter& operator=(::android::text::LoginFilter&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence filter(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::Spanned&, int32_t, int32_t) const;
    void onStart() const;
    void onInvalidCharacter(uint16_t) const;
    void onStop() const;
    bool isAllowed(uint16_t) const;

};
}
}

#include "android.text.LoginFilter_PasswordFilterGMail.hpp"
#include "android.text.LoginFilter_UsernameFilterGMail.hpp"
#include "android.text.LoginFilter_UsernameFilterGeneric.hpp"

