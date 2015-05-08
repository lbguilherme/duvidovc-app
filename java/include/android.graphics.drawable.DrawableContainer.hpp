#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.graphics.drawable.Drawable_Callback.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace graphics { namespace drawable { class Drawable_ConstantState; } } }
namespace java { namespace lang { class Runnable; } }

namespace android {
namespace graphics {
namespace drawable {
class DrawableContainer : public virtual ::java::lang::Object,
                          public virtual ::android::graphics::drawable::Drawable,
                          public virtual ::android::graphics::drawable::Drawable_Callback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableContainer(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::Drawable_Callback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableContainer(const ::android::graphics::drawable::DrawableContainer& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj;}
    DrawableContainer(::android::graphics::drawable::DrawableContainer&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::DrawableContainer& operator=(const ::android::graphics::drawable::DrawableContainer& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::DrawableContainer& operator=(::android::graphics::drawable::DrawableContainer&& x) {obj = std::move(x.obj); return *this;}
    
    DrawableContainer();
    void draw(const ::android::graphics::Canvas&) const ;
    int32_t getChangingConfigurations() const ;
    bool getPadding(const ::android::graphics::Rect&) const ;
    void setAlpha(int32_t) const ;
    void setDither(bool) const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    void setEnterFadeDuration(int32_t) const ;
    void setExitFadeDuration(int32_t) const ;
    bool isStateful() const ;
    void jumpToCurrentState() const ;
    int32_t getIntrinsicWidth() const ;
    int32_t getIntrinsicHeight() const ;
    int32_t getMinimumWidth() const ;
    int32_t getMinimumHeight() const ;
    void invalidateDrawable(const ::android::graphics::drawable::Drawable&) const ;
    void scheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&, int64_t) const ;
    void unscheduleDrawable(const ::android::graphics::drawable::Drawable&, const ::java::lang::Runnable&) const ;
    bool setVisible(bool, bool) const ;
    int32_t getOpacity() const ;
    bool selectDrawable(int32_t) const ;
    ::android::graphics::drawable::Drawable getCurrent() const ;
    ::android::graphics::drawable::Drawable_ConstantState getConstantState() const ;
    ::android::graphics::drawable::Drawable mutate() const ;

};
}
}
}

#include "android.graphics.drawable.DrawableContainer_DrawableContainerState.hpp"

