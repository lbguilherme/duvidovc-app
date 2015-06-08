#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.pm.PackageItemInfo.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class InstrumentationInfo : public virtual ::java::lang::Object,
                            public virtual ::android::content::pm::PackageItemInfo,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit InstrumentationInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::content::pm::PackageItemInfo(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    InstrumentationInfo(const ::android::content::pm::InstrumentationInfo& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    InstrumentationInfo(::android::content::pm::InstrumentationInfo&& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::InstrumentationInfo& operator=(const ::android::content::pm::InstrumentationInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::InstrumentationInfo& operator=(::android::content::pm::InstrumentationInfo&& x) {obj = std::move(x.obj); return *this;}
    
    InstrumentationInfo();
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


