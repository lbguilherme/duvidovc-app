#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.TextureView.hpp"
#include "android.view.TextureView_SurfaceTextureListener.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class SurfaceTexture; } }
namespace android { namespace renderscript { class RenderScriptGL; } }
namespace android { namespace renderscript { class RenderScriptGL_SurfaceConfig; } }
namespace android { namespace util { class AttributeSet; } }

namespace android {
namespace renderscript {
class RSTextureView : public virtual ::java::lang::Object,
                      public virtual ::android::view::TextureView,
                      public virtual ::android::view::TextureView_SurfaceTextureListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RSTextureView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::TextureView(_obj), ::android::view::TextureView_SurfaceTextureListener(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RSTextureView(const ::android::renderscript::RSTextureView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::TextureView((jobject)0), ::android::view::TextureView_SurfaceTextureListener((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    RSTextureView(::android::renderscript::RSTextureView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::TextureView((jobject)0), ::android::view::TextureView_SurfaceTextureListener((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::RSTextureView& operator=(const ::android::renderscript::RSTextureView& x) {obj = x.obj; return *this;}
    ::android::renderscript::RSTextureView& operator=(::android::renderscript::RSTextureView&& x) {obj = std::move(x.obj); return *this;}
    
    RSTextureView(const ::android::content::Context&);
    RSTextureView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    void onSurfaceTextureAvailable(const ::android::graphics::SurfaceTexture&, int32_t, int32_t) const ;
    void onSurfaceTextureSizeChanged(const ::android::graphics::SurfaceTexture&, int32_t, int32_t) const ;
    bool onSurfaceTextureDestroyed(const ::android::graphics::SurfaceTexture&) const ;
    void onSurfaceTextureUpdated(const ::android::graphics::SurfaceTexture&) const ;
    void pause() const ;
    void resume() const ;
    ::android::renderscript::RenderScriptGL createRenderScriptGL(const ::android::renderscript::RenderScriptGL_SurfaceConfig&) const ;
    void destroyRenderScriptGL() const ;
    void setRenderScriptGL(const ::android::renderscript::RenderScriptGL&) const ;
    ::android::renderscript::RenderScriptGL getRenderScriptGL() const ;

};
}
}


