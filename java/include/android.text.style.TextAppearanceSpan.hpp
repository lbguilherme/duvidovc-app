#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.MetricAffectingSpan.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace res { class ColorStateList; } } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace style {
class TextAppearanceSpan : public virtual ::java::lang::Object,
                           public virtual ::android::text::ParcelableSpan,
                           public virtual ::android::text::style::MetricAffectingSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TextAppearanceSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::MetricAffectingSpan(_obj), ::android::text::style::UpdateAppearance(_obj), ::android::text::style::UpdateLayout(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TextAppearanceSpan(const ::android::text::style::TextAppearanceSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj;}
    TextAppearanceSpan(::android::text::style::TextAppearanceSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::TextAppearanceSpan& operator=(const ::android::text::style::TextAppearanceSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::TextAppearanceSpan& operator=(::android::text::style::TextAppearanceSpan&& x) {obj = std::move(x.obj); return *this;}
    
    TextAppearanceSpan(const ::android::content::Context&, int32_t);
    TextAppearanceSpan(const ::android::content::Context&, int32_t, int32_t);
    TextAppearanceSpan(const ::java::lang::String&, int32_t, int32_t, const ::android::content::res::ColorStateList&, const ::android::content::res::ColorStateList&);
    TextAppearanceSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String getFamily() const ;
    ::android::content::res::ColorStateList getTextColor() const ;
    ::android::content::res::ColorStateList getLinkTextColor() const ;
    int32_t getTextSize() const ;
    int32_t getTextStyle() const ;
    void updateDrawState(const ::android::text::TextPaint&) const ;
    void updateMeasureState(const ::android::text::TextPaint&) const ;

};
}
}
}


