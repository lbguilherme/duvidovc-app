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
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace util { class AttributeSet; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class ColorDrawable : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorDrawable(const ::android::graphics::drawable::ColorDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    ColorDrawable(::android::graphics::drawable::ColorDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::ColorDrawable& operator=(const ::android::graphics::drawable::ColorDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::ColorDrawable& operator=(::android::graphics::drawable::ColorDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    ColorDrawable();
    ColorDrawable(int32_t);
    int32_t getChangingConfigurations() const;
    void draw(const ::android::graphics::Canvas&) const;
    int32_t getColor() const;
    void setColor(int32_t) const;
    int32_t getAlpha() const;
    void setAlpha(int32_t) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    int32_t getOpacity() const;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const;

};
}
}
}


