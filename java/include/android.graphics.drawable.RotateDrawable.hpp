#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.graphics.drawable.Drawable_Callback.hpp"

namespace android { namespace content { namespace res { class Resources; } } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace android { namespace util { class AttributeSet; } }
namespace java { namespace lang { class Runnable; } }
namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } }

namespace android {
namespace graphics {
namespace drawable {
class RotateDrawable : public virtual ::java::lang::Object,
                       public virtual ::android::graphics::drawable::Drawable,
                       public virtual ::android::graphics::drawable::Drawable_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RotateDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RotateDrawable(const ::android::graphics::drawable::RotateDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj;}
    RotateDrawable(::android::graphics::drawable::RotateDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::RotateDrawable& operator=(const ::android::graphics::drawable::RotateDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::RotateDrawable& operator=(::android::graphics::drawable::RotateDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    RotateDrawable();
    void draw(const ::android::graphics::Canvas&) const;
    ::android::graphics::drawable::Drawable getDrawable() const;
    int32_t getChangingConfigurations() const;
    void setAlpha(int32_t) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    int32_t getOpacity() const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const;
    bool getPadding(const ::android::graphics::Rect&) const;
    bool setVisible(bool, bool) const;
    bool isStateful() const;
    int32_t getIntrinsicWidth() const;
    int32_t getIntrinsicHeight() const;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const;
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    ::android::graphics::drawable::Drawable mutate() const;

};
}
}
}


