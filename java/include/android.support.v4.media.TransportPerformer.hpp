#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace view { class KeyEvent; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class TransportPerformer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransportPerformer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransportPerformer(const ::android::support::v4::media::TransportPerformer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    TransportPerformer(::android::support::v4::media::TransportPerformer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::TransportPerformer& operator=(const ::android::support::v4::media::TransportPerformer& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::TransportPerformer& operator=(::android::support::v4::media::TransportPerformer&& x) {obj = std::move(x.obj); return *this;}
    
    TransportPerformer();
    void onStart() const;
    void onPause() const;
    void onStop() const;
    int64_t onGetDuration() const;
    int64_t onGetCurrentPosition() const;
    void onSeekTo(int64_t) const;
    bool onIsPlaying() const;
    int32_t onGetBufferPercentage() const;
    int32_t onGetTransportControlFlags() const;
    bool onMediaButtonDown(int32_t, const ::android::view::KeyEvent&) const;
    bool onMediaButtonUp(int32_t, const ::android::view::KeyEvent&) const;
    void onAudioFocusChange(int32_t) const;

};
}
}
}
}


