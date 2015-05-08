#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.pm.ComponentInfo.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class ProviderInfo : public virtual ::java::lang::Object,
                     public virtual ::android::content::pm::ComponentInfo,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ProviderInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::content::pm::ComponentInfo(_obj), ::android::content::pm::PackageItemInfo(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ProviderInfo(const ::android::content::pm::ProviderInfo& x) : ::java::lang::Object((jobject)0), ::android::content::pm::ComponentInfo((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ProviderInfo(::android::content::pm::ProviderInfo&& x) : ::java::lang::Object((jobject)0), ::android::content::pm::ComponentInfo((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::ProviderInfo& operator=(const ::android::content::pm::ProviderInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::ProviderInfo& operator=(::android::content::pm::ProviderInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ProviderInfo();
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    ::java::lang::String toString() const ;

};
}
}
}


