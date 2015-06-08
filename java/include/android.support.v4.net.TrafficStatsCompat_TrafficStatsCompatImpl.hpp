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
class TrafficStatsCompat_TrafficStatsCompatImpl : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrafficStatsCompat_TrafficStatsCompatImpl(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrafficStatsCompat_TrafficStatsCompatImpl(const ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TrafficStatsCompat_TrafficStatsCompatImpl(::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl& operator=(const ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl& operator=(::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
    void clearThreadStatsTag() const;
    int32_t getThreadStatsTag() const;
    void incrementOperationCount(int32_t) const;
    void incrementOperationCount(int32_t, int32_t) const;
    void setThreadStatsTag(int32_t) const;
    void tagSocket(const ::java::net::Socket&) const;
    void untagSocket(const ::java::net::Socket&) const;

};
}
}
}
}


