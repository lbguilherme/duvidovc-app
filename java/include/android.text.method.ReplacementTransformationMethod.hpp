#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.TransformationMethod.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace method {
class ReplacementTransformationMethod : public virtual ::java::lang::Object,
                                        public virtual ::android::text::method::TransformationMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ReplacementTransformationMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::TransformationMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ReplacementTransformationMethod(const ::android::text::method::ReplacementTransformationMethod& x) : ::java::lang::Object((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj;}
    ReplacementTransformationMethod(::android::text::method::ReplacementTransformationMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::ReplacementTransformationMethod& operator=(const ::android::text::method::ReplacementTransformationMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::ReplacementTransformationMethod& operator=(::android::text::method::ReplacementTransformationMethod&& x) {obj = std::move(x.obj); return *this;}
    
    ReplacementTransformationMethod();
    ::java::lang::CharSequence getTransformation(const ::java::lang::CharSequence&, const ::android::view::View&) const;
    void onFocusChanged(const ::android::view::View&, const ::java::lang::CharSequence&, bool, int32_t, const ::android::graphics::Rect&) const;

};
}
}
}


