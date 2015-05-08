#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Matrix; } }
namespace android { namespace view { namespace animation { class Transformation; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace view {
namespace animation {
class Transformation : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Transformation(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Transformation(const ::android::view::animation::Transformation& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Transformation(::android::view::animation::Transformation&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::view::animation::Transformation& operator=(const ::android::view::animation::Transformation& x) {obj = x.obj; return *this;}
    ::android::view::animation::Transformation& operator=(::android::view::animation::Transformation&& x) {obj = std::move(x.obj); return *this;}
    
    Transformation();
    void clear() const ;
    int32_t getTransformationType() const ;
    void setTransformationType(int32_t) const ;
    void set(const ::android::view::animation::Transformation&) const ;
    void compose(const ::android::view::animation::Transformation&) const ;
    ::android::graphics::Matrix getMatrix() const ;
    void setAlpha(float) const ;
    float getAlpha() const ;
    ::java::lang::String toString() const ;
    ::java::lang::String toShortString() const ;

};
}
}
}


