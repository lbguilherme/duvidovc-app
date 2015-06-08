#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.LeadingMarginSpan.hpp"

namespace android { namespace graphics { class Canvas; } }
namespace android { namespace graphics { class Paint; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class Layout; } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace text {
namespace style {
class BulletSpan : public virtual ::java::lang::Object,
                   public virtual ::android::text::ParcelableSpan,
                   public virtual ::android::text::style::LeadingMarginSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BulletSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::LeadingMarginSpan(_obj), ::android::text::style::ParagraphStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BulletSpan(const ::android::text::style::BulletSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj;}
    BulletSpan(::android::text::style::BulletSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::BulletSpan& operator=(const ::android::text::style::BulletSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::BulletSpan& operator=(::android::text::style::BulletSpan&& x) {obj = std::move(x.obj); return *this;}
    
    BulletSpan();
    BulletSpan(int32_t);
    BulletSpan(int32_t, int32_t);
    BulletSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t getLeadingMargin(bool) const;
    void drawLeadingMargin(const ::android::graphics::Canvas&, const ::android::graphics::Paint&, int32_t, int32_t, int32_t, int32_t, int32_t, const ::java::lang::CharSequence&, int32_t, int32_t, bool, const ::android::text::Layout&) const;

};
}
}
}


