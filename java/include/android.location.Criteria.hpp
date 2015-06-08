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
namespace location {
class Criteria : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Criteria(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Criteria(const ::android::location::Criteria& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    Criteria(::android::location::Criteria&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::location::Criteria& operator=(const ::android::location::Criteria& x) {obj = x.obj; return *this;}
    ::android::location::Criteria& operator=(::android::location::Criteria&& x) {obj = std::move(x.obj); return *this;}
    
    Criteria();
    void setHorizontalAccuracy(int32_t) const;
    int32_t getHorizontalAccuracy() const;
    void setVerticalAccuracy(int32_t) const;
    int32_t getVerticalAccuracy() const;
    void setSpeedAccuracy(int32_t) const;
    int32_t getSpeedAccuracy() const;
    void setBearingAccuracy(int32_t) const;
    int32_t getBearingAccuracy() const;
    void setAccuracy(int32_t) const;
    int32_t getAccuracy() const;
    void setPowerRequirement(int32_t) const;
    int32_t getPowerRequirement() const;
    void setCostAllowed(bool) const;
    bool isCostAllowed() const;
    void setAltitudeRequired(bool) const;
    bool isAltitudeRequired() const;
    void setSpeedRequired(bool) const;
    bool isSpeedRequired() const;
    void setBearingRequired(bool) const;
    bool isBearingRequired() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


