#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class Socket; } }

namespace android {
namespace net {
class TrafficStats : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrafficStats(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrafficStats(const ::android::net::TrafficStats& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrafficStats(::android::net::TrafficStats&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::TrafficStats& operator=(const ::android::net::TrafficStats& x) {obj = x.obj; return *this;}
    ::android::net::TrafficStats& operator=(::android::net::TrafficStats&& x) {obj = std::move(x.obj); return *this;}
    
    TrafficStats();
    static void setThreadStatsTag(int32_t);
    static int32_t getThreadStatsTag();
    static void clearThreadStatsTag();
    static void tagSocket(const ::java::net::Socket&);
    static void untagSocket(const ::java::net::Socket&);
    static void incrementOperationCount(int32_t);
    static void incrementOperationCount(int32_t, int32_t);
    static int64_t getMobileTxPackets();
    static int64_t getMobileRxPackets();
    static int64_t getMobileTxBytes();
    static int64_t getMobileRxBytes();
    static int64_t getTotalTxPackets();
    static int64_t getTotalRxPackets();
    static int64_t getTotalTxBytes();
    static int64_t getTotalRxBytes();
    static int64_t getUidTxBytes(int32_t);
    static int64_t getUidRxBytes(int32_t);
    static int64_t getUidTxPackets(int32_t);
    static int64_t getUidRxPackets(int32_t);
    static int64_t getUidTcpTxBytes(int32_t);
    static int64_t getUidTcpRxBytes(int32_t);
    static int64_t getUidUdpTxBytes(int32_t);
    static int64_t getUidUdpRxBytes(int32_t);
    static int64_t getUidTcpTxSegments(int32_t);
    static int64_t getUidTcpRxSegments(int32_t);
    static int64_t getUidUdpTxPackets(int32_t);
    static int64_t getUidUdpRxPackets(int32_t);

};
}
}


