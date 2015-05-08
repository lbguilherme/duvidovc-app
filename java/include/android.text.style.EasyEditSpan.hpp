#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.text.ParcelableSpan.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace text {
namespace style {
class EasyEditSpan : public virtual ::java::lang::Object,
                     public virtual ::android::text::ParcelableSpan {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EasyEditSpan(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj), ::android::text::ParcelableSpan(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EasyEditSpan(const ::android::text::style::EasyEditSpan& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0) {obj = x.obj;}
    EasyEditSpan(::android::text::style::EasyEditSpan&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::text::style::EasyEditSpan& operator=(const ::android::text::style::EasyEditSpan& x) {obj = x.obj; return *this;}
    ::android::text::style::EasyEditSpan& operator=(::android::text::style::EasyEditSpan&& x) {obj = std::move(x.obj); return *this;}
    
    EasyEditSpan();
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t getSpanTypeId() const ;

};
}
}
}


