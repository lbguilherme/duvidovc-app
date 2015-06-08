#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.SurfaceHolder_Callback.hpp"
#include "android.view.SurfaceView.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace opengl { class GLSurfaceView_EGLConfigChooser; } }
namespace android { namespace opengl { class GLSurfaceView_EGLContextFactory; } }
namespace android { namespace opengl { class GLSurfaceView_EGLWindowSurfaceFactory; } }
namespace android { namespace opengl { class GLSurfaceView_GLWrapper; } }
namespace android { namespace opengl { class GLSurfaceView_Renderer; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class SurfaceHolder; } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace opengl {
class GLSurfaceView : public virtual ::java::lang::Object,
                      public virtual ::android::view::SurfaceHolder_Callback,
                      public virtual ::android::view::SurfaceView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GLSurfaceView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::SurfaceHolder_Callback(_obj), ::android::view::SurfaceView(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GLSurfaceView(const ::android::opengl::GLSurfaceView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    GLSurfaceView(::android::opengl::GLSurfaceView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::opengl::GLSurfaceView& operator=(const ::android::opengl::GLSurfaceView& x) {obj = x.obj; return *this;}
    ::android::opengl::GLSurfaceView& operator=(::android::opengl::GLSurfaceView&& x) {obj = std::move(x.obj); return *this;}
    
    GLSurfaceView(const ::android::content::Context&);
    GLSurfaceView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void setGLWrapper(const ::android::opengl::GLSurfaceView_GLWrapper&) const;
    void setDebugFlags(int32_t) const;
    int32_t getDebugFlags() const;
    void setPreserveEGLContextOnPause(bool) const;
    bool getPreserveEGLContextOnPause() const;
    void setRenderer(const ::android::opengl::GLSurfaceView_Renderer&) const;
    void setEGLContextFactory(const ::android::opengl::GLSurfaceView_EGLContextFactory&) const;
    void setEGLWindowSurfaceFactory(const ::android::opengl::GLSurfaceView_EGLWindowSurfaceFactory&) const;
    void setEGLConfigChooser(const ::android::opengl::GLSurfaceView_EGLConfigChooser&) const;
    void setEGLConfigChooser(bool) const;
    void setEGLConfigChooser(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void setEGLContextClientVersion(int32_t) const;
    void setRenderMode(int32_t) const;
    int32_t getRenderMode() const;
    void requestRender() const;
    void surfaceCreated(const ::android::view::SurfaceHolder&) const;
    void surfaceDestroyed(const ::android::view::SurfaceHolder&) const;
    void surfaceChanged(const ::android::view::SurfaceHolder&, int32_t, int32_t, int32_t) const;
    void onPause() const;
    void onResume() const;
    void queueEvent(const ::java::lang::Runnable&) const;

};
}
}

#include "android.opengl.GLSurfaceView_EGLConfigChooser.hpp"
#include "android.opengl.GLSurfaceView_EGLContextFactory.hpp"
#include "android.opengl.GLSurfaceView_EGLWindowSurfaceFactory.hpp"
#include "android.opengl.GLSurfaceView_GLWrapper.hpp"
#include "android.opengl.GLSurfaceView_Renderer.hpp"

