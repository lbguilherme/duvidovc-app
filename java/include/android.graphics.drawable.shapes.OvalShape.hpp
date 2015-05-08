#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.shapes.RectShape.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }

namespace android {
namespace graphics {
namespace drawable {
namespace shapes {
class OvalShape : public virtual ::java::lang::Object,
                  public virtual ::android::graphics::drawable::shapes::RectShape {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit OvalShape(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::shapes::RectShape(_obj), ::android::graphics::drawable::shapes::Shape(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    OvalShape(const ::android::graphics::drawable::shapes::OvalShape& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    OvalShape(::android::graphics::drawable::shapes::OvalShape&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::shapes::OvalShape& operator=(const ::android::graphics::drawable::shapes::OvalShape& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::shapes::OvalShape& operator=(::android::graphics::drawable::shapes::OvalShape&& x) {obj = std::move(x.obj); return *this;}
    
    OvalShape();
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Paint&) const ;

};
}
}
}
}


