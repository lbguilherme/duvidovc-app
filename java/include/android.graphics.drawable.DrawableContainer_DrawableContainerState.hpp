#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.Drawable_ConstantState.hpp"

namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }

namespace android {
namespace graphics {
namespace drawable {
class DrawableContainer_DrawableContainerState : public virtual ::java::lang::Object,
                                                 public virtual ::android::graphics::drawable::Drawable_ConstantState {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DrawableContainer_DrawableContainerState(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable_ConstantState(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DrawableContainer_DrawableContainerState(const ::android::graphics::drawable::DrawableContainer_DrawableContainerState& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_ConstantState((jobject)0) {obj = x.obj;}
    DrawableContainer_DrawableContainerState(::android::graphics::drawable::DrawableContainer_DrawableContainerState&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_ConstantState((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::DrawableContainer_DrawableContainerState& operator=(const ::android::graphics::drawable::DrawableContainer_DrawableContainerState& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::DrawableContainer_DrawableContainerState& operator=(::android::graphics::drawable::DrawableContainer_DrawableContainerState&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getChangingConfigurations() const ;
    int32_t addChild(const ::android::graphics::drawable::Drawable&) const ;
    int32_t getChildCount() const ;
    std::vector< ::android::graphics::drawable::Drawable> getChildren() const ;
    void setVariablePadding(bool) const ;
    ::android::graphics::Rect getConstantPadding() const ;
    void setConstantSize(bool) const ;
    bool isConstantSize() const ;
    int32_t getConstantWidth() const ;
    int32_t getConstantHeight() const ;
    int32_t getConstantMinimumWidth() const ;
    int32_t getConstantMinimumHeight() const ;
    void setEnterFadeDuration(int32_t) const ;
    int32_t getEnterFadeDuration() const ;
    void setExitFadeDuration(int32_t) const ;
    int32_t getExitFadeDuration() const ;
    int32_t getOpacity() const ;
    bool isStateful() const ;
    void growArray(int32_t, int32_t) const ;
    bool canConstantState() const ;

};
}
}
}


