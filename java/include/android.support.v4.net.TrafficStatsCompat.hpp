#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class Socket; } }

namespace android {
namespace support {
namespace v4 {
namespace net {
class TrafficStatsCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrafficStatsCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrafficStatsCompat(const ::android::support::v4::net::TrafficStatsCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrafficStatsCompat(::android::support::v4::net::TrafficStatsCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::TrafficStatsCompat& operator=(const ::android::support::v4::net::TrafficStatsCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::TrafficStatsCompat& operator=(::android::support::v4::net::TrafficStatsCompat&& x) {obj = std::move(x.obj); return *this;}
    
    TrafficStatsCompat();
    static void clearThreadStatsTag();
    static int32_t getThreadStatsTag();
    static void incrementOperationCount(int32_t);
    static void incrementOperationCount(int32_t, int32_t);
    static void setThreadStatsTag(int32_t);
    static void tagSocket(const ::java::net::Socket&);
    static void untagSocket(const ::java::net::Socket&);

};
}
}
}
}

#include "android.support.v4.net.TrafficStatsCompat_BaseTrafficStatsCompatImpl.hpp"
#include "android.support.v4.net.TrafficStatsCompat_IcsTrafficStatsCompatImpl.hpp"
#include "android.support.v4.net.TrafficStatsCompat_TrafficStatsCompatImpl.hpp"
#include "android.support.v4.net.TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags.hpp"

