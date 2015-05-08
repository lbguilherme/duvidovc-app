#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class Canvas_EdgeType; } }
namespace android { namespace graphics { class Canvas_VertexMode; } }
namespace android { namespace graphics { class DrawFilter; } }
namespace android { namespace graphics { class Matrix; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class Picture; } }
namespace android { namespace graphics { class PorterDuff_Mode; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class RectF; } }
namespace android { namespace graphics { class Region; } }
namespace android { namespace graphics { class Region_Op; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Canvas : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Canvas(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Canvas(const ::android::graphics::Canvas& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Canvas(::android::graphics::Canvas&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Canvas& operator=(const ::android::graphics::Canvas& x) {obj = x.obj; return *this;}
    ::android::graphics::Canvas& operator=(::android::graphics::Canvas&& x) {obj = std::move(x.obj); return *this;}
    
    Canvas();
    Canvas(const ::android::graphics::Bitmap&);
    bool isHardwareAccelerated() const ;
    void setBitmap(const ::android::graphics::Bitmap&) const ;
    bool isOpaque() const ;
    int32_t getWidth() const ;
    int32_t getHeight() const ;
    int32_t getDensity() const ;
    void setDensity(int32_t) const ;
    int32_t getMaximumBitmapWidth() const ;
    int32_t getMaximumBitmapHeight() const ;
    int32_t save() const ;
    int32_t save(int32_t) const ;
    int32_t saveLayer(const ::android::graphics::RectF&, const ::android::graphics::Paint&, int32_t) const ;
    int32_t saveLayer(float, float, float, float, const ::android::graphics::Paint&, int32_t) const ;
    int32_t saveLayerAlpha(const ::android::graphics::RectF&, int32_t, int32_t) const ;
    int32_t saveLayerAlpha(float, float, float, float, int32_t, int32_t) const ;
    void restore() const ;
    int32_t getSaveCount() const ;
    void restoreToCount(int32_t) const ;
    void translate(float, float) const ;
    void scale(float, float) const ;
    void scale(float, float, float, float) const ;
    void rotate(float) const ;
    void rotate(float, float, float) const ;
    void skew(float, float) const ;
    void concat(const ::android::graphics::Matrix&) const ;
    void setMatrix(const ::android::graphics::Matrix&) const ;
    void getMatrix(const ::android::graphics::Matrix&) const ;
    ::android::graphics::Matrix getMatrix() const ;
    bool clipRect(const ::android::graphics::RectF&, const ::android::graphics::Region_Op&) const ;
    bool clipRect(const ::android::graphics::Rect&, const ::android::graphics::Region_Op&) const ;
    bool clipRect(const ::android::graphics::RectF&) const ;
    bool clipRect(const ::android::graphics::Rect&) const ;
    bool clipRect(float, float, float, float, const ::android::graphics::Region_Op&) const ;
    bool clipRect(float, float, float, float) const ;
    bool clipRect(int32_t, int32_t, int32_t, int32_t) const ;
    bool clipPath(const ::android::graphics::Path&, const ::android::graphics::Region_Op&) const ;
    bool clipPath(const ::android::graphics::Path&) const ;
    bool clipRegion(const ::android::graphics::Region&, const ::android::graphics::Region_Op&) const ;
    bool clipRegion(const ::android::graphics::Region&) const ;
    ::android::graphics::DrawFilter getDrawFilter() const ;
    void setDrawFilter(const ::android::graphics::DrawFilter&) const ;
    bool quickReject(const ::android::graphics::RectF&, const ::android::graphics::Canvas_EdgeType&) const ;
    bool quickReject(const ::android::graphics::Path&, const ::android::graphics::Canvas_EdgeType&) const ;
    bool quickReject(float, float, float, float, const ::android::graphics::Canvas_EdgeType&) const ;
    bool getClipBounds(const ::android::graphics::Rect&) const ;
    ::android::graphics::Rect getClipBounds() const ;
    void drawRGB(int32_t, int32_t, int32_t) const ;
    void drawARGB(int32_t, int32_t, int32_t, int32_t) const ;
    void drawColor(int32_t) const ;
    void drawColor(int32_t, const ::android::graphics::PorterDuff_Mode&) const ;
    void drawPaint(const ::android::graphics::Paint&) const ;
    void drawPoints(const std::vector< float>&, int32_t, int32_t, const ::android::graphics::Paint&) const ;
    void drawPoints(const std::vector< float>&, const ::android::graphics::Paint&) const ;
    void drawPoint(float, float, const ::android::graphics::Paint&) const ;
    void drawLine(float, float, float, float, const ::android::graphics::Paint&) const ;
    void drawLines(const std::vector< float>&, int32_t, int32_t, const ::android::graphics::Paint&) const ;
    void drawLines(const std::vector< float>&, const ::android::graphics::Paint&) const ;
    void drawRect(const ::android::graphics::RectF&, const ::android::graphics::Paint&) const ;
    void drawRect(const ::android::graphics::Rect&, const ::android::graphics::Paint&) const ;
    void drawRect(float, float, float, float, const ::android::graphics::Paint&) const ;
    void drawOval(const ::android::graphics::RectF&, const ::android::graphics::Paint&) const ;
    void drawCircle(float, float, float, const ::android::graphics::Paint&) const ;
    void drawArc(const ::android::graphics::RectF&, float, float, bool, const ::android::graphics::Paint&) const ;
    void drawRoundRect(const ::android::graphics::RectF&, float, float, const ::android::graphics::Paint&) const ;
    void drawPath(const ::android::graphics::Path&, const ::android::graphics::Paint&) const ;
    void drawBitmap(const ::android::graphics::Bitmap&, float, float, const ::android::graphics::Paint&) const ;
    void drawBitmap(const ::android::graphics::Bitmap&, const ::android::graphics::Rect&, const ::android::graphics::RectF&, const ::android::graphics::Paint&) const ;
    void drawBitmap(const ::android::graphics::Bitmap&, const ::android::graphics::Rect&, const ::android::graphics::Rect&, const ::android::graphics::Paint&) const ;
    void drawBitmap(const std::vector< int32_t>&, int32_t, int32_t, float, float, int32_t, int32_t, bool, const ::android::graphics::Paint&) const ;
    void drawBitmap(const std::vector< int32_t>&, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, const ::android::graphics::Paint&) const ;
    void drawBitmap(const ::android::graphics::Bitmap&, const ::android::graphics::Matrix&, const ::android::graphics::Paint&) const ;
    void drawBitmapMesh(const ::android::graphics::Bitmap&, int32_t, int32_t, const std::vector< float>&, int32_t, const std::vector< int32_t>&, int32_t, const ::android::graphics::Paint&) const ;
    void drawVertices(const ::android::graphics::Canvas_VertexMode&, int32_t, const std::vector< float>&, int32_t, const std::vector< float>&, int32_t, const std::vector< int32_t>&, int32_t, const std::vector< int16_t>&, int32_t, int32_t, const ::android::graphics::Paint&) const ;
    void drawText(const std::vector< uint16_t>&, int32_t, int32_t, float, float, const ::android::graphics::Paint&) const ;
    void drawText(const ::java::lang::String&, float, float, const ::android::graphics::Paint&) const ;
    void drawText(const ::java::lang::String&, int32_t, int32_t, float, float, const ::android::graphics::Paint&) const ;
    void drawText(const ::java::lang::CharSequence&, int32_t, int32_t, float, float, const ::android::graphics::Paint&) const ;
    void drawPosText(const std::vector< uint16_t>&, int32_t, int32_t, const std::vector< float>&, const ::android::graphics::Paint&) const ;
    void drawPosText(const ::java::lang::String&, const std::vector< float>&, const ::android::graphics::Paint&) const ;
    void drawTextOnPath(const std::vector< uint16_t>&, int32_t, int32_t, const ::android::graphics::Path&, float, float, const ::android::graphics::Paint&) const ;
    void drawTextOnPath(const ::java::lang::String&, const ::android::graphics::Path&, float, float, const ::android::graphics::Paint&) const ;
    void drawPicture(const ::android::graphics::Picture&) const ;
    void drawPicture(const ::android::graphics::Picture&, const ::android::graphics::RectF&) const ;
    void drawPicture(const ::android::graphics::Picture&, const ::android::graphics::Rect&) const ;

};
}
}

#include "android.graphics.Canvas_EdgeType.hpp"
#include "android.graphics.Canvas_VertexMode.hpp"

