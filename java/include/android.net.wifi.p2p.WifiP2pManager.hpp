#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pConfig; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_ActionListener; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_Channel; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_ChannelListener; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_ConnectionInfoListener; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_GroupInfoListener; } } } }
namespace android { namespace net { namespace wifi { namespace p2p { class WifiP2pManager_PeerListListener; } } } }
namespace android { namespace os { class Looper; } }

namespace android {
namespace net {
namespace wifi {
namespace p2p {
class WifiP2pManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiP2pManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiP2pManager(const ::android::net::wifi::p2p::WifiP2pManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiP2pManager(::android::net::wifi::p2p::WifiP2pManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::p2p::WifiP2pManager& operator=(const ::android::net::wifi::p2p::WifiP2pManager& x) {obj = x.obj; return *this;}
    ::android::net::wifi::p2p::WifiP2pManager& operator=(::android::net::wifi::p2p::WifiP2pManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::net::wifi::p2p::WifiP2pManager_Channel initialize(const ::android::content::Context&, const ::android::os::Looper&, const ::android::net::wifi::p2p::WifiP2pManager_ChannelListener&) const ;
    void discoverPeers(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener&) const ;
    void connect(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pConfig&, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener&) const ;
    void cancelConnect(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener&) const ;
    void createGroup(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener&) const ;
    void removeGroup(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_ActionListener&) const ;
    void requestPeers(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_PeerListListener&) const ;
    void requestConnectionInfo(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_ConnectionInfoListener&) const ;
    void requestGroupInfo(const ::android::net::wifi::p2p::WifiP2pManager_Channel&, const ::android::net::wifi::p2p::WifiP2pManager_GroupInfoListener&) const ;

};
}
}
}
}

#include "android.net.wifi.p2p.WifiP2pManager_ActionListener.hpp"
#include "android.net.wifi.p2p.WifiP2pManager_Channel.hpp"
#include "android.net.wifi.p2p.WifiP2pManager_ChannelListener.hpp"
#include "android.net.wifi.p2p.WifiP2pManager_ConnectionInfoListener.hpp"
#include "android.net.wifi.p2p.WifiP2pManager_GroupInfoListener.hpp"
#include "android.net.wifi.p2p.WifiP2pManager_PeerListListener.hpp"

