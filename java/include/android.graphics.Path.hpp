#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class Path_Direction; } }
namespace android { namespace graphics { class Path_FillType; } }
namespace android { namespace graphics { class RectF; } }

namespace android {
namespace graphics {
class Path : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Path(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Path(const ::android::graphics::Path& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Path(::android::graphics::Path&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Path& operator=(const ::android::graphics::Path& x) {obj = x.obj; return *this;}
    ::android::graphics::Path& operator=(::android::graphics::Path&& x) {obj = std::move(x.obj); return *this;}
    
    Path();
    void reset() const;
    void rewind() const;
    void set(const ::android::graphics::Path&) const;
    ::android::graphics::Path_FillType getFillType() const;
    void setFillType(const ::android::graphics::Path_FillType&) const;
    bool isInverseFillType() const;
    void toggleInverseFillType() const;
    bool isEmpty() const;
    bool isRect(const ::android::graphics::RectF&) const;
    void computeBounds(const ::android::graphics::RectF&, bool) const;
    void incReserve(int32_t) const;
    void moveTo(float, float) const;
    void rMoveTo(float, float) const;
    void lineTo(float, float) const;
    void rLineTo(float, float) const;
    void quadTo(float, float, float, float) const;
    void rQuadTo(float, float, float, float) const;
    void cubicTo(float, float, float, float, float, float) const;
    void rCubicTo(float, float, float, float, float, float) const;
    void arcTo(const ::android::graphics::RectF&, float, float, bool) const;
    void arcTo(const ::android::graphics::RectF&, float, float) const;
    void close() const;
    void addRect(const ::android::graphics::RectF&, const ::android::graphics::Path_Direction&) const;
    void addRect(float, float, float, float, const ::android::graphics::Path_Direction&) const;
    void addOval(const ::android::graphics::RectF&, const ::android::graphics::Path_Direction&) const;
    void addCircle(float, float, float, const ::android::graphics::Path_Direction&) const;
    void addArc(const ::android::graphics::RectF&, float, float) const;
    void addRoundRect(const ::android::graphics::RectF&, float, float, const ::android::graphics::Path_Direction&) const;
    void addRoundRect(const ::android::graphics::RectF&, const std::vector< float>&, const ::android::graphics::Path_Direction&) const;
    void addPath(const ::android::graphics::Path&, float, float) const;
    void addPath(const ::android::graphics::Path&) const;
    void addPath(const ::android::graphics::Path&, const ::android::graphics::Matrix&) const;
    void offset(float, float, const ::android::graphics::Path&) const;
    void offset(float, float) const;
    void setLastPoint(float, float) const;
    void transform(const ::android::graphics::Matrix&, const ::android::graphics::Path&) const;
    void transform(const ::android::graphics::Matrix&) const;

};
}
}

#include "android.graphics.Path_Direction.hpp"
#include "android.graphics.Path_FillType.hpp"

