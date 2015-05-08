#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class RenderScript; } }
namespace android { namespace renderscript { class Sampler; } }

namespace android {
namespace renderscript {
class Sampler : public virtual ::java::lang::Object,
                public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Sampler(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Sampler(const ::android::renderscript::Sampler& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Sampler(::android::renderscript::Sampler&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Sampler& operator=(const ::android::renderscript::Sampler& x) {obj = x.obj; return *this;}
    ::android::renderscript::Sampler& operator=(::android::renderscript::Sampler&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::renderscript::Sampler CLAMP_NEAREST(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Sampler CLAMP_LINEAR(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Sampler CLAMP_LINEAR_MIP_LINEAR(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Sampler WRAP_NEAREST(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Sampler WRAP_LINEAR(const ::android::renderscript::RenderScript&);
    static ::android::renderscript::Sampler WRAP_LINEAR_MIP_LINEAR(const ::android::renderscript::RenderScript&);

};
}
}

#include "android.renderscript.Sampler_Builder.hpp"
#include "android.renderscript.Sampler_Value.hpp"

