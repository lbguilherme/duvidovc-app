#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace net { class InetAddress; } }

namespace android {
namespace net {
namespace rtp {
class RtpStream : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RtpStream(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RtpStream(const ::android::net::rtp::RtpStream& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RtpStream(::android::net::rtp::RtpStream&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::rtp::RtpStream& operator=(const ::android::net::rtp::RtpStream& x) {obj = x.obj; return *this;}
    ::android::net::rtp::RtpStream& operator=(::android::net::rtp::RtpStream&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::net::InetAddress getLocalAddress() const;
    int32_t getLocalPort() const;
    ::java::net::InetAddress getRemoteAddress() const;
    int32_t getRemotePort() const;
    bool isBusy() const;
    int32_t getMode() const;
    void setMode(int32_t) const;
    void associate(const ::java::net::InetAddress&, int32_t) const;
    void release() const;

};
}
}
}


