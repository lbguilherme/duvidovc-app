#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class DhcpInfo; } }
namespace android { namespace net { namespace wifi { class WifiConfiguration; } } }
namespace android { namespace net { namespace wifi { class WifiInfo; } } }
namespace android { namespace net { namespace wifi { class WifiManager_MulticastLock; } } }
namespace android { namespace net { namespace wifi { class WifiManager_WifiLock; } } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace net {
namespace wifi {
class WifiManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit WifiManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    WifiManager(const ::android::net::wifi::WifiManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    WifiManager(::android::net::wifi::WifiManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::wifi::WifiManager& operator=(const ::android::net::wifi::WifiManager& x) {obj = x.obj; return *this;}
    ::android::net::wifi::WifiManager& operator=(::android::net::wifi::WifiManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::List getConfiguredNetworks() const;
    int32_t addNetwork(const ::android::net::wifi::WifiConfiguration&) const;
    int32_t updateNetwork(const ::android::net::wifi::WifiConfiguration&) const;
    bool removeNetwork(int32_t) const;
    bool enableNetwork(int32_t, bool) const;
    bool disableNetwork(int32_t) const;
    bool disconnect() const;
    bool reconnect() const;
    bool reassociate() const;
    bool pingSupplicant() const;
    bool startScan() const;
    ::android::net::wifi::WifiInfo getConnectionInfo() const;
    ::java::util::List getScanResults() const;
    bool saveConfiguration() const;
    ::android::net::DhcpInfo getDhcpInfo() const;
    bool setWifiEnabled(bool) const;
    int32_t getWifiState() const;
    bool isWifiEnabled() const;
    static int32_t calculateSignalLevel(int32_t, int32_t);
    static int32_t compareSignalLevel(int32_t, int32_t);
    ::android::net::wifi::WifiManager_WifiLock createWifiLock(int32_t, const ::java::lang::String&) const;
    ::android::net::wifi::WifiManager_WifiLock createWifiLock(const ::java::lang::String&) const;
    ::android::net::wifi::WifiManager_MulticastLock createMulticastLock(const ::java::lang::String&) const;

};
}
}
}

#include "android.net.wifi.WifiManager_MulticastLock.hpp"
#include "android.net.wifi.WifiManager_WifiLock.hpp"

