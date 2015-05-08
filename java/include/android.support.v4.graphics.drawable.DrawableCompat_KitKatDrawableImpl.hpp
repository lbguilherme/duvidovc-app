#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_HoneycombDrawableImpl.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat_KitKatDrawableImpl : public virtual ::java::lang::Object,
                                          public virtual ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat_KitKatDrawableImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat_KitKatDrawableImpl(const ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0) {obj = x.obj;}
    DrawableCompat_KitKatDrawableImpl(::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl& operator=(::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void setAutoMirrored(const ::android::graphics::drawable::Drawable&, bool) const ;
    bool isAutoMirrored(const ::android::graphics::drawable::Drawable&) const ;

};
}
}
}
}
}


