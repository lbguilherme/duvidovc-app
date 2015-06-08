#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Picture; } }

namespace android {
namespace graphics {
namespace drawable {
class PictureDrawable : public virtual ::java::lang::Object,
                        public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PictureDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PictureDrawable(const ::android::graphics::drawable::PictureDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    PictureDrawable(::android::graphics::drawable::PictureDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::PictureDrawable& operator=(const ::android::graphics::drawable::PictureDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::PictureDrawable& operator=(::android::graphics::drawable::PictureDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    PictureDrawable(const ::android::graphics::Picture&);
    ::android::graphics::Picture getPicture() const;
    void setPicture(const ::android::graphics::Picture&) const;
    void draw(const ::android::graphics::Canvas&) const;
    int32_t getIntrinsicWidth() const;
    int32_t getIntrinsicHeight() const;
    int32_t getOpacity() const;
    void setFilterBitmap(bool) const;
    void setDither(bool) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    void setAlpha(int32_t) const;

};
}
}
}


