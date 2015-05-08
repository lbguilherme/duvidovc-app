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
class ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl : public virtual ::java::lang::Object,
                                                                           public virtual ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl(const ::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj;}
    ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl(::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl& operator=(const ::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl& operator=(::android::support::v4::net::ConnectivityManagerCompat_GingerbreadConnectivityManagerCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isActiveNetworkMetered(const ::android::net::ConnectivityManager&) const ;

};
}
}
}
}


