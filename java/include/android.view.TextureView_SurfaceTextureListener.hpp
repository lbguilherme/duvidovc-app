#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class SurfaceTexture; } }

namespace android {
namespace view {
class TextureView_SurfaceTextureListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextureView_SurfaceTextureListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextureView_SurfaceTextureListener(const ::android::view::TextureView_SurfaceTextureListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextureView_SurfaceTextureListener(::android::view::TextureView_SurfaceTextureListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::TextureView_SurfaceTextureListener& operator=(const ::android::view::TextureView_SurfaceTextureListener& x) {obj = x.obj; return *this;}
    ::android::view::TextureView_SurfaceTextureListener& operator=(::android::view::TextureView_SurfaceTextureListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onSurfaceTextureAvailable(const ::android::graphics::SurfaceTexture&, int32_t, int32_t) const;
    void onSurfaceTextureSizeChanged(const ::android::graphics::SurfaceTexture&, int32_t, int32_t) const;
    bool onSurfaceTextureDestroyed(const ::android::graphics::SurfaceTexture&) const;
    void onSurfaceTextureUpdated(const ::android::graphics::SurfaceTexture&) const;

};
}
}


