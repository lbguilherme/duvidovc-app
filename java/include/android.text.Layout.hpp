#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace graphics { class Rect; } }
namespace android { namespace text { class Layout_Alignment; } }
namespace android { namespace text { class Layout_Directions; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class Layout : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Layout(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Layout(const ::android::text::Layout& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Layout(::android::text::Layout&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::Layout& operator=(const ::android::text::Layout& x) {obj = x.obj; return *this;}
    ::android::text::Layout& operator=(::android::text::Layout&& x) {obj = std::move(x.obj); return *this;}
    
    static float getDesiredWidth(const ::java::lang::CharSequence&, const ::android::text::TextPaint&);
    static float getDesiredWidth(const ::java::lang::CharSequence&, int32_t, int32_t, const ::android::text::TextPaint&);
    void draw(const ::android::graphics::Canvas&) const;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Path&, const ::android::graphics::Paint&, int32_t) const;
    ::java::lang::CharSequence getText() const;
    ::android::text::TextPaint getPaint() const;
    int32_t getWidth() const;
    int32_t getEllipsizedWidth() const;
    void increaseWidthTo(int32_t) const;
    int32_t getHeight() const;
    ::android::text::Layout_Alignment getAlignment() const;
    float getSpacingMultiplier() const;
    float getSpacingAdd() const;
    int32_t getLineCount() const;
    int32_t getLineBounds(int32_t, const ::android::graphics::Rect&) const;
    int32_t getLineTop(int32_t) const;
    int32_t getLineDescent(int32_t) const;
    int32_t getLineStart(int32_t) const;
    int32_t getParagraphDirection(int32_t) const;
    bool getLineContainsTab(int32_t) const;
    ::android::text::Layout_Directions getLineDirections(int32_t) const;
    int32_t getTopPadding() const;
    int32_t getBottomPadding() const;
    bool isRtlCharAt(int32_t) const;
    float getPrimaryHorizontal(int32_t) const;
    float getSecondaryHorizontal(int32_t) const;
    float getLineLeft(int32_t) const;
    float getLineRight(int32_t) const;
    float getLineMax(int32_t) const;
    float getLineWidth(int32_t) const;
    int32_t getLineForVertical(int32_t) const;
    int32_t getLineForOffset(int32_t) const;
    int32_t getOffsetForHorizontal(int32_t, float) const;
    int32_t getLineEnd(int32_t) const;
    int32_t getLineVisibleEnd(int32_t) const;
    int32_t getLineBottom(int32_t) const;
    int32_t getLineBaseline(int32_t) const;
    int32_t getLineAscent(int32_t) const;
    int32_t getOffsetToLeftOf(int32_t) const;
    int32_t getOffsetToRightOf(int32_t) const;
    void getCursorPath(int32_t, const ::android::graphics::Path&, const ::java::lang::CharSequence&) const;
    void getSelectionPath(int32_t, int32_t, const ::android::graphics::Path&) const;
    ::android::text::Layout_Alignment getParagraphAlignment(int32_t) const;
    int32_t getParagraphLeft(int32_t) const;
    int32_t getParagraphRight(int32_t) const;
    int32_t getEllipsisStart(int32_t) const;
    int32_t getEllipsisCount(int32_t) const;

};
}
}

#include "android.text.Layout_Alignment.hpp"
#include "android.text.Layout_Directions.hpp"

