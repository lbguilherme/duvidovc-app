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

namespace android {
namespace text {
namespace style {
class StyleSpan : public virtual ::java::lang::Object,
                  public virtual ::android::text::ParcelableSpan,
                  public virtual ::android::text::style::MetricAffectingSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StyleSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StyleSpan(const ::android::text::style::StyleSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    StyleSpan(::android::text::style::StyleSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::StyleSpan& operator=(const ::android::text::style::StyleSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::StyleSpan& operator=(::android::text::style::StyleSpan&& x) {obj = std::move(x.obj); return *this;}
    
    StyleSpan(int32_t);
    StyleSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t getStyle() const ;
    void updateDrawState(const ::android::text::TextPaint&) const ;
    void updateMeasureState(const ::android::text::TextPaint&) const ;

};
}
}
}


