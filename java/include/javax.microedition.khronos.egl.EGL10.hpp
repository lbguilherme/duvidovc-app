#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "javax.microedition.khronos.egl.EGL.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLConfig; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLContext; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLDisplay; } } } }
namespace javax { namespace microedition { namespace khronos { namespace egl { class EGLSurface; } } } }

namespace javax {
namespace microedition {
namespace khronos {
namespace egl {
class EGL10 : public virtual ::java::lang::Object,
              public virtual ::javax::microedition::khronos::egl::EGL {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EGL10(jobject _obj) : ::java::lang::Object(_obj), ::javax::microedition::khronos::egl::EGL(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EGL10(const ::javax::microedition::khronos::egl::EGL10& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::egl::EGL((jobject)0) {obj = x.obj;}
    EGL10(::javax::microedition::khronos::egl::EGL10&& x) : ::java::lang::Object((jobject)0), ::javax::microedition::khronos::egl::EGL((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::microedition::khronos::egl::EGL10& operator=(const ::javax::microedition::khronos::egl::EGL10& x) {obj = x.obj; return *this;}
    ::javax::microedition::khronos::egl::EGL10& operator=(::javax::microedition::khronos::egl::EGL10&& x) {obj = std::move(x.obj); return *this;}
    
    bool eglChooseConfig(const ::javax::microedition::khronos::egl::EGLDisplay&, const std::vector< int32_t>&, const std::vector< ::javax::microedition::khronos::egl::EGLConfig>&, int32_t, const std::vector< int32_t>&) const ;
    bool eglCopyBuffers(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&, const ::java::lang::Object&) const ;
    ::javax::microedition::khronos::egl::EGLContext eglCreateContext(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, const ::javax::microedition::khronos::egl::EGLContext&, const std::vector< int32_t>&) const ;
    ::javax::microedition::khronos::egl::EGLSurface eglCreatePbufferSurface(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, const std::vector< int32_t>&) const ;
    ::javax::microedition::khronos::egl::EGLSurface eglCreatePixmapSurface(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, const ::java::lang::Object&, const std::vector< int32_t>&) const ;
    ::javax::microedition::khronos::egl::EGLSurface eglCreateWindowSurface(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, const ::java::lang::Object&, const std::vector< int32_t>&) const ;
    bool eglDestroyContext(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLContext&) const ;
    bool eglDestroySurface(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&) const ;
    bool eglGetConfigAttrib(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLConfig&, int32_t, const std::vector< int32_t>&) const ;
    bool eglGetConfigs(const ::javax::microedition::khronos::egl::EGLDisplay&, const std::vector< ::javax::microedition::khronos::egl::EGLConfig>&, int32_t, const std::vector< int32_t>&) const ;
    ::javax::microedition::khronos::egl::EGLContext eglGetCurrentContext() const ;
    ::javax::microedition::khronos::egl::EGLDisplay eglGetCurrentDisplay() const ;
    ::javax::microedition::khronos::egl::EGLSurface eglGetCurrentSurface(int32_t) const ;
    ::javax::microedition::khronos::egl::EGLDisplay eglGetDisplay(const ::java::lang::Object&) const ;
    int32_t eglGetError() const ;
    bool eglInitialize(const ::javax::microedition::khronos::egl::EGLDisplay&, const std::vector< int32_t>&) const ;
    bool eglMakeCurrent(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&, const ::javax::microedition::khronos::egl::EGLSurface&, const ::javax::microedition::khronos::egl::EGLContext&) const ;
    bool eglQueryContext(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLContext&, int32_t, const std::vector< int32_t>&) const ;
    ::java::lang::String eglQueryString(const ::javax::microedition::khronos::egl::EGLDisplay&, int32_t) const ;
    bool eglQuerySurface(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&, int32_t, const std::vector< int32_t>&) const ;
    bool eglSwapBuffers(const ::javax::microedition::khronos::egl::EGLDisplay&, const ::javax::microedition::khronos::egl::EGLSurface&) const ;
    bool eglTerminate(const ::javax::microedition::khronos::egl::EGLDisplay&) const ;
    bool eglWaitGL() const ;
    bool eglWaitNative(int32_t, const ::java::lang::Object&) const ;

};
}
}
}
}


