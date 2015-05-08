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
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Shader_TileMode; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace util { class DisplayMetrics; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class BitmapDrawable : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BitmapDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BitmapDrawable(const ::android::graphics::drawable::BitmapDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    BitmapDrawable(::android::graphics::drawable::BitmapDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::BitmapDrawable& operator=(const ::android::graphics::drawable::BitmapDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::BitmapDrawable& operator=(::android::graphics::drawable::BitmapDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    BitmapDrawable();
    BitmapDrawable(const ::android::content::res::Resources&);
    BitmapDrawable(const ::android::graphics::Bitmap&);
    BitmapDrawable(const ::android::content::res::Resources&, const ::android::graphics::Bitmap&);
    BitmapDrawable(const ::java::lang::String&);
    BitmapDrawable(const ::android::content::res::Resources&, const ::java::lang::String&);
    BitmapDrawable(const ::java::io::InputStream&);
    BitmapDrawable(const ::android::content::res::Resources&, const ::java::io::InputStream&);
    ::android::graphics::Paint getPaint() const ;
    ::android::graphics::Bitmap getBitmap() const ;
    void setTargetDensity(const ::android::graphics::Canvas&) const ;
    void setTargetDensity(const ::android::util::DisplayMetrics&) const ;
    void setTargetDensity(int32_t) const ;
    int32_t getGravity() const ;
    void setGravity(int32_t) const ;
    void setAntiAlias(bool) const ;
    void setFilterBitmap(bool) const ;
    void setDither(bool) const ;
    ::android::graphics::Shader_TileMode getTileModeX() const ;
    ::android::graphics::Shader_TileMode getTileModeY() const ;
    void setTileModeX(const ::android::graphics::Shader_TileMode&) const ;
    void setTileModeY(const ::android::graphics::Shader_TileMode&) const ;
    void setTileModeXY(const ::android::graphics::Shader_TileMode&, const ::android::graphics::Shader_TileMode&) const ;
    int32_t getChangingConfigurations() const ;
    void draw(const ::android::graphics::Canvas&) const ;
    void setAlpha(int32_t) const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    ::android::graphics::drawable::Drawable mutate() const ;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const ;
    int32_t getIntrinsicWidth() const ;
    int32_t getIntrinsicHeight() const ;
    int32_t getOpacity() const ;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const ;

};
}
}
}


