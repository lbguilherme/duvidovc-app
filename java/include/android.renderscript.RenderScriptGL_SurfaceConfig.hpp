#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace renderscript {
class RenderScriptGL_SurfaceConfig : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScriptGL_SurfaceConfig(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScriptGL_SurfaceConfig(const ::android::renderscript::RenderScriptGL_SurfaceConfig& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RenderScriptGL_SurfaceConfig(::android::renderscript::RenderScriptGL_SurfaceConfig&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScriptGL_SurfaceConfig& operator=(const ::android::renderscript::RenderScriptGL_SurfaceConfig& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScriptGL_SurfaceConfig& operator=(::android::renderscript::RenderScriptGL_SurfaceConfig&& x) {obj = std::move(x.obj); return *this;}
    
    RenderScriptGL_SurfaceConfig();
    void setColor(int32_t, int32_t) const;
    void setAlpha(int32_t, int32_t) const;
    void setDepth(int32_t, int32_t) const;
    void setSamples(int32_t, int32_t, float) const;

};
}
}


