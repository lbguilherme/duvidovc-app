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
class ActivityManager_RunningTaskInfo : public virtual ::java::lang::Object,
                                        public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ActivityManager_RunningTaskInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ActivityManager_RunningTaskInfo(const ::android::app::ActivityManager_RunningTaskInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ActivityManager_RunningTaskInfo(::android::app::ActivityManager_RunningTaskInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ActivityManager_RunningTaskInfo& operator=(const ::android::app::ActivityManager_RunningTaskInfo& x) {obj = x.obj; return *this;}
    ::android::app::ActivityManager_RunningTaskInfo& operator=(::android::app::ActivityManager_RunningTaskInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ActivityManager_RunningTaskInfo();
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;

};
}
}


