#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.renderscript.RenderScript.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class SurfaceTexture; } }
namespace android { namespace renderscript { class ProgramFragment; } }
namespace android { namespace renderscript { class ProgramRaster; } }
namespace android { namespace renderscript { class ProgramStore; } }
namespace android { namespace renderscript { class ProgramVertex; } }
namespace android { namespace renderscript { class RenderScriptGL_SurfaceConfig; } }
namespace android { namespace renderscript { class Script; } }
namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace renderscript {
class RenderScriptGL : public virtual ::java::lang::Object,
                       public virtual ::android::renderscript::RenderScript {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RenderScriptGL(jobject _obj) : ::java::lang::Object(_obj), ::android::renderscript::RenderScript(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RenderScriptGL(const ::android::renderscript::RenderScriptGL& x) : ::java::lang::Object((jobject)0), ::android::renderscript::RenderScript((jobject)0) {obj = x.obj;}
    RenderScriptGL(::android::renderscript::RenderScriptGL&& x) : ::java::lang::Object((jobject)0), ::android::renderscript::RenderScript((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RenderScriptGL& operator=(const ::android::renderscript::RenderScriptGL& x) {obj = x.obj; return *this;}
    ::android::renderscript::RenderScriptGL& operator=(::android::renderscript::RenderScriptGL&& x) {obj = std::move(x.obj); return *this;}
    
    RenderScriptGL(const ::android::content::Context&, const ::android::renderscript::RenderScriptGL_SurfaceConfig&);
    void setSurface(const ::android::view::SurfaceHolder&, int32_t, int32_t) const;
    void setSurfaceTexture(const ::android::graphics::SurfaceTexture&, int32_t, int32_t) const;
    int32_t getHeight() const;
    int32_t getWidth() const;
    void pause() const;
    void resume() const;
    void bindRootScript(const ::android::renderscript::Script&) const;
    void bindProgramStore(const ::android::renderscript::ProgramStore&) const;
    void bindProgramFragment(const ::android::renderscript::ProgramFragment&) const;
    void bindProgramRaster(const ::android::renderscript::ProgramRaster&) const;
    void bindProgramVertex(const ::android::renderscript::ProgramVertex&) const;

};
}
}

#include "android.renderscript.RenderScriptGL_SurfaceConfig.hpp"

