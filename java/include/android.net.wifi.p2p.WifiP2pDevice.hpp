#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace wifi {
namespace p2p {
class WifiP2pDevice : public virtual ::java::lang::Object,
                      public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pDevice(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pDevice(const ::android::net::wifi::p2p::WifiP2pDevice& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WifiP2pDevice(::android::net::wifi::p2p::WifiP2pDevice&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pDevice& operator=(const ::android::net::wifi::p2p::WifiP2pDevice& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pDevice& operator=(::android::net::wifi::p2p::WifiP2pDevice&& x) {obj = std::move(x.obj); return *this;}
    
    WifiP2pDevice();
    bool wpsPbcSupported() const ;
    bool wpsKeypadSupported() const ;
    bool wpsDisplaySupported() const ;
    bool isServiceDiscoveryCapable() const ;
    bool isGroupOwner() const ;
    bool equals(const ::java::lang::Object&) const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


