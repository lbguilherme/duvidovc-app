#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Animatable.hpp"
#include "android.graphics.drawable.Drawable.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace view { class View; } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class MaterialProgressDrawable : public virtual ::java::lang::Object,
                                 public virtual ::android::graphics::drawable::Animatable,
                                 public virtual ::android::graphics::drawable::Drawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MaterialProgressDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Animatable(_obj), ::android::graphics::drawable::Drawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MaterialProgressDrawable(const ::android::support::v4::widget::MaterialProgressDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj;}
    MaterialProgressDrawable(::android::support::v4::widget::MaterialProgressDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::MaterialProgressDrawable& operator=(const ::android::support::v4::widget::MaterialProgressDrawable& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::MaterialProgressDrawable& operator=(::android::support::v4::widget::MaterialProgressDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    MaterialProgressDrawable(const ::android::content::Context&, const ::android::view::View&);
    void updateSizes(int32_t) const;
    void showArrow(bool) const;
    void setArrowScale(float) const;
    void setStartEndTrim(float, float) const;
    void setProgressRotation(float) const;
    void setBackgroundColor(int32_t) const;
    void setColorSchemeColors(const std::vector< int32_t>&) const;
    int32_t getIntrinsicHeight() const;
    int32_t getIntrinsicWidth() const;
    void draw(const ::android::graphics::Canvas&) const;
    void setAlpha(int32_t) const;
    int32_t getAlpha() const;
    void setColorFilter(const ::android::graphics::ColorFilter&) const;
    int32_t getOpacity() const;
    bool isRunning() const;
    void start() const;
    void stop() const;

};
}
}
}
}

#include "android.support.v4.widget.MaterialProgressDrawable_EndCurveInterpolator.hpp"
#include "android.support.v4.widget.MaterialProgressDrawable_ProgressDrawableSize.hpp"
#include "android.support.v4.widget.MaterialProgressDrawable_Ring.hpp"
#include "android.support.v4.widget.MaterialProgressDrawable_StartCurveInterpolator.hpp"

