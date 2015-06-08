#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class ColorFilter; } }
namespace android { namespace graphics { class MaskFilter; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Paint_Align; } }
namespace android { namespace graphics { class Paint_Cap; } }
namespace android { namespace graphics { class Paint_FontMetrics; } }
namespace android { namespace graphics { class Paint_FontMetricsInt; } }
namespace android { namespace graphics { class Paint_Join; } }
namespace android { namespace graphics { class Paint_Style; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class PathEffect; } }
namespace android { namespace graphics { class Rasterizer; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace graphics { class Shader; } }
namespace android { namespace graphics { class Typeface; } }
namespace android { namespace graphics { class Xfermode; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace graphics {
class Paint : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Paint(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Paint(const ::android::graphics::Paint& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Paint(::android::graphics::Paint&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::graphics::Paint& operator=(const ::android::graphics::Paint& x) {obj = x.obj; return *this;}
    ::android::graphics::Paint& operator=(::android::graphics::Paint&& x) {obj = std::move(x.obj); return *this;}
    
    Paint();
    Paint(int32_t);
    void reset() const;
    void set(const ::android::graphics::Paint&) const;
    int32_t getFlags() const;
    void setFlags(int32_t) const;
    int32_t getHinting() const;
    void setHinting(int32_t) const;
    bool isAntiAlias() const;
    void setAntiAlias(bool) const;
    bool isDither() const;
    void setDither(bool) const;
    bool isLinearText() const;
    void setLinearText(bool) const;
    bool isSubpixelText() const;
    void setSubpixelText(bool) const;
    bool isUnderlineText() const;
    void setUnderlineText(bool) const;
    bool isStrikeThruText() const;
    void setStrikeThruText(bool) const;
    bool isFakeBoldText() const;
    void setFakeBoldText(bool) const;
    bool isFilterBitmap() const;
    void setFilterBitmap(bool) const;
    ::android::graphics::Paint_Style getStyle() const;
    void setStyle(const ::android::graphics::Paint_Style&) const;
    int32_t getColor() const;
    void setColor(int32_t) const;
    int32_t getAlpha() const;
    void setAlpha(int32_t) const;
    void setARGB(int32_t, int32_t, int32_t, int32_t) const;
    float getStrokeWidth() const;
    void setStrokeWidth(float) const;
    float getStrokeMiter() const;
    void setStrokeMiter(float) const;
    ::android::graphics::Paint_Cap getStrokeCap() const;
    void setStrokeCap(const ::android::graphics::Paint_Cap&) const;
    ::android::graphics::Paint_Join getStrokeJoin() const;
    void setStrokeJoin(const ::android::graphics::Paint_Join&) const;
    bool getFillPath(const ::android::graphics::Path&, const ::android::graphics::Path&) const;
    ::android::graphics::Shader getShader() const;
    ::android::graphics::Shader setShader(const ::android::graphics::Shader&) const;
    ::android::graphics::ColorFilter getColorFilter() const;
    ::android::graphics::ColorFilter setColorFilter(const ::android::graphics::ColorFilter&) const;
    ::android::graphics::Xfermode getXfermode() const;
    ::android::graphics::Xfermode setXfermode(const ::android::graphics::Xfermode&) const;
    ::android::graphics::PathEffect getPathEffect() const;
    ::android::graphics::PathEffect setPathEffect(const ::android::graphics::PathEffect&) const;
    ::android::graphics::MaskFilter getMaskFilter() const;
    ::android::graphics::MaskFilter setMaskFilter(const ::android::graphics::MaskFilter&) const;
    ::android::graphics::Typeface getTypeface() const;
    ::android::graphics::Typeface setTypeface(const ::android::graphics::Typeface&) const;
    ::android::graphics::Rasterizer getRasterizer() const;
    ::android::graphics::Rasterizer setRasterizer(const ::android::graphics::Rasterizer&) const;
    void setShadowLayer(float, float, float, int32_t) const;
    void clearShadowLayer() const;
    ::android::graphics::Paint_Align getTextAlign() const;
    void setTextAlign(const ::android::graphics::Paint_Align&) const;
    float getTextSize() const;
    void setTextSize(float) const;
    float getTextScaleX() const;
    void setTextScaleX(float) const;
    float getTextSkewX() const;
    void setTextSkewX(float) const;
    float ascent() const;
    float descent() const;
    float getFontMetrics(const ::android::graphics::Paint_FontMetrics&) const;
    ::android::graphics::Paint_FontMetrics getFontMetrics() const;
    int32_t getFontMetricsInt(const ::android::graphics::Paint_FontMetricsInt&) const;
    ::android::graphics::Paint_FontMetricsInt getFontMetricsInt() const;
    float getFontSpacing() const;
    float measureText(const std::vector< uint16_t>&, int32_t, int32_t) const;
    float measureText(const ::java::lang::String&, int32_t, int32_t) const;
    float measureText(const ::java::lang::String&) const;
    float measureText(const ::java::lang::CharSequence&, int32_t, int32_t) const;
    int32_t breakText(const std::vector< uint16_t>&, int32_t, int32_t, float, const std::vector< float>&) const;
    int32_t breakText(const ::java::lang::CharSequence&, int32_t, int32_t, bool, float, const std::vector< float>&) const;
    int32_t breakText(const ::java::lang::String&, bool, float, const std::vector< float>&) const;
    int32_t getTextWidths(const std::vector< uint16_t>&, int32_t, int32_t, const std::vector< float>&) const;
    int32_t getTextWidths(const ::java::lang::CharSequence&, int32_t, int32_t, const std::vector< float>&) const;
    int32_t getTextWidths(const ::java::lang::String&, int32_t, int32_t, const std::vector< float>&) const;
    int32_t getTextWidths(const ::java::lang::String&, const std::vector< float>&) const;
    void getTextPath(const std::vector< uint16_t>&, int32_t, int32_t, float, float, const ::android::graphics::Path&) const;
    void getTextPath(const ::java::lang::String&, int32_t, int32_t, float, float, const ::android::graphics::Path&) const;
    void getTextBounds(const ::java::lang::String&, int32_t, int32_t, const ::android::graphics::Rect&) const;
    void getTextBounds(const std::vector< uint16_t>&, int32_t, int32_t, const ::android::graphics::Rect&) const;

};
}
}

#include "android.graphics.Paint_Align.hpp"
#include "android.graphics.Paint_Cap.hpp"
#include "android.graphics.Paint_FontMetrics.hpp"
#include "android.graphics.Paint_FontMetricsInt.hpp"
#include "android.graphics.Paint_Join.hpp"
#include "android.graphics.Paint_Style.hpp"

