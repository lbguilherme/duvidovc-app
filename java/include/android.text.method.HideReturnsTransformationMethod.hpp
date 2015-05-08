#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.ReplacementTransformationMethod.hpp"

namespace android { namespace text { namespace method { class HideReturnsTransformationMethod; } } }

namespace android {
namespace text {
namespace method {
class HideReturnsTransformationMethod : public virtual ::java::lang::Object,
                                        public virtual ::android::text::method::ReplacementTransformationMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HideReturnsTransformationMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::ReplacementTransformationMethod(_obj), ::android::text::method::TransformationMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HideReturnsTransformationMethod(const ::android::text::method::HideReturnsTransformationMethod& x) : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj;}
    HideReturnsTransformationMethod(::android::text::method::HideReturnsTransformationMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::HideReturnsTransformationMethod& operator=(const ::android::text::method::HideReturnsTransformationMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::HideReturnsTransformationMethod& operator=(::android::text::method::HideReturnsTransformationMethod&& x) {obj = std::move(x.obj); return *this;}
    
    HideReturnsTransformationMethod();
    static ::android::text::method::HideReturnsTransformationMethod getInstance();

};
}
}
}


