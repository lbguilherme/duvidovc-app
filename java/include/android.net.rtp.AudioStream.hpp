#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.net.rtp.RtpStream.hpp"

namespace android { namespace net { namespace rtp { class AudioCodec; } } }
namespace android { namespace net { namespace rtp { class AudioGroup; } } }
namespace java { namespace net { class InetAddress; } }

namespace android {
namespace net {
namespace rtp {
class AudioStream : public virtual ::java::lang::Object,
                    public virtual ::android::net::rtp::RtpStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioStream(jobject _obj) : ::java::lang::Object(_obj), ::android::net::rtp::RtpStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioStream(const ::android::net::rtp::AudioStream& x) : ::java::lang::Object((jobject)0), ::android::net::rtp::RtpStream((jobject)0) {obj = x.obj;}
    AudioStream(::android::net::rtp::AudioStream&& x) : ::java::lang::Object((jobject)0), ::android::net::rtp::RtpStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::rtp::AudioStream& operator=(const ::android::net::rtp::AudioStream& x) {obj = x.obj; return *this;}
    ::android::net::rtp::AudioStream& operator=(::android::net::rtp::AudioStream&& x) {obj = std::move(x.obj); return *this;}
    
    AudioStream(const ::java::net::InetAddress&);
    bool isBusy() const;
    ::android::net::rtp::AudioGroup getGroup() const;
    void join(const ::android::net::rtp::AudioGroup&) const;
    ::android::net::rtp::AudioCodec getCodec() const;
    void setCodec(const ::android::net::rtp::AudioCodec&) const;
    int32_t getDtmfType() const;
    void setDtmfType(int32_t) const;

};
}
}
}


