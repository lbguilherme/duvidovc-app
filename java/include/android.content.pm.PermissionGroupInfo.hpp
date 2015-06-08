#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.pm.PackageItemInfo.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { namespace pm { class PackageManager; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
namespace pm {
class PermissionGroupInfo : public virtual ::java::lang::Object,
                            public virtual ::android::content::pm::PackageItemInfo,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PermissionGroupInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::content::pm::PackageItemInfo(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PermissionGroupInfo(const ::android::content::pm::PermissionGroupInfo& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PermissionGroupInfo(::android::content::pm::PermissionGroupInfo&& x) : ::java::lang::Object((jobject)0), ::android::content::pm::PackageItemInfo((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::pm::PermissionGroupInfo& operator=(const ::android::content::pm::PermissionGroupInfo& x) {obj = x.obj; return *this;}
    ::android::content::pm::PermissionGroupInfo& operator=(::android::content::pm::PermissionGroupInfo&& x) {obj = std::move(x.obj); return *this;}
    
    PermissionGroupInfo();
    ::java::lang::CharSequence loadDescription(const ::android::content::pm::PackageManager&) const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


