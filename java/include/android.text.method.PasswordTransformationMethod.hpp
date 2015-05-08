#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.TextWatcher.hpp"
#include "android.text.method.TransformationMethod.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace text { class Editable; } }
namespace android { namespace text { namespace method { class PasswordTransformationMethod; } } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace method {
class PasswordTransformationMethod : public virtual ::java::lang::Object,
                                     public virtual ::android::text::TextWatcher,
                                     public virtual ::android::text::method::TransformationMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PasswordTransformationMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::NoCopySpan(_obj), ::android::text::TextWatcher(_obj), ::android::text::method::TransformationMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PasswordTransformationMethod(const ::android::text::method::PasswordTransformationMethod& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj;}
    PasswordTransformationMethod(::android::text::method::PasswordTransformationMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::PasswordTransformationMethod& operator=(const ::android::text::method::PasswordTransformationMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::PasswordTransformationMethod& operator=(::android::text::method::PasswordTransformationMethod&& x) {obj = std::move(x.obj); return *this;}
    
    PasswordTransformationMethod();
    ::java::lang::CharSequence getTransformation(const ::java::lang::CharSequence&, const ::android::view::View&) const ;
    static ::android::text::method::PasswordTransformationMethod getInstance();
    void beforeTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const ;
    void onTextChanged(const ::java::lang::CharSequence&, int32_t, int32_t, int32_t) const ;
    void afterTextChanged(const ::android::text::Editable&) const ;
    void onFocusChanged(const ::android::view::View&, const ::java::lang::CharSequence&, bool, int32_t, const ::android::graphics::Rect&) const ;

};
}
}
}


