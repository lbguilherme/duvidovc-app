#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ClipData; } }
namespace android { namespace content { class ClipData_Item; } }
namespace android { namespace content { class ClipDescription; } }
namespace android { namespace content { class ContentResolver; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class ClipData : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClipData(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClipData(const ::android::content::ClipData& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ClipData(::android::content::ClipData&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ClipData& operator=(const ::android::content::ClipData& x) {obj = x.obj; return *this;}
    ::android::content::ClipData& operator=(::android::content::ClipData&& x) {obj = std::move(x.obj); return *this;}
    
    ClipData(const ::java::lang::CharSequence&, const std::vector< ::java::lang::String>&, const ::android::content::ClipData_Item&);
    ClipData(const ::android::content::ClipDescription&, const ::android::content::ClipData_Item&);
    static ::android::content::ClipData newPlainText(const ::java::lang::CharSequence&, const ::java::lang::CharSequence&);
    static ::android::content::ClipData newIntent(const ::java::lang::CharSequence&, const ::android::content::Intent&);
    static ::android::content::ClipData newUri(const ::android::content::ContentResolver&, const ::java::lang::CharSequence&, const ::android::net::Uri&);
    static ::android::content::ClipData newRawUri(const ::java::lang::CharSequence&, const ::android::net::Uri&);
    ::android::content::ClipDescription getDescription() const ;
    void addItem(const ::android::content::ClipData_Item&) const ;
    int32_t getItemCount() const ;
    ::android::content::ClipData_Item getItemAt(int32_t) const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}

#include "android.content.ClipData_Item.hpp"

