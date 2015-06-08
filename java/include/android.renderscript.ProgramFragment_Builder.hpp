#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.Program_BaseProgramBuilder.hpp"

namespace android { namespace renderscript { class ProgramFragment; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramFragment_Builder : public virtual ::java::lang::Object,
                                public virtual ::android::renderscript::Program_BaseProgramBuilder {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramFragment_Builder(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::Program_BaseProgramBuilder(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramFragment_Builder(const ::android::renderscript::ProgramFragment_Builder& x) : ::java::lang::Object((jobject)0), ::android::renderscript::Program_BaseProgramBuilder((jobject)0) {obj = x.obj;}
    ProgramFragment_Builder(::android::renderscript::ProgramFragment_Builder&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::Program_BaseProgramBuilder((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramFragment_Builder& operator=(const ::android::renderscript::ProgramFragment_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramFragment_Builder& operator=(::android::renderscript::ProgramFragment_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramFragment_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::ProgramFragment create() const;

};
}
}


