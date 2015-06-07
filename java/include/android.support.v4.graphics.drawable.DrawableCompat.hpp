#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat(const ::android::support::v4::graphics::drawable::DrawableCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DrawableCompat(::android::support::v4::graphics::drawable::DrawableCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat& operator=(::android::support::v4::graphics::drawable::DrawableCompat&& x) {obj = std::move(x.obj); return *this;}
    
    DrawableCompat();
    static void jumpToCurrentState(const ::android::graphics::drawable::Drawable&);
    static void setAutoMirrored(const ::android::graphics::drawable::Drawable&, bool);
    static bool isAutoMirrored(const ::android::graphics::drawable::Drawable&);
    static void setHotspot(const ::android::graphics::drawable::Drawable&, float, float);
    static void setHotspotBounds(const ::android::graphics::drawable::Drawable&, int32_t, int32_t, int32_t, int32_t);
    static void setTint(const ::android::graphics::drawable::Drawable&, int32_t);
    static void setTintList(const ::android::graphics::drawable::Drawable&, const ::android::content::res::ColorStateList&);
    static void setTintMode(const ::android::graphics::drawable::Drawable&, const ::android::graphics::PorterDuff_Mode&);
    static ::android::graphics::drawable::Drawable wrap(const ::android::graphics::drawable::Drawable&);
    static ::android::graphics::drawable::Drawable unwrap(const ::android::graphics::drawable::Drawable&);

};
}
}
}
}
}

#include "android.support.v4.graphics.drawable.DrawableCompat_BaseDrawableImpl.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_DrawableImpl.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_HoneycombDrawableImpl.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_KitKatDrawableImpl.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_LollipopDrawableImpl.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_LollipopMr1DrawableImpl.hpp"

