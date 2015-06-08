#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.LoginFilter.hpp"


namespace android {
namespace text {
class LoginFilter_UsernameFilterGeneric : public virtual ::java::lang::Object,
                                          public virtual ::android::text::LoginFilter {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoginFilter_UsernameFilterGeneric(jobject _obj) : ::java::lang::Object(_obj), ::android::text::InputFilter(_obj), ::android::text::LoginFilter(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoginFilter_UsernameFilterGeneric(const ::android::text::LoginFilter_UsernameFilterGeneric& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {obj = x.obj;}
    LoginFilter_UsernameFilterGeneric(::android::text::LoginFilter_UsernameFilterGeneric&& x) : ::java::lang::Object((jobject)0), ::android::text::InputFilter((jobject)0), ::android::text::LoginFilter((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::LoginFilter_UsernameFilterGeneric& operator=(const ::android::text::LoginFilter_UsernameFilterGeneric& x) {obj = x.obj; return *this;}
    ::android::text::LoginFilter_UsernameFilterGeneric& operator=(::android::text::LoginFilter_UsernameFilterGeneric&& x) {obj = std::move(x.obj); return *this;}
    
    LoginFilter_UsernameFilterGeneric();
    LoginFilter_UsernameFilterGeneric(bool);
    bool isAllowed(uint16_t) const;

};
}
}


