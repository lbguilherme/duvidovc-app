#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace net {
namespace wifi {
namespace p2p {
class WifiP2pManager_Channel : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pManager_Channel(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pManager_Channel(const ::android::net::wifi::p2p::WifiP2pManager_Channel& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiP2pManager_Channel(::android::net::wifi::p2p::WifiP2pManager_Channel&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pManager_Channel& operator=(const ::android::net::wifi::p2p::WifiP2pManager_Channel& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pManager_Channel& operator=(::android::net::wifi::p2p::WifiP2pManager_Channel&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


