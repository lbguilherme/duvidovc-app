#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_KitKatDrawableImpl.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat_LollipopDrawableImpl : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat_LollipopDrawableImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat_LollipopDrawableImpl(const ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl((jobject)0) {obj = x.obj;}
    DrawableCompat_LollipopDrawableImpl(::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl& operator=(::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setHotspot(const ::android::graphics::drawable::Drawable&, float, float) const ;
    void setHotspotBounds(const ::android::graphics::drawable::Drawable&, int32_t, int32_t, int32_t, int32_t) const ;
    void setTint(const ::android::graphics::drawable::Drawable&, int32_t) const ;
    void setTintList(const ::android::graphics::drawable::Drawable&, const ::android::content::res::ColorStateList&) const ;
    void setTintMode(const ::android::graphics::drawable::Drawable&, const ::android::graphics::PorterDuff_Mode&) const ;
    ::android::graphics::drawable::Drawable wrap(const ::android::graphics::drawable::Drawable&) const ;

};
}
}
}
}
}

