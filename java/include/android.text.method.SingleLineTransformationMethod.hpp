#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.method.ReplacementTransformationMethod.hpp"

namespace android { namespace text { namespace method { class SingleLineTransformationMethod; } } }

namespace android {
namespace text {
namespace method {
class SingleLineTransformationMethod : public virtual ::java::lang::Object,
                                       public virtual ::android::text::method::ReplacementTransformationMethod {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SingleLineTransformationMethod(jobject _obj) : ::java::lang::Object(_obj), ::android::text::method::ReplacementTransformationMethod(_obj), ::android::text::method::TransformationMethod(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SingleLineTransformationMethod(const ::android::text::method::SingleLineTransformationMethod& x) : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj;}
    SingleLineTransformationMethod(::android::text::method::SingleLineTransformationMethod&& x) : ::java::lang::Object((jobject)0), ::android::text::method::ReplacementTransformationMethod((jobject)0), ::android::text::method::TransformationMethod((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::method::SingleLineTransformationMethod& operator=(const ::android::text::method::SingleLineTransformationMethod& x) {obj = x.obj; return *this;}
    ::android::text::method::SingleLineTransformationMethod& operator=(::android::text::method::SingleLineTransformationMethod&& x) {obj = std::move(x.obj); return *this;}
    
    SingleLineTransformationMethod();
    static ::android::text::method::SingleLineTransformationMethod getInstance();

};
}
}
}


