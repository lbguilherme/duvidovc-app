#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class SurfaceTexture; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { class TextureView_SurfaceTextureListener; } }

namespace android {
namespace view {
class TextureView : public virtual ::java::lang::Object,
                    public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextureView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextureView(const ::android::view::TextureView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    TextureView(::android::view::TextureView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::TextureView& operator=(const ::android::view::TextureView& x) {obj = x.obj; return *this;}
    ::android::view::TextureView& operator=(::android::view::TextureView&& x) {obj = std::move(x.obj); return *this;}
    
    TextureView(const ::android::content::Context&);
    TextureView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    TextureView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    bool isOpaque() const ;
    void setOpaque(bool) const ;
    void setLayerType(int32_t, const ::android::graphics::Paint&) const ;
    int32_t getLayerType() const ;
    void buildLayer() const ;
    void draw(const ::android::graphics::Canvas&) const ;
    void setTransform(const ::android::graphics::Matrix&) const ;
    ::android::graphics::Matrix getTransform(const ::android::graphics::Matrix&) const ;
    ::android::graphics::Bitmap getBitmap() const ;
    ::android::graphics::Bitmap getBitmap(int32_t, int32_t) const ;
    ::android::graphics::Bitmap getBitmap(const ::android::graphics::Bitmap&) const ;
    bool isAvailable() const ;
    ::android::graphics::Canvas lockCanvas() const ;
    ::android::graphics::Canvas lockCanvas(const ::android::graphics::Rect&) const ;
    void unlockCanvasAndPost(const ::android::graphics::Canvas&) const ;
    ::android::graphics::SurfaceTexture getSurfaceTexture() const ;
    ::android::view::TextureView_SurfaceTextureListener getSurfaceTextureListener() const ;
    void setSurfaceTextureListener(const ::android::view::TextureView_SurfaceTextureListener&) const ;

};
}
}

#include "android.view.TextureView_SurfaceTextureListener.hpp"

