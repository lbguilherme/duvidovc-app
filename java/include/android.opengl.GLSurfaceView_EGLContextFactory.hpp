#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL10; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLContext; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLDisplay; } } } }

namespace android {
namespace opengl {
class GLSurfaceView_EGLContextFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView_EGLContextFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView_EGLContextFactory(const ::android::opengl::GLSurfaceView_EGLContextFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLSurfaceView_EGLContextFactory(::android::opengl::GLSurfaceView_EGLContextFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView_EGLContextFactory& operator=(const ::android::opengl::GLSurfaceView_EGLContextFactory& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView_EGLContextFactory& operator=(::android::opengl::GLSurfaceView_EGLContextFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::microedition::khronos::egl::EGLContext createContext(const ::javax::microedition::khronos::egl::EGL10&, const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&) const;
    void destroyContext(const ::javax::microedition::khronos::egl::EGL10&, const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLContext&) const;

};
}
}


