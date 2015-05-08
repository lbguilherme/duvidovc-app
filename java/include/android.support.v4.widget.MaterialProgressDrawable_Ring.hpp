#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { namespace drawable { class Drawable_Callback; } } }

namespace android {
namespace support {
namespace v4 {
namespace widget {
class MaterialProgressDrawable_Ring : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MaterialProgressDrawable_Ring(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MaterialProgressDrawable_Ring(const ::android::support::v4::widget::MaterialProgressDrawable_Ring& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MaterialProgressDrawable_Ring(::android::support::v4::widget::MaterialProgressDrawable_Ring&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::widget::MaterialProgressDrawable_Ring& operator=(const ::android::support::v4::widget::MaterialProgressDrawable_Ring& x) {obj = x.obj; return *this;}
    ::android::support::v4::widget::MaterialProgressDrawable_Ring& operator=(::android::support::v4::widget::MaterialProgressDrawable_Ring&& x) {obj = std::move(x.obj); return *this;}
    
    MaterialProgressDrawable_Ring(const ::android::graphics::drawable::Drawable_Callback&);
    void setBackgroundColor(int32_t) const ;
    void setArrowDimensions(float, float) const ;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Rect&) const ;
    void setColors(const std::vector< int32_t>&) const ;
    void setColorIndex(int32_t) const ;
    void goToNextColor() const ;
    void setColorFilter(const ::android::graphics::ColorFilter&) const ;
    void setAlpha(int32_t) const ;
    int32_t getAlpha() const ;
    void setStrokeWidth(float) const ;
    float getStrokeWidth() const ;
    void setStartTrim(float) const ;
    float getStartTrim() const ;
    float getStartingStartTrim() const ;
    float getStartingEndTrim() const ;
    void setEndTrim(float) const ;
    float getEndTrim() const ;
    void setRotation(float) const ;
    float getRotation() const ;
    void setInsets(int32_t, int32_t) const ;
    float getInsets() const ;
    void setCenterRadius(double) const ;
    double getCenterRadius() const ;
    void setShowArrow(bool) const ;
    void setArrowScale(float) const ;
    float getStartingRotation() const ;
    void storeOriginals() const ;
    void resetOriginals() const ;

};
}
}
}
}


