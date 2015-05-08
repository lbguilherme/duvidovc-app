#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pGroup; } } } }

namespace android {
namespace net {
namespace wifi {
namespace p2p {
class WifiP2pManager_GroupInfoListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pManager_GroupInfoListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pManager_GroupInfoListener(const ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiP2pManager_GroupInfoListener(::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener& operator=(const ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener& operator=(::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onGroupInfoAvailable(const ::android::net::wifi::p2p::WifiP2pGroup&) const ;

};
}
}
}
}


