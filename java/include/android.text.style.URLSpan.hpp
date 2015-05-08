#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.ClickableSpan.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace text {
namespace style {
class URLSpan : public virtual ::java::lang::Object,
                public virtual ::android::text::ParcelableSpan,
                public virtual ::android::text::style::ClickableSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj), ::android::text::style::ClickableSpan(_obj), ::android::text::style::UpdateAppearance(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLSpan(const ::android::text::style::URLSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::ClickableSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj;}
    URLSpan(::android::text::style::URLSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::ClickableSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::URLSpan& operator=(const ::android::text::style::URLSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::URLSpan& operator=(::android::text::style::URLSpan&& x) {obj = std::move(x.obj); return *this;}
    
    URLSpan(const ::java::lang::String&);
    URLSpan(const ::android::os::Parcel&);
    int32_t getSpanTypeId() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String getURL() const ;
    void onClick(const ::android::view::View&) const ;

};
}
}
}


