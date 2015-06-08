#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.net.TrafficStatsCompat_TrafficStatsCompatImpl.hpp"

namespace java { namespace net { class Socket; } }

namespace android {
namespace support {
namespace v4 {
namespace net {
class TrafficStatsCompat_BaseTrafficStatsCompatImpl : public virtual ::java::lang::Object,
                                                      public virtual ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TrafficStatsCompat_BaseTrafficStatsCompatImpl(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TrafficStatsCompat_BaseTrafficStatsCompatImpl(const ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl((jobject)0) {obj = x.obj;}
    TrafficStatsCompat_BaseTrafficStatsCompatImpl(::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::net::TrafficStatsCompat_TrafficStatsCompatImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl& operator=(const ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl& x) {obj = x.obj; return *this;}
    ::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl& operator=(::android::support::v4::net::TrafficStatsCompat_BaseTrafficStatsCompatImpl&& x) {obj = std::move(x.obj); return *this;}
    
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

#include "android.support.v4.net.TrafficStatsCompat_BaseTrafficStatsCompatImpl_SocketTags.hpp"

