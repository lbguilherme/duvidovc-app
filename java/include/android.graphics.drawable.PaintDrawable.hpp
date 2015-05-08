#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.ShapeDrawable.hpp"


namespace android {
namespace graphics {
namespace drawable {
class PaintDrawable : public virtual ::java::lang::Object,
                      public virtual ::android::graphics::drawable::ShapeDrawable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PaintDrawable(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::Drawable(_obj), ::android::graphics::drawable::ShapeDrawable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PaintDrawable(const ::android::graphics::drawable::PaintDrawable& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::ShapeDrawable((jobject)0) {obj = x.obj;}
    PaintDrawable(::android::graphics::drawable::PaintDrawable&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable((jobject)0), ::android::graphics::drawable::ShapeDrawable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::PaintDrawable& operator=(const ::android::graphics::drawable::PaintDrawable& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::PaintDrawable& operator=(::android::graphics::drawable::PaintDrawable&& x) {obj = std::move(x.obj); return *this;}
    
    PaintDrawable();
    PaintDrawable(int32_t);
    void setCornerRadius(float) const ;
    void setCornerRadii(const std::vector< float>&) const ;

};
}
}
}


