#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } }
namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL10; } } } }

namespace android {
namespace opengl {
class GLSurfaceView_Renderer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView_Renderer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView_Renderer(const ::android::opengl::GLSurfaceView_Renderer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLSurfaceView_Renderer(::android::opengl::GLSurfaceView_Renderer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView_Renderer& operator=(const ::android::opengl::GLSurfaceView_Renderer& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView_Renderer& operator=(::android::opengl::GLSurfaceView_Renderer&& x) {obj = std::move(x.obj); return *this;}
    
    void onSurfaceCreated(const ::javax::microedition::khronos::opengles::GL10&, const ::javax::microedition::khronos::egl::EGLConfig&) const;
    void onSurfaceChanged(const ::javax::microedition::khronos::opengles::GL10&, int32_t, int32_t) const;
    void onDrawFrame(const ::javax::microedition::khronos::opengles::GL10&) const;

};
}
}


