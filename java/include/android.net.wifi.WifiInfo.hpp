#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { class NetworkInfo_DetailedState; } }
namespace android { namespace net { namespace wifi { class SupplicantState; } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace wifi {
class WifiInfo : public virtual ::java::lang::Object,
                 public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiInfo(const ::android::net::wifi::WifiInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WifiInfo(::android::net::wifi::WifiInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiInfo& operator=(const ::android::net::wifi::WifiInfo& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiInfo& operator=(::android::net::wifi::WifiInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getSSID() const;
    ::java::lang::String getBSSID() const;
    int32_t getRssi() const;
    int32_t getLinkSpeed() const;
    ::java::lang::String getMacAddress() const;
    int32_t getNetworkId() const;
    ::android::net::wifi::SupplicantState getSupplicantState() const;
    int32_t getIpAddress() const;
    bool getHiddenSSID() const;
    static ::android::net::NetworkInfo_DetailedState getDetailedStateOf(const ::android::net::wifi::SupplicantState&);
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}
}


