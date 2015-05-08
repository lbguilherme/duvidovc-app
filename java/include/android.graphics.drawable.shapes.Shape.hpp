#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } }

namespace android {
namespace graphics {
namespace drawable {
namespace shapes {
class Shape : public virtual ::java::lang::Object,
              public virtual ::java::lang::Cloneable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Shape(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Shape(const ::android::graphics::drawable::shapes::Shape& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj;}
    Shape(::android::graphics::drawable::shapes::Shape&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::drawable::shapes::Shape& operator=(const ::android::graphics::drawable::shapes::Shape& x) {obj = x.obj; return *this;}
    ::android::graphics::drawable::shapes::Shape& operator=(::android::graphics::drawable::shapes::Shape&& x) {obj = std::move(x.obj); return *this;}
    
    Shape();
    float getWidth() const ;
    float getHeight() const ;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Paint&) const ;
    void resize(float, float) const ;
    bool hasAlpha() const ;
    ::android::graphics::drawable::shapes::Shape clone() const ;

};
}
}
}
}


