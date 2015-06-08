#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.MetricAffectingSpan.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace style {
class TypefaceSpan : public virtual ::java::lang::Object,
                     public virtual ::android::text::ParcelableSpan,
                     public virtual ::android::text::style::MetricAffectingSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TypefaceSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TypefaceSpan(const ::android::text::style::TypefaceSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    TypefaceSpan(::android::text::style::TypefaceSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::TypefaceSpan& operator=(const ::android::text::style::TypefaceSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::TypefaceSpan& operator=(::android::text::style::TypefaceSpan&& x) {obj = std::move(x.obj); return *this;}
    
    TypefaceSpan(const ::java::lang::String&);
    TypefaceSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String getFamily() const;
    void updateDrawState(const ::android::text::TextPaint&) const;
    void updateMeasureState(const ::android::text::TextPaint&) const;

};
}
}
}


