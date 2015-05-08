#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL10; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLDisplay; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLSurface; } } } }

namespace android {
namespace opengl {
class GLSurfaceView_EGLWindowSurfaceFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView_EGLWindowSurfaceFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView_EGLWindowSurfaceFactory(const ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLSurfaceView_EGLWindowSurfaceFactory(::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory& operator=(const ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory& operator=(::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::microedition::khronos::egl::EGLSurface createWindowSurface(const ::javax::microedition::khronos::egl::EGL10&, const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, const ::java::lang::Object&) const ;
    void destroySurface(const ::javax::microedition::khronos::egl::EGL10&, const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&) const ;

};
}
}


