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
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace graphics { namespace drawable { class GradientDrawable_Orientation; } } }
namespace android { namespace util { class AttributeSet; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class GradientDrawable : public virtual ::java::lang::Object,
                         public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GradientDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GradientDrawable(const ::android::graphics::drawable::GradientDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    GradientDrawable(::android::graphics::drawable::GradientDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::GradientDrawable& operator=(const ::android::graphics::drawable::GradientDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::GradientDrawable& operator=(::android::graphics::drawable::GradientDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    GradientDrawable();
    GradientDrawable(const ::android::graphics::drawable::GradientDrawable_Orientation&, const std::vector< int32_t>&);
    bool getPadding(const ::android::graphics::Rect&) const;
    void setCornerRadii(const std::vector< float>&) const;
    void setCornerRadius(float) const;
    void setStroke(int32_t, int32_t) const;
    void setStroke(int32_t, int32_t, float, float) const;
    void setSize(int32_t, int32_t) const;
    void setShape(int32_t) const;
    void setGradientType(int32_t) const;
    void setGradientCenter(float, float) const;
    void setGradientRadius(float) const;
    void setUseLevel(bool) const;
    void draw(const ::android::graphics::Canvas&) const;
    void setColor(int32_t) const;
    int32_t getChangingConfigurations() const;
    void setAlpha(int32_t) const;
    void setDither(bool) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    int32_t getOpacity() const;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    int32_t getIntrinsicWidth() const;
    int32_t getIntrinsicHeight() const;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const;
    ::android::graphics::drawable::Drawable mutate() const;

};
}
}
}

#include "android.graphics.drawable.GradientDrawable_Orientation.hpp"

