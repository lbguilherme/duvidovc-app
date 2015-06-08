#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Matrix4f; } }
namespace android { namespace renderscript { class RenderScript; } }

namespace android {
namespace renderscript {
class ProgramVertexFixedFunction_Constants : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProgramVertexFixedFunction_Constants(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProgramVertexFixedFunction_Constants(const ::android::renderscript::ProgramVertexFixedFunction_Constants& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ProgramVertexFixedFunction_Constants(::android::renderscript::ProgramVertexFixedFunction_Constants&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::ProgramVertexFixedFunction_Constants& operator=(const ::android::renderscript::ProgramVertexFixedFunction_Constants& x) {obj = x.obj; return *this;}
    ::android::renderscript::ProgramVertexFixedFunction_Constants& operator=(::android::renderscript::ProgramVertexFixedFunction_Constants&& x) {obj = std::move(x.obj); return *this;}
    
    ProgramVertexFixedFunction_Constants(const ::android::renderscript::RenderScript&);
    void destroy() const;
    void setModelview(const ::android::renderscript::Matrix4f&) const;
    void setProjection(const ::android::renderscript::Matrix4f&) const;
    void setTexture(const ::android::renderscript::Matrix4f&) const;

};
}
}


