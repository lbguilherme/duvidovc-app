#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace net {
class TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags(const ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags(::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags& operator=(const ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags& operator=(::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


