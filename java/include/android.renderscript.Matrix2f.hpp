#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Matrix2f; } }

namespace android {
namespace renderscript {
class Matrix2f : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix2f(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix2f(const ::android::renderscript::Matrix2f& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Matrix2f(::android::renderscript::Matrix2f&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Matrix2f& operator=(const ::android::renderscript::Matrix2f& x) {obj = x.obj; return *this;}
    ::android::renderscript::Matrix2f& operator=(::android::renderscript::Matrix2f&& x) {obj = std::move(x.obj); return *this;}
    
    Matrix2f();
    Matrix2f(const std::vector< float>&);
    std::vector< float> getArray() const ;
    float get(int32_t, int32_t) const ;
    void set(int32_t, int32_t, float) const ;
    void loadIdentity() const ;
    void load(const ::android::renderscript::Matrix2f&) const ;
    void loadRotate(float) const ;
    void loadScale(float, float) const ;
    void loadMultiply(const ::android::renderscript::Matrix2f&, const ::android::renderscript::Matrix2f&) const ;
    void multiply(const ::android::renderscript::Matrix2f&) const ;
    void rotate(float) const ;
    void scale(float, float) const ;
    void transpose() const ;

};
}
}


