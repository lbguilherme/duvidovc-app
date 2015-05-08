#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class Spannable; } }
namespace android { namespace text { class Spanned; } }
namespace android { namespace text { class TextPaint; } }
namespace android { namespace text { class TextUtils_EllipsizeCallback; } }
namespace android { namespace text { class TextUtils_TruncateAt; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Iterable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { namespace regex { class Pattern; } } }

namespace android {
namespace text {
class TextUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextUtils(const ::android::text::TextUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TextUtils(::android::text::TextUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::TextUtils& operator=(const ::android::text::TextUtils& x) {obj = x.obj; return *this;}
    ::android::text::TextUtils& operator=(::android::text::TextUtils&& x) {obj = std::move(x.obj); return *this;}
    
    static void getChars(const ::java::lang::CharSequence&, int32_t, int32_t, const std::vector< uint16_t>&, int32_t);
    static int32_t indexOf(const ::java::lang::CharSequence&, uint16_t);
    static int32_t indexOf(const ::java::lang::CharSequence&, uint16_t, int32_t);
    static int32_t indexOf(const ::java::lang::CharSequence&, uint16_t, int32_t, int32_t);
    static int32_t lastIndexOf(const ::java::lang::CharSequence&, uint16_t);
    static int32_t lastIndexOf(const ::java::lang::CharSequence&, uint16_t, int32_t);
    static int32_t lastIndexOf(const ::java::lang::CharSequence&, uint16_t, int32_t, int32_t);
    static int32_t indexOf(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    static int32_t indexOf(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, int32_t);
    static int32_t indexOf(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&, int32_t, int32_t);
    static bool regionMatches(const ::java::lang::CharSequence&, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t);
    static ::java::lang::String substring(const ::java::lang::CharSequence&, int32_t, int32_t);
    static ::java::lang::String join(const ::java::lang::CharSequence&, const std::vector< ::java::lang::Object>&);
    static ::java::lang::String join(const ::java::lang::CharSequence&, const ::java::lang::Iterable&);
    static std::vector< ::java::lang::String> split(const ::java::lang::String&, const ::java::lang::String&);
    static std::vector< ::java::lang::String> split(const ::java::lang::String&, const ::java::util::regex::Pattern&);
    static ::java::lang::CharSequence stringOrSpannedString(const ::java::lang::CharSequence&);
    static bool isEmpty(const ::java::lang::CharSequence&);
    static int32_t getTrimmedLength(const ::java::lang::CharSequence&);
    static bool equals(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    static ::java::lang::CharSequence getReverse(const ::java::lang::CharSequence&, int32_t, int32_t);
    static void writeToParcel(const ::java::lang::CharSequence&, const ::android::os::Parcel&, int32_t);
    static void dumpSpans(const ::java::lang::CharSequence&, const ::android::util::Printer&, const ::java::lang::String&);
    static ::java::lang::CharSequence replace(const ::java::lang::CharSequence&, const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::CharSequence>&);
    static ::java::lang::CharSequence expandTemplate(const ::java::lang::CharSequence&, const std::vector< ::java::lang::CharSequence>&);
    static int32_t getOffsetBefore(const ::java::lang::CharSequence&, int32_t);
    static int32_t getOffsetAfter(const ::java::lang::CharSequence&, int32_t);
    static void copySpansFrom(const ::android::text::Spanned&, int32_t, int32_t, const ::java::lang::Class&, const ::android::text::Spannable&, int32_t);
    static ::java::lang::CharSequence ellipsize(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, float, const ::android::text::TextUtils_TruncateAt&);
    static ::java::lang::CharSequence ellipsize(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, float, const ::android::text::TextUtils_TruncateAt&, bool, const ::android::text::TextUtils_EllipsizeCallback&);
    static ::java::lang::CharSequence commaEllipsize(const ::java::lang::CharSequence&, const ::android::text::TextPaint&, float, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String htmlEncode(const ::java::lang::String&);
    static ::java::lang::CharSequence concat(const std::vector< ::java::lang::CharSequence>&);
    static bool isGraphic(const ::java::lang::CharSequence&);
    static bool isGraphic(uint16_t);
    static bool isDigitsOnly(const ::java::lang::CharSequence&);
    static int32_t getCapsMode(const ::java::lang::CharSequence&, int32_t, int32_t);

};
}
}

#include "android.text.TextUtils_EllipsizeCallback.hpp"
#include "android.text.TextUtils_SimpleStringSplitter.hpp"
#include "android.text.TextUtils_StringSplitter.hpp"
#include "android.text.TextUtils_TruncateAt.hpp"

