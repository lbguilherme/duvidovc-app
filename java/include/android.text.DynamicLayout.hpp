#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.Layout.hpp"

namespace android { namespace text { class Layout_Alignment; } }
namespace android { namespace text { class Layout_Directions; } }
namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { class TextUtils_TruncateAt; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
class DynamicLayout : public virtual ::java::lang::Object,
                      public virtual ::android::text::Layout {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DynamicLayout(jobject _obj) : ::java::lang::Object(_obj), ::android::text::Layout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DynamicLayout(const ::android::text::DynamicLayout& x) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {obj = x.obj;}
    DynamicLayout(::android::text::DynamicLayout&& x) : ::java::lang::Object((jobject)0), ::android::text::Layout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::DynamicLayout& operator=(const ::android::text::DynamicLayout& x) {obj = x.obj; return *this;}
    ::android::text::DynamicLayout& operator=(::android::text::DynamicLayout&& x) {obj = std::move(x.obj); return *this;}
    
    DynamicLayout(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, bool);
    DynamicLayout(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, bool);
    DynamicLayout(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, const ::android::text::TextPaint&, int32_t, const ::android::text::Layout_Alignment&, float, float, bool, const ::android::text::TextUtils_TruncateAt&, int32_t);
    int32_t getLineCount() const ;
    int32_t getLineTop(int32_t) const ;
    int32_t getLineDescent(int32_t) const ;
    int32_t getLineStart(int32_t) const ;
    bool getLineContainsTab(int32_t) const ;
    int32_t getParagraphDirection(int32_t) const ;
    ::android::text::Layout_Directions getLineDirections(int32_t) const ;
    int32_t getTopPadding() const ;
    int32_t getBottomPadding() const ;
    int32_t getEllipsizedWidth() const ;
    int32_t getEllipsisStart(int32_t) const ;
    int32_t getEllipsisCount(int32_t) const ;

};
}
}


