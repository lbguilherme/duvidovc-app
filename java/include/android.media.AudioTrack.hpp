#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class AudioTrack_OnPlaybackPositionUpdateListener; } }
namespace android { namespace os { class Handler; } }

namespace android {
namespace media {
class AudioTrack : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioTrack(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioTrack(const ::android::media::AudioTrack& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioTrack(::android::media::AudioTrack&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioTrack& operator=(const ::android::media::AudioTrack& x) {obj = x.obj; return *this;}
    ::android::media::AudioTrack& operator=(::android::media::AudioTrack&& x) {obj = std::move(x.obj); return *this;}
    
    AudioTrack(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    AudioTrack(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    void release() const;
    static float getMinVolume();
    static float getMaxVolume();
    int32_t getSampleRate() const;
    int32_t getPlaybackRate() const;
    int32_t getAudioFormat() const;
    int32_t getStreamType() const;
    int32_t getChannelConfiguration() const;
    int32_t getChannelCount() const;
    int32_t getState() const;
    int32_t getPlayState() const;
    int32_t getNotificationMarkerPosition() const;
    int32_t getPositionNotificationPeriod() const;
    int32_t getPlaybackHeadPosition() const;
    static int32_t getNativeOutputSampleRate(int32_t);
    static int32_t getMinBufferSize(int32_t, int32_t, int32_t);
    int32_t getAudioSessionId() const;
    void setPlaybackPositionUpdateListener(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener&) const;
    void setPlaybackPositionUpdateListener(const ::android::media::AudioTrack_OnPlaybackPositionUpdateListener&, const ::android::os::Handler&) const;
    int32_t setStereoVolume(float, float) const;
    int32_t setPlaybackRate(int32_t) const;
    int32_t setNotificationMarkerPosition(int32_t) const;
    int32_t setPositionNotificationPeriod(int32_t) const;
    int32_t setPlaybackHeadPosition(int32_t) const;
    int32_t setLoopPoints(int32_t, int32_t, int32_t) const;
    void play() const;
    void stop() const;
    void pause() const;
    void flush() const;
    int32_t write(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t write(const std::vector< int16_t>&, int32_t, int32_t) const;
    int32_t reloadStaticData() const;
    int32_t attachAuxEffect(int32_t) const;
    int32_t setAuxEffectSendLevel(float) const;

};
}
}

#include "android.media.AudioTrack_OnPlaybackPositionUpdateListener.hpp"

