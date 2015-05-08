#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.BaseObj.hpp"

namespace android { namespace renderscript { class Allocation; } }
namespace android { namespace renderscript { class Sampler; } }

namespace android {
namespace renderscript {
class Program : public virtual ::java::lang::Object,
                public virtual ::android::renderscript::BaseObj {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Program(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::BaseObj(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Program(const ::android::renderscript::Program& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj;}
    Program(::android::renderscript::Program&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::BaseObj((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Program& operator=(const ::android::renderscript::Program& x) {obj = x.obj; return *this;}
    ::android::renderscript::Program& operator=(::android::renderscript::Program&& x) {obj = std::move(x.obj); return *this;}
    
    void bindConstants(const ::android::renderscript::Allocation&, int32_t) const ;
    void bindTexture(const ::android::renderscript::Allocation&, int32_t) const ;
    void bindSampler(const ::android::renderscript::Sampler&, int32_t) const ;

};
}
}

#include "android.renderscript.Program_BaseProgramBuilder.hpp"
#include "android.renderscript.Program_TextureType.hpp"

