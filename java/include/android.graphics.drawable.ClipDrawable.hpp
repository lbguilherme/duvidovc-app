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
class ClipDrawable : public virtual ::java::lang::Object,
                     public virtual ::android::graphics::drawable::Drawable,
                     public virtual ::android::graphics::drawable::Drawable_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipDrawable(const ::android::graphics::drawable::ClipDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj;}
    ClipDrawable(::android::graphics::drawable::ClipDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::ClipDrawable& operator=(const ::android::graphics::drawable::ClipDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::ClipDrawable& operator=(::android::graphics::drawable::ClipDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    ClipDrawable(const ::android::graphics::drawable::Drawable&, int32_t, int32_t);
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const;
    int32_t getChangingConfigurations() const;
    bool getPadding(const ::android::graphics::Rect&) const;
    bool setVisible(bool, bool) const;
    void setAlpha(int32_t) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    int32_t getOpacity() const;
    bool isStateful() const;
    void draw(const ::android::graphics::Canvas&) const;
    int32_t getIntrinsicWidth() const;
    int32_t getIntrinsicHeight() const;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const;

};
}
}
}


