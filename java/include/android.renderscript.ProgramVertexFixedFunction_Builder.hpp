#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class ProgramVertexFixedFunction; } }
namespace android { namespace renderscript { class ProgramVertexFixedFunction_Builder; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramVertexFixedFunction_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramVertexFixedFunction_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramVertexFixedFunction_Builder(const ::android::renderscript::ProgramVertexFixedFunction_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProgramVertexFixedFunction_Builder(::android::renderscript::ProgramVertexFixedFunction_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramVertexFixedFunction_Builder& operator=(const ::android::renderscript::ProgramVertexFixedFunction_Builder& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramVertexFixedFunction_Builder& operator=(::android::renderscript::ProgramVertexFixedFunction_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramVertexFixedFunction_Builder(const ::android::renderscript::RenderScript&);
    ::android::renderscript::ProgramVertexFixedFunction_Builder setTextureMatrixEnable(bool) const;
    ::android::renderscript::ProgramVertexFixedFunction create() const;

};
}
}


