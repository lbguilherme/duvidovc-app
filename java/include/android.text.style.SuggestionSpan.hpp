#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"
#include "android.text.style.CharacterStyle.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace text { class TextPaint; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Locale; } }

namespace android {
namespace text {
namespace style {
class SuggestionSpan : public virtual ::java::lang::Object,
                       public virtual ::android::text::ParcelableSpan,
                       public virtual ::android::text::style::CharacterStyle {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SuggestionSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj), ::android::text::style::CharacterStyle(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SuggestionSpan(const ::android::text::style::SuggestionSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {obj = x.obj;}
    SuggestionSpan(::android::text::style::SuggestionSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::SuggestionSpan& operator=(const ::android::text::style::SuggestionSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::SuggestionSpan& operator=(::android::text::style::SuggestionSpan&& x) {obj = std::move(x.obj); return *this;}
    
    SuggestionSpan(const ::android::content::Context&, const std::vector< ::java::lang::String>&, int32_t);
    SuggestionSpan(const ::java::util::Locale&, const std::vector< ::java::lang::String>&, int32_t);
    SuggestionSpan(const ::android::content::Context&, const ::java::util::Locale&, const std::vector< ::java::lang::String>&, int32_t, const ::java::lang::Class&);
    SuggestionSpan(const ::android::os::Parcel&);
    std::vector< ::java::lang::String> getSuggestions() const ;
    ::java::lang::String getLocale() const ;
    int32_t getFlags() const ;
    void setFlags(int32_t) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t getSpanTypeId() const ;
    bool equals(const ::java::lang::Object&) const ;
    int32_t hashCode() const ;
    void updateDrawState(const ::android::text::TextPaint&) const ;

};
}
}
}


