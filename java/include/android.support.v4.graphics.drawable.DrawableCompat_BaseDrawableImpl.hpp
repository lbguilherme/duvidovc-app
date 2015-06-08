#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_DrawableImpl.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat_BaseDrawableImpl : public virtual ::java::lang::Object,
                                        public virtual ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat_BaseDrawableImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat_BaseDrawableImpl(const ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0) {obj = x.obj;}
    DrawableCompat_BaseDrawableImpl(::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl& operator=(::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void jumpToCurrentState(const ::android::graphics::drawable::Drawable&) const;
    void setAutoMirrored(const ::android::graphics::drawable::Drawable&, bool) const;
    bool isAutoMirrored(const ::android::graphics::drawable::Drawable&) const;
    void setHotspot(const ::android::graphics::drawable::Drawable&, float, float) const;
    void setHotspotBounds(const ::android::graphics::drawable::Drawable&, int32_t, int32_t, int32_t, int32_t) const;
    void setTint(const ::android::graphics::drawable::Drawable&, int32_t) const;
    void setTintList(const ::android::graphics::drawable::Drawable&, const ::android::content::res::ColorStateList&) const;
    void setTintMode(const ::android::graphics::drawable::Drawable&, const ::android::graphics::PorterDuff_Mode&) const;
    ::android::graphics::drawable::Drawable wrap(const ::android::graphics::drawable::Drawable&) const;

};
}
}
}
}
}


