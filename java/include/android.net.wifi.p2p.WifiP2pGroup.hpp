#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pDevice; } } } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Collection; } }

namespace android {
namespace net {
namespace wifi {
namespace p2p {
class WifiP2pGroup : public virtual ::java::lang::Object,
                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pGroup(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pGroup(const ::android::net::wifi::p2p::WifiP2pGroup& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    WifiP2pGroup(::android::net::wifi::p2p::WifiP2pGroup&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pGroup& operator=(const ::android::net::wifi::p2p::WifiP2pGroup& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pGroup& operator=(::android::net::wifi::p2p::WifiP2pGroup&& x) {obj = std::move(x.obj); return *this;}
    
    WifiP2pGroup();
    ::java::lang::String getNetworkName() const ;
    bool isGroupOwner() const ;
    ::android::net::wifi::p2p::WifiP2pDevice getOwner() const ;
    ::java::util::Collection getClientList() const ;
    ::java::lang::String getPassphrase() const ;
    ::java::lang::String getInterface() const ;
    ::java::lang::String toString() const ;
    int32_t describeContents() const ;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;

};
}
}
}
}


