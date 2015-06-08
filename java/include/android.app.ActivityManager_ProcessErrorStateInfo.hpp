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
class ActivityManager_ProcessErrorStateInfo : public virtual ::java::lang::Object,
                                              public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityManager_ProcessErrorStateInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityManager_ProcessErrorStateInfo(const ::android::app::ActivityManager_ProcessErrorStateInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ActivityManager_ProcessErrorStateInfo(::android::app::ActivityManager_ProcessErrorStateInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActivityManager_ProcessErrorStateInfo& operator=(const ::android::app::ActivityManager_ProcessErrorStateInfo& x) {obj = x.obj; return *this;}
    ::android::app::ActivityManager_ProcessErrorStateInfo& operator=(::android::app::ActivityManager_ProcessErrorStateInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityManager_ProcessErrorStateInfo();
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void readFromParcel(const ::android::os::Parcel&) const;

};
}
}


