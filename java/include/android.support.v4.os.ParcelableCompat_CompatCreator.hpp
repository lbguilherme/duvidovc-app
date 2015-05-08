#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable_Creator.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace os {
class ParcelableCompat_CompatCreator : public virtual ::java::lang::Object,
                                       public virtual ::android::os::Parcelable_Creator {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ParcelableCompat_CompatCreator(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable_Creator(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ParcelableCompat_CompatCreator(const ::android::support::v4::os::ParcelableCompat_CompatCreator& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable_Creator((jobject)0) {obj = x.obj;}
    ParcelableCompat_CompatCreator(::android::support::v4::os::ParcelableCompat_CompatCreator&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable_Creator((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::os::ParcelableCompat_CompatCreator& operator=(const ::android::support::v4::os::ParcelableCompat_CompatCreator& x) {obj = x.obj; return *this;}
    ::android::support::v4::os::ParcelableCompat_CompatCreator& operator=(::android::support::v4::os::ParcelableCompat_CompatCreator&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::Object createFromParcel(const ::android::os::Parcel&) const ;
    std::vector< ::java::lang::Object> newArray(int32_t) const ;

};
}
}
}
}


