#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.graphics.drawable.DrawableCompat_BaseDrawableImpl.hpp"

namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace support {
namespace v4 {
namespace graphics {
namespace drawable {
class DrawableCompat_HoneycombDrawableImpl : public virtual ::java::lang::Object,
                                             public virtual ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableCompat_HoneycombDrawableImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl(_obj), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableCompat_HoneycombDrawableImpl(const ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0) {obj = x.obj;}
    DrawableCompat_HoneycombDrawableImpl(::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_BaseDrawableImpl((jobject)0), ::android::support::v4::graphics::drawable::DrawableCompat_DrawableImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl& operator=(const ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl& operator=(::android::support::v4::graphics::drawable::DrawableCompat_HoneycombDrawableImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void jumpToCurrentState(const ::android::graphics::drawable::Drawable&) const ;
    ::android::graphics::drawable::Drawable wrap(const ::android::graphics::drawable::Drawable&) const ;

};
}
}
}
}
}


