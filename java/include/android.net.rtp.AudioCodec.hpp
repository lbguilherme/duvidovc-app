#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace rtp { class AudioCodec; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace rtp {
class AudioCodec : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioCodec(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioCodec(const ::android::net::rtp::AudioCodec& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioCodec(::android::net::rtp::AudioCodec&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::rtp::AudioCodec& operator=(const ::android::net::rtp::AudioCodec& x) {obj = x.obj; return *this;}
    ::android::net::rtp::AudioCodec& operator=(::android::net::rtp::AudioCodec&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::android::net::rtp::AudioCodec> getCodecs();
    static ::android::net::rtp::AudioCodec getCodec(int32_t, const ::java::lang::String&, const ::java::lang::String&);

};
}
}
}


