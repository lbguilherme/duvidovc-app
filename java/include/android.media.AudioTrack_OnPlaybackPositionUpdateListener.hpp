#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class AudioTrack; } }

namespace android {
namespace media {
class AudioTrack_OnPlaybackPositionUpdateListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioTrack_OnPlaybackPositionUpdateListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioTrack_OnPlaybackPositionUpdateListener(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioTrack_OnPlaybackPositionUpdateListener(::android::media::AudioTrack_OnPlaybackPositionUpdateListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& operator=(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& x) {obj = x.obj; return *this;}
    ::android::media::AudioTrack_OnPlaybackPositionUpdateListener& operator=(::android::media::AudioTrack_OnPlaybackPositionUpdateListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onMarkerReached(const ::android::media::AudioTrack&) const;
    void onPeriodicNotification(const ::android::media::AudioTrack&) const;

};
}
}


