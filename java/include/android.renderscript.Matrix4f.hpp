#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace renderscript { class Matrix4f; } }

namespace android {
namespace renderscript {
class Matrix4f : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix4f(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix4f(const ::android::renderscript::Matrix4f& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Matrix4f(::android::renderscript::Matrix4f&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::renderscript::Matrix4f& operator=(const ::android::renderscript::Matrix4f& x) {obj = x.obj; return *this;}
    ::android::renderscript::Matrix4f& operator=(::android::renderscript::Matrix4f&& x) {obj = std::move(x.obj); return *this;}
    
    Matrix4f();
    Matrix4f(const std::vector< float>&);
    std::vector< float> getArray() const;
    float get(int32_t, int32_t) const;
    void set(int32_t, int32_t, float) const;
    void loadIdentity() const;
    void load(const ::android::renderscript::Matrix4f&) const;
    void loadRotate(float, float, float, float) const;
    void loadScale(float, float, float) const;
    void loadTranslate(float, float, float) const;
    void loadMultiply(const ::android::renderscript::Matrix4f&, const ::android::renderscript::Matrix4f&) const;
    void loadOrtho(float, float, float, float, float, float) const;
    void loadOrthoWindow(int32_t, int32_t) const;
    void loadFrustum(float, float, float, float, float, float) const;
    void loadPerspective(float, float, float, float) const;
    void loadProjectionNormalized(int32_t, int32_t) const;
    void multiply(const ::android::renderscript::Matrix4f&) const;
    void rotate(float, float, float, float) const;
    void scale(float, float, float) const;
    void translate(float, float, float) const;
    bool inverse() const;
    bool inverseTranspose() const;
    void transpose() const;

};
}
}


