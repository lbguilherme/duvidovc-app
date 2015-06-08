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
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { namespace drawable { namespace shapes { class PathShape; } } } }

namespace android {
namespace graphics {
namespace drawable {
namespace shapes {
class PathShape : public virtual ::java::lang::Object,
                  public virtual ::android::graphics::drawable::shapes::Shape {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathShape(jobject _obj) : ::java::lang::Object(_obj), ::android::graphics::drawable::shapes::Shape(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathShape(const ::android::graphics::drawable::shapes::PathShape& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    PathShape(::android::graphics::drawable::shapes::PathShape&& x) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::shapes::PathShape& operator=(const ::android::graphics::drawable::shapes::PathShape& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::shapes::PathShape& operator=(::android::graphics::drawable::shapes::PathShape&& x) {obj = std::move(x.obj); return *this;}
    
    PathShape(const ::android::graphics::Path&, float, float);
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Paint&) const;
    ::android::graphics::drawable::shapes::PathShape clone() const;

};
}
}
}
}


