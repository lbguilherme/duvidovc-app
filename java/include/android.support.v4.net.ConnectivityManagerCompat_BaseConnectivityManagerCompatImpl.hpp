#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.net.ConnectivityManagerCompat_ConnectivityManagerCompatImpl.hpp"

namespace android { namespace net { class ConnectivityManager; } }

namespace android {
namespace support {
namespace v4 {
namespace net {
class ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl : public virtual ::java::lang::Object,
                                                                    public virtual ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl(const ::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj;}
    ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl(::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl& operator=(const ::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl& operator=(::android::support::v4::net::ConnectivityManagerCompat_BaseConnectivityManagerCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isActiveNetworkMetered(const ::android::net::ConnectivityManager&) const;

};
}
}
}
}


