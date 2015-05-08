#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_PlaybackInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_PlaybackInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_PlaybackInfo(const ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaControllerCompat_PlaybackInfo(::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo& operator=(const ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo& operator=(::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t getPlaybackType() const ;
    int32_t getAudioStream() const ;
    int32_t getVolumeControl() const ;
    int32_t getMaxVolume() const ;
    int32_t getCurrentVolume() const ;

};
}
}
}
}
}


