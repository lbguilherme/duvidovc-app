#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.view.View.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace net { class Uri; } }
namespace android { namespace util { class AttributeSet; } }
namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } }
namespace android { namespace widget { class ImageView_ScaleType; } }

namespace android {
namespace widget {
class ImageView : public virtual ::java::lang::Object,
                  public virtual ::android::view::View {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageView(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_Callback(_obj), ::android::view::KeyEvent_Callback(_obj), ::android::view::View(_obj), ::android::view::accessibility::AccessibilityEventSource(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageView(const ::android::widget::ImageView& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj;}
    ImageView(::android::widget::ImageView&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::ImageView& operator=(const ::android::widget::ImageView& x) {obj = x.obj; return *this;}
    ::android::widget::ImageView& operator=(::android::widget::ImageView&& x) {obj = std::move(x.obj); return *this;}
    
    ImageView(const ::android::content::Context&);
    ImageView(const ::android::content::Context&, const ::android::util::AttributeSet&);
    ImageView(const ::android::content::Context&, const ::android::util::AttributeSet&, int32_t);
    void jumpDrawablesToCurrentState() const;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const;
    void onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent&) const;
    void setAdjustViewBounds(bool) const;
    void setMaxWidth(int32_t) const;
    void setMaxHeight(int32_t) const;
    ::android::graphics::drawable::Drawable getDrawable() const;
    void setImageResource(int32_t) const;
    void setImageURI(const ::android::net::Uri&) const;
    void setImageDrawable(const ::android::graphics::drawable::Drawable&) const;
    void setImageBitmap(const ::android::graphics::Bitmap&) const;
    void setImageState(const std::vector< int32_t>&, bool) const;
    void setSelected(bool) const;
    void setImageLevel(int32_t) const;
    void setScaleType(const ::android::widget::ImageView_ScaleType&) const;
    ::android::widget::ImageView_ScaleType getScaleType() const;
    ::android::graphics::Matrix getImageMatrix() const;
    void setImageMatrix(const ::android::graphics::Matrix&) const;
    std::vector< int32_t> onCreateDrawableState(int32_t) const;
    int32_t getBaseline() const;
    void setBaseline(int32_t) const;
    void setBaselineAlignBottom(bool) const;
    bool getBaselineAlignBottom() const;
    void setColorFilter(int32_t, const ::android::graphics::PorterDuff_Mode&) const;
    void setColorFilter(int32_t) const;
    void clearColorFilter() const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    void setAlpha(int32_t) const;
    void setVisibility(int32_t) const;

};
}
}

#include "android.widget.ImageView_ScaleType.hpp"

