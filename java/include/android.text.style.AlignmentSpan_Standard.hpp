#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.AlignmentSpan.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class Layout_Alignment; } }

namespace android {
namespace text {
namespace style {
class AlignmentSpan_Standard : public virtual ::java::lang::Object,
                               public virtual ::android::text::ParcelableSpan,
                               public virtual ::android::text::style::AlignmentSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlignmentSpan_Standard(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::AlignmentSpan(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlignmentSpan_Standard(const ::android::text::style::AlignmentSpan_Standard& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::AlignmentSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    AlignmentSpan_Standard(::android::text::style::AlignmentSpan_Standard&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::AlignmentSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::AlignmentSpan_Standard& operator=(const ::android::text::style::AlignmentSpan_Standard& x) {obj = x.obj; return *this;}
    ::android::text::style::AlignmentSpan_Standard& operator=(::android::text::style::AlignmentSpan_Standard&& x) {obj = std::move(x.obj); return *this;}
    
    AlignmentSpan_Standard(const ::android::text::Layout_Alignment&);
    AlignmentSpan_Standard(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::android::text::Layout_Alignment getAlignment() const;

};
}
}
}


