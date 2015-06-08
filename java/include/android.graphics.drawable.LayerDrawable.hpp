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
class LayerDrawable : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::drawable::Drawable,
                      public virtual ::android::graphics::drawable::Drawable_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LayerDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LayerDrawable(const ::android::graphics::drawable::LayerDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj;}
    LayerDrawable(::android::graphics::drawable::LayerDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::LayerDrawable& operator=(const ::android::graphics::drawable::LayerDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::LayerDrawable& operator=(::android::graphics::drawable::LayerDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    LayerDrawable(const std::vector< ::android::graphics::drawable::Drawable>&);
    void inflate(const ::android::content::res::Resources&, const ::org::xmlpull::v1::XmlPullParser&, const ::android::util::AttributeSet&) const;
    ::android::graphics::drawable::Drawable findDrawableByLayerId(int32_t) const;
    void setId(int32_t, int32_t) const;
    int32_t getNumberOfLayers() const;
    ::android::graphics::drawable::Drawable getDrawable(int32_t) const;
    int32_t getId(int32_t) const;
    bool setDrawableByLayerId(int32_t, const ::android::graphics::drawable::Drawable&) const;
    void setLayerInset(int32_t, int32_t, int32_t, int32_t, int32_t) const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const;
    void draw(const ::android::graphics::Canvas&) const;
    int32_t getChangingConfigurations() const;
    bool getPadding(const ::android::graphics::Rect&) const;
    bool setVisible(bool, bool) const;
    void setDither(bool) const;
    void setAlpha(int32_t) const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    void setOpacity(int32_t) const;
    int32_t getOpacity() const;
    bool isStateful() const;
    int32_t getIntrinsicWidth() const;
    int32_t getIntrinsicHeight() const;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const;
    ::android::graphics::drawable::Drawable mutate() const;

};
}
}
}


