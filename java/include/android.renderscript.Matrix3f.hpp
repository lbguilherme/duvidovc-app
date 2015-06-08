#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Matrix3f; } }

namespace android {
namespace renderscript {
class Matrix3f : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix3f(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix3f(const ::android::renderscript::Matrix3f& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Matrix3f(::android::renderscript::Matrix3f&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Matrix3f& operator=(const ::android::renderscript::Matrix3f& x) {obj = x.obj; return *this;}
    ::android::renderscript::Matrix3f& operator=(::android::renderscript::Matrix3f&& x) {obj = std::move(x.obj); return *this;}
    
    Matrix3f();
    Matrix3f(const std::vector< float>&);
    std::vector< float> getArray() const;
    float get(int32_t, int32_t) const;
    void set(int32_t, int32_t, float) const;
    void loadIdentity() const;
    void load(const ::android::renderscript::Matrix3f&) const;
    void loadRotate(float, float, float, float) const;
    void loadRotate(float) const;
    void loadScale(float, float) const;
    void loadScale(float, float, float) const;
    void loadTranslate(float, float) const;
    void loadMultiply(const ::android::renderscript::Matrix3f&, const ::android::renderscript::Matrix3f&) const;
    void multiply(const ::android::renderscript::Matrix3f&) const;
    void rotate(float, float, float, float) const;
    void rotate(float) const;
    void scale(float, float) const;
    void scale(float, float, float) const;
    void translate(float, float) const;
    void transpose() const;

};
}
}


