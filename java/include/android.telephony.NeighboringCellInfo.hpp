#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace telephony {
class NeighboringCellInfo : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NeighboringCellInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NeighboringCellInfo(const ::android::telephony::NeighboringCellInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    NeighboringCellInfo(::android::telephony::NeighboringCellInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::NeighboringCellInfo& operator=(const ::android::telephony::NeighboringCellInfo& x) {obj = x.obj; return *this;}
    ::android::telephony::NeighboringCellInfo& operator=(::android::telephony::NeighboringCellInfo&& x) {obj = std::move(x.obj); return *this;}
    
    NeighboringCellInfo();
    NeighboringCellInfo(int32_t, int32_t);
    NeighboringCellInfo(int32_t, const ::java::lang::String&, int32_t);
    NeighboringCellInfo(const ::android::os::Parcel&);
    int32_t getRssi() const;
    int32_t getLac() const;
    int32_t getCid() const;
    int32_t getPsc() const;
    int32_t getNetworkType() const;
    void setCid(int32_t) const;
    void setRssi(int32_t) const;
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


