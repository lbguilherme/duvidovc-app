#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_LollipopDrawableImpl.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat_LollipopMr1DrawableImpl : public virtual ::java::lang::Object,
                                               public virtual ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat_LollipopMr1DrawableImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat_LollipopMr1DrawableImpl(const ::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl((jobject)0) {obj = x.obj;}
    DrawableCompat_LollipopMr1DrawableImpl(::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_KitKatDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_LollipopDrawableImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl& operator=(::android::support::v4::graphics::drawable::DrawableCompat_LollipopMr1DrawableImpl&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::graphics::drawable::Drawable wrap(const ::android::graphics::drawable::Drawable&) const ;

};
}
}
}
}
}


