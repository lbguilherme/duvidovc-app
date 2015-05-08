#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace android { namespace graphics { class BlurMaskFilter_Blur; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class BlurMaskFilter_Blur : public virtual ::java::lang::Object,
                            public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BlurMaskFilter_Blur(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BlurMaskFilter_Blur(const ::android::graphics::BlurMaskFilter_Blur& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    BlurMaskFilter_Blur(::android::graphics::BlurMaskFilter_Blur&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::BlurMaskFilter_Blur& operator=(const ::android::graphics::BlurMaskFilter_Blur& x) {obj = x.obj; return *this;}
    ::android::graphics::BlurMaskFilter_Blur& operator=(::android::graphics::BlurMaskFilter_Blur&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::graphics::BlurMaskFilter_Blur> values();
    static ::android::graphics::BlurMaskFilter_Blur valueOf(const ::java::lang::String&);

};
}
}


