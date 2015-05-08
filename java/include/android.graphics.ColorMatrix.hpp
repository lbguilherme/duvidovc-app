#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class ColorMatrix; } }

namespace android {
namespace graphics {
class ColorMatrix : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ColorMatrix(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ColorMatrix(const ::android::graphics::ColorMatrix& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ColorMatrix(::android::graphics::ColorMatrix&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::ColorMatrix& operator=(const ::android::graphics::ColorMatrix& x) {obj = x.obj; return *this;}
    ::android::graphics::ColorMatrix& operator=(::android::graphics::ColorMatrix&& x) {obj = std::move(x.obj); return *this;}
    
    ColorMatrix();
    ColorMatrix(const std::vector< float>&);
    std::vector< float> getArray() const ;
    void reset() const ;
    void set(const ::android::graphics::ColorMatrix&) const ;
    void set(const std::vector< float>&) const ;
    void setScale(float, float, float, float) const ;
    void setRotate(int32_t, float) const ;
    void setConcat(const ::android::graphics::ColorMatrix&, const ::android::graphics::ColorMatrix&) const ;
    void preConcat(const ::android::graphics::ColorMatrix&) const ;
    void postConcat(const ::android::graphics::ColorMatrix&) const ;
    void setSaturation(float) const ;
    void setRGB2YUV() const ;
    void setYUV2RGB() const ;

};
}
}


