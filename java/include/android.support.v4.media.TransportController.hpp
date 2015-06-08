#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace media { class TransportStateListener; } } } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class TransportController : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransportController(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransportController(const ::android::support::v4::media::TransportController& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TransportController(::android::support::v4::media::TransportController&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::TransportController& operator=(const ::android::support::v4::media::TransportController& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::TransportController& operator=(::android::support::v4::media::TransportController&& x) {obj = std::move(x.obj); return *this;}
    
    TransportController();
    void registerStateListener(const ::android::support::v4::media::TransportStateListener&) const;
    void unregisterStateListener(const ::android::support::v4::media::TransportStateListener&) const;
    void startPlaying() const;
    void pausePlaying() const;
    void stopPlaying() const;
    int64_t getDuration() const;
    int64_t getCurrentPosition() const;
    void seekTo(int64_t) const;
    bool isPlaying() const;
    int32_t getBufferPercentage() const;
    int32_t getTransportControlFlags() const;

};
}
}
}
}


