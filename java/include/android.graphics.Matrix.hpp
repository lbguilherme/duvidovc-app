#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Matrix_ScaleToFit; } }
namespace android { namespace graphics { class RectF; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Matrix : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Matrix(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Matrix(const ::android::graphics::Matrix& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Matrix(::android::graphics::Matrix&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Matrix& operator=(const ::android::graphics::Matrix& x) {obj = x.obj; return *this;}
    ::android::graphics::Matrix& operator=(::android::graphics::Matrix&& x) {obj = std::move(x.obj); return *this;}
    
    Matrix();
    bool isIdentity() const;
    bool rectStaysRect() const;
    void set(const ::android::graphics::Matrix&) const;
    bool equals(const ::java::lang::Object&) const;
    void reset() const;
    void setTranslate(float, float) const;
    void setScale(float, float, float, float) const;
    void setScale(float, float) const;
    void setRotate(float, float, float) const;
    void setRotate(float) const;
    void setSinCos(float, float, float, float) const;
    void setSinCos(float, float) const;
    void setSkew(float, float, float, float) const;
    void setSkew(float, float) const;
    bool setConcat(const ::android::graphics::Matrix&, const ::android::graphics::Matrix&) const;
    bool preTranslate(float, float) const;
    bool preScale(float, float, float, float) const;
    bool preScale(float, float) const;
    bool preRotate(float, float, float) const;
    bool preRotate(float) const;
    bool preSkew(float, float, float, float) const;
    bool preSkew(float, float) const;
    bool preConcat(const ::android::graphics::Matrix&) const;
    bool postTranslate(float, float) const;
    bool postScale(float, float, float, float) const;
    bool postScale(float, float) const;
    bool postRotate(float, float, float) const;
    bool postRotate(float) const;
    bool postSkew(float, float, float, float) const;
    bool postSkew(float, float) const;
    bool postConcat(const ::android::graphics::Matrix&) const;
    bool setRectToRect(const ::android::graphics::RectF&, const ::android::graphics::RectF&, const ::android::graphics::Matrix_ScaleToFit&) const;
    bool setPolyToPoly(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, int32_t) const;
    bool invert(const ::android::graphics::Matrix&) const;
    void mapPoints(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, int32_t) const;
    void mapVectors(const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, int32_t) const;
    void mapPoints(const std::vector< float>&, const std::vector< float>&) const;
    void mapVectors(const std::vector< float>&, const std::vector< float>&) const;
    void mapPoints(const std::vector< float>&) const;
    void mapVectors(const std::vector< float>&) const;
    bool mapRect(const ::android::graphics::RectF&, const ::android::graphics::RectF&) const;
    bool mapRect(const ::android::graphics::RectF&) const;
    float mapRadius(float) const;
    void getValues(const std::vector< float>&) const;
    void setValues(const std::vector< float>&) const;
    ::java::lang::String toString() const;
    ::java::lang::String toShortString() const;

};
}
}

#include "android.graphics.Matrix_ScaleToFit.hpp"

