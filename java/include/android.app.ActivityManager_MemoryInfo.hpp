#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }

namespace android {
namespace app {
class ActivityManager_MemoryInfo : public virtual ::java::lang::Object,
                                   public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityManager_MemoryInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityManager_MemoryInfo(const ::android::app::ActivityManager_MemoryInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ActivityManager_MemoryInfo(::android::app::ActivityManager_MemoryInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActivityManager_MemoryInfo& operator=(const ::android::app::ActivityManager_MemoryInfo& x) {obj = x.obj; return *this;}
    ::android::app::ActivityManager_MemoryInfo& operator=(::android::app::ActivityManager_MemoryInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityManager_MemoryInfo();
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void readFromParcel(const ::android::os::Parcel&) const;

};
}
}


