#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace javax { namespace microedition { namespace khronos { namespace egl { class EGL10; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLDisplay; } } } }

namespace android {
namespace opengl {
class GLSurfaceView_EGLConfigChooser : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView_EGLConfigChooser(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView_EGLConfigChooser(const ::android::opengl::GLSurfaceView_EGLConfigChooser& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    GLSurfaceView_EGLConfigChooser(::android::opengl::GLSurfaceView_EGLConfigChooser&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView_EGLConfigChooser& operator=(const ::android::opengl::GLSurfaceView_EGLConfigChooser& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView_EGLConfigChooser& operator=(::android::opengl::GLSurfaceView_EGLConfigChooser&& x) {obj = std::move(x.obj); return *this;}
    
    ::javax::microedition::khronos::egl::EGLConfig chooseConfig(const ::javax::microedition::khronos::egl::EGL10&, const ::javax::microedition::khronos::egl::EGLDisplay&) const ;

};
}
}


