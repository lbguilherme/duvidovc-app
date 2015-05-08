#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.Layout.hpp"
#include "android.text.TextUtils_EllipsizeCallback.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace graphics { class Path; } }
namespace android { namespace text { class BoringLayout; } }
namespace android { namespace text { class BoringLayout_Metrics; } }
namespace android { namespace text { class Layout_Alignment; } }
namespace android { namespace text { class Layout_Directions; } }
namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { class TextUtils_TruncateAt; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class BoringLayout : public virtual ::java::lang::Object,
                     public virtual ::android::text::Layout,
                     public virtual ::android::text::TextUtils_EllipsizeCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BoringLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::text::Layout(_obj), ::android::text::TextUtils_EllipsizeCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BoringLayout(const ::android::text::BoringLayout& x) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0), ::android::text::TextUtils_EllipsizeCallback((jobject)0) {obj = x.obj;}
    BoringLayout(::android::text::BoringLayout&& x) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0), ::android::text::TextUtils_EllipsizeCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::BoringLayout& operator=(const ::android::text::BoringLayout& x) {obj = x.obj; return *this;}
    ::android::text::BoringLayout& operator=(::android::text::BoringLayout&& x) {obj = std::move(x.obj); return *this;}
    
    BoringLayout(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool);
    BoringLayout(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool, const ::android::text::TextUtils_TruncateAt&, int32_t);
    static ::android::text::BoringLayout make(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool);
    static ::android::text::BoringLayout make(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool, const ::android::text::TextUtils_TruncateAt&, int32_t);
    ::android::text::BoringLayout replaceOrMake(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool) const ;
    ::android::text::BoringLayout replaceOrMake(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, const ::android::text::BoringLayout_Metrics&, bool, const ::android::text::TextUtils_TruncateAt&, int32_t) const ;
    static ::android::text::BoringLayout_Metrics isBoring(const ::java::lang::CharSequence&, const ::android::text::TextPaint&);
    static ::android::text::BoringLayout_Metrics isBoring(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, const ::android::text::BoringLayout_Metrics&);
    int32_t getHeight() const ;
    int32_t getLineCount() const ;
    int32_t getLineTop(int32_t) const ;
    int32_t getLineDescent(int32_t) const ;
    int32_t getLineStart(int32_t) const ;
    int32_t getParagraphDirection(int32_t) const ;
    bool getLineContainsTab(int32_t) const ;
    float getLineMax(int32_t) const ;
    ::android::text::Layout_Directions getLineDirections(int32_t) const ;
    int32_t getTopPadding() const ;
    int32_t getBottomPadding() const ;
    int32_t getEllipsisCount(int32_t) const ;
    int32_t getEllipsisStart(int32_t) const ;
    int32_t getEllipsizedWidth() const ;
    void draw(const ::android::graphics::Canvas&, const ::android::graphics::Path&, const ::android::graphics::Paint&, int32_t) const ;
    void ellipsized(int32_t, int32_t) const ;

};
}
}

#include "android.text.BoringLayout_Metrics.hpp"

