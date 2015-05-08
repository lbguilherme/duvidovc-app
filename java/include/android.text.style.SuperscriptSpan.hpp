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
class SuperscriptSpan : public virtual ::java::lang::Object,
                        public virtual ::android::text::ParcelableSpan,
                        public virtual ::android::text::style::MetricAffectingSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SuperscriptSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SuperscriptSpan(const ::android::text::style::SuperscriptSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    SuperscriptSpan(::android::text::style::SuperscriptSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::SuperscriptSpan& operator=(const ::android::text::style::SuperscriptSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::SuperscriptSpan& operator=(::android::text::style::SuperscriptSpan&& x) {obj = std::move(x.obj); return *this;}
    
    SuperscriptSpan();
    SuperscriptSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void updateDrawState(const ::android::text::TextPaint&) const ;
    void updateMeasureState(const ::android::text::TextPaint&) const ;

};
}
}
}


