#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace net { class ConnectivityManager; } }
namespace android { namespace net { class NetworkInfo; } }

namespace android {
namespace support {
namespace v4 {
namespace net {
class ConnectivityManagerCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManagerCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManagerCompat(const ::android::support::v4::net::ConnectivityManagerCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectivityManagerCompat(::android::support::v4::net::ConnectivityManagerCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::ConnectivityManagerCompat& operator=(const ::android::support::v4::net::ConnectivityManagerCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::ConnectivityManagerCompat& operator=(::android::support::v4::net::ConnectivityManagerCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ConnectivityManagerCompat();
    static bool isActiveNetworkMetered(const ::android::net::ConnectivityManager&);
    static ::android::net::NetworkInfo getNetworkInfoFromBroadcast(const ::android::net::ConnectivityManager&, const ::android::content::Intent&);

};
}
}
}
}

#include "android.support.v4.net.ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat_ConnectivityManagerCompatImpl.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat_JellyBeanConnectivityManagerCompatImpl.hpp"

