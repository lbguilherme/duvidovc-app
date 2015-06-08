#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace method {
class TransformationMethod : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransformationMethod(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransformationMethod(const ::android::text::method::TransformationMethod& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TransformationMethod(::android::text::method::TransformationMethod&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::TransformationMethod& operator=(const ::android::text::method::TransformationMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::TransformationMethod& operator=(::android::text::method::TransformationMethod&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::CharSequence getTransformation(const ::java::lang::CharSequence&, const ::android::view::View&) const;
    void onFocusChanged(const ::android::view::View&, const ::java::lang::CharSequence&, bool, int32_t, const ::android::graphics::Rect&) const;

};
}
}
}


