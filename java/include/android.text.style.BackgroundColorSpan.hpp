#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.UpdateAppearance.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class TextPaint; } }

namespace android {
namespace text {
namespace style {
class BackgroundColorSpan : public virtual ::java::lang::Object,
                            public virtual ::android::text::ParcelableSpan,
                            public virtual ::android::text::style::CharacterStyle,
                            public virtual ::android::text::style::UpdateAppearance {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BackgroundColorSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BackgroundColorSpan(const ::android::text::style::BackgroundColorSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    BackgroundColorSpan(::android::text::style::BackgroundColorSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::BackgroundColorSpan& operator=(const ::android::text::style::BackgroundColorSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::BackgroundColorSpan& operator=(::android::text::style::BackgroundColorSpan&& x) {obj = std::move(x.obj); return *this;}
    
    BackgroundColorSpan(int32_t);
    BackgroundColorSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t getBackgroundColor() const;
    void updateDrawState(const ::android::text::TextPaint&) const;

};
}
}
}


