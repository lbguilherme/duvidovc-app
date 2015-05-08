#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class ConnectivityManager; } }

namespace android {
namespace support {
namespace v4 {
namespace net {
class ConnectivityManagerCompat_ConnectivityManagerCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManagerCompat_ConnectivityManagerCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManagerCompat_ConnectivityManagerCompatImpl(const ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ConnectivityManagerCompat_ConnectivityManagerCompatImpl(::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl& operator=(const ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl& operator=(::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isActiveNetworkMetered(const ::android::net::ConnectivityManager&) const ;

};
}
}
}
}


