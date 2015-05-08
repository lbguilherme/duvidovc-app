#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class NinePatch; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class DisplayMetrics; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class NinePatchDrawable : public virtual ::java::lang::Object,
                          public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NinePatchDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NinePatchDrawable(const ::android::graphics::drawable::NinePatchDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    NinePatchDrawable(::android::graphics::drawable::NinePatchDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::NinePatchDrawable& operator=(const ::android::graphics::drawable::NinePatchDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::NinePatchDrawable& operator=(::android::graphics::drawable::NinePatchDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    NinePatchDrawable(const ::android::graphics::Bitmap&, const std::vector< int8_t>&, const ::android::graphics::Rect&, const ::java::lang::String&);
    NinePatchDrawable(const ::android::content::res::Resources&, const ::android::graphics::Bitmap&, const std::vector< int8_t>&, const ::android::graphics::Rect&, const ::java::lang::String&);
    NinePatchDrawable(const ::android::graphics::NinePatch&);
    NinePatchDrawable(const ::android::content::res::Resources&, const ::android::graphics::NinePatch&);
    void setTargetDensity(const ::android::graphics::Canvas&) const ;
    void setTargetDensity(const ::android::util::DisplayMetrics&) const ;
    void setTargetDensity(int32_t) const ;
    void draw(const ::android::graphics::Canvas&) const ;
    int32_t getChangingConfigurations() const ;
    bool getPadding(const ::android::graphics::Rect&) const ;
    void setAlpha(int32_t) const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    void setDither(bool) const ;
    void setFilterBitmap(bool) const ;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const ;
    ::android::graphics::Paint getPaint() const ;
    int32_t getIntrinsicWidth() const ;
    int32_t getIntrinsicHeight() const ;
    int32_t getMinimumWidth() const ;
    int32_t getMinimumHeight() const ;
    int32_t getOpacity() const ;
    ::android::graphics::Region getTransparentRegion() const ;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const ;
    ::android::graphics::drawable::Drawable mutate() const ;

};
}
}
}


