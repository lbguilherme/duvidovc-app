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
namespace android { namespace renderscript { class RenderScriptGL; } }
namespace android { namespace renderscript { class RenderScriptGL_SurfaceConfig; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class SurfaceHolder; } }

namespace android {
namespace renderscript {
class RSSurfaceView : public virtual ::java::lang::Object,
                      public virtual ::android::view::SurfaceHolder_Callback,
                      public virtual ::android::view::SurfaceView {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSSurfaceView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::SurfaceHolder_Callback(_obj), ::android::view::SurfaceView(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSSurfaceView(const ::android::renderscript::RSSurfaceView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    RSSurfaceView(::android::renderscript::RSSurfaceView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceHolder_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RSSurfaceView& operator=(const ::android::renderscript::RSSurfaceView& x) {obj = x.obj; return *this;}
    ::android::renderscript::RSSurfaceView& operator=(::android::renderscript::RSSurfaceView&& x) {obj = std::move(x.obj); return *this;}
    
    RSSurfaceView(const ::android::content::Context&);
    RSSurfaceView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void surfaceCreated(const ::android::view::SurfaceHolder&) const ;
    void surfaceDestroyed(const ::android::view::SurfaceHolder&) const ;
    void surfaceChanged(const ::android::view::SurfaceHolder&, int32_t, int32_t, int32_t) const ;
    void pause() const ;
    void resume() const ;
    ::android::renderscript::RenderScriptGL createRenderScriptGL(const ::android::renderscript::RenderScriptGL_SurfaceConfig&) const ;
    void destroyRenderScriptGL() const ;
    void setRenderScriptGL(const ::android::renderscript::RenderScriptGL&) const ;
    ::android::renderscript::RenderScriptGL getRenderScriptGL() const ;

};
}
}


