#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace graphics { namespace drawable { class ShapeDrawable_ShaderFactory; } } }
namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } }
namespace android { namespace util { class AttributeSet; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class ShapeDrawable : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ShapeDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ShapeDrawable(const ::android::graphics::drawable::ShapeDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    ShapeDrawable(::android::graphics::drawable::ShapeDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::ShapeDrawable& operator=(const ::android::graphics::drawable::ShapeDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::ShapeDrawable& operator=(::android::graphics::drawable::ShapeDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    ShapeDrawable();
    ShapeDrawable(const ::android::graphics::drawable::shapes::Shape&);
    ::android::graphics::drawable::shapes::Shape getShape() const ;
    void setShape(const ::android::graphics::drawable::shapes::Shape&) const ;
    void setShaderFactory(const ::android::graphics::drawable::ShapeDrawable_ShaderFactory&) const ;
    ::android::graphics::drawable::ShapeDrawable_ShaderFactory getShaderFactory() const ;
    ::android::graphics::Paint getPaint() const ;
    void setPadding(int32_t, int32_t, int32_t, int32_t) const ;
    void setPadding(const ::android::graphics::Rect&) const ;
    void setIntrinsicWidth(int32_t) const ;
    void setIntrinsicHeight(int32_t) const ;
    int32_t getIntrinsicWidth() const ;
    int32_t getIntrinsicHeight() const ;
    bool getPadding(const ::android::graphics::Rect&) const ;
    void draw(const ::android::graphics::Canvas&) const ;
    int32_t getChangingConfigurations() const ;
    void setAlpha(int32_t) const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    int32_t getOpacity() const ;
    void setDither(bool) const ;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const ;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const ;
    ::android::graphics::drawable::Drawable mutate() const ;

};
}
}
}

#include "android.graphics.drawable.ShapeDrawable_ShaderFactory.hpp"

