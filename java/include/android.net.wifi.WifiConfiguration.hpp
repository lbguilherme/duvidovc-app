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
namespace net {
namespace wifi {
class WifiConfiguration : public virtual ::java::lang::Object,
                          public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiConfiguration(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiConfiguration(const ::android::net::wifi::WifiConfiguration& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WifiConfiguration(::android::net::wifi::WifiConfiguration&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiConfiguration& operator=(const ::android::net::wifi::WifiConfiguration& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiConfiguration& operator=(::android::net::wifi::WifiConfiguration&& x) {obj = std::move(x.obj); return *this;}
    
    WifiConfiguration();
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}

#include "android.net.wifi.WifiConfiguration_AuthAlgorithm.hpp"
#include "android.net.wifi.WifiConfiguration_GroupCipher.hpp"
#include "android.net.wifi.WifiConfiguration_KeyMgmt.hpp"
#include "android.net.wifi.WifiConfiguration_PairwiseCipher.hpp"
#include "android.net.wifi.WifiConfiguration_Protocol.hpp"
#include "android.net.wifi.WifiConfiguration_Status.hpp"

