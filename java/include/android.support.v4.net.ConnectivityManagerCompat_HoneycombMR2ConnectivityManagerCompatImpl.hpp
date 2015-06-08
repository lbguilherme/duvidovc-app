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
class ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl : public virtual ::java::lang::Object,
                                                                            public virtual ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl(const ::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj;}
    ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl(::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::ConnectivityManagerCompat_ConnectivityManagerCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl& operator=(const ::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl& operator=(::android::support::v4::net::ConnectivityManagerCompat_HoneycombMR2ConnectivityManagerCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    bool isActiveNetworkMetered(const ::android::net::ConnectivityManager&) const;

};
}
}
}
}


