#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace media { class TransportController; } } } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class TransportStateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransportStateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransportStateListener(const ::android::support::v4::media::TransportStateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TransportStateListener(::android::support::v4::media::TransportStateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::TransportStateListener& operator=(const ::android::support::v4::media::TransportStateListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::TransportStateListener& operator=(::android::support::v4::media::TransportStateListener&& x) {obj = std::move(x.obj); return *this;}
    
    TransportStateListener();
    void onPlayingChanged(const ::android::support::v4::media::TransportController&) const;
    void onTransportControlsChanged(const ::android::support::v4::media::TransportController&) const;

};
}
}
}
}


