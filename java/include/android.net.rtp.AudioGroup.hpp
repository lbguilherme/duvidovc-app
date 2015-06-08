#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace rtp { class AudioStream; } } }

namespace android {
namespace net {
namespace rtp {
class AudioGroup : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioGroup(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioGroup(const ::android::net::rtp::AudioGroup& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioGroup(::android::net::rtp::AudioGroup&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::rtp::AudioGroup& operator=(const ::android::net::rtp::AudioGroup& x) {obj = x.obj; return *this;}
    ::android::net::rtp::AudioGroup& operator=(::android::net::rtp::AudioGroup&& x) {obj = std::move(x.obj); return *this;}
    
    AudioGroup();
    std::vector< ::android::net::rtp::AudioStream> getStreams() const;
    int32_t getMode() const;
    void setMode(int32_t) const;
    void sendDtmf(int32_t) const;
    void clear() const;

};
}
}
}


