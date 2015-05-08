#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.graphics.drawable.shapes.Shape.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { namespace drawable { namespace shapes { class RectShape; } } } }

namespace android {
namespace graphics {
namespace drawable {
namespace shapes {
class RectShape : public virtual ::java::lang::Object,
                  public virtual ::android::graphics::drawable::shapes::Shape {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RectShape(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::shapes::Shape(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RectShape(const ::android::graphics::drawable::shapes::RectShape& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    RectShape(::android::graphics::drawable::shapes::RectShape&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::shapes::RectShape& operator=(const ::android::graphics::drawable::shapes::RectShape& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::shapes::RectShape& operator=(::android::graphics::drawable::shapes::RectShape&& x) {obj = std::move(x.obj); return *this;}
    
    RectShape();
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Paint&) const ;
    ::android::graphics::drawable::shapes::RectShape clone() const ;

};
}
}
}
}


