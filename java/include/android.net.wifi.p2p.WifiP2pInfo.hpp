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
namespace p2p {
class WifiP2pInfo : public virtual ::java::lang::Object,
                    public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pInfo(const ::android::net::wifi::p2p::WifiP2pInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WifiP2pInfo(::android::net::wifi::p2p::WifiP2pInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pInfo& operator=(const ::android::net::wifi::p2p::WifiP2pInfo& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pInfo& operator=(::android::net::wifi::p2p::WifiP2pInfo&& x) {obj = std::move(x.obj); return *this;}
    
    WifiP2pInfo();
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


