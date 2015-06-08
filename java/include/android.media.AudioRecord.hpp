#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace media { class AudioRecord_OnRecordPositionUpdateListener; } }
namespace android { namespace os { class Handler; } }
namespace java { namespace nio { class ByteBuffer; } }

namespace android {
namespace media {
class AudioRecord : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AudioRecord(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AudioRecord(const ::android::media::AudioRecord& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AudioRecord(::android::media::AudioRecord&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::AudioRecord& operator=(const ::android::media::AudioRecord& x) {obj = x.obj; return *this;}
    ::android::media::AudioRecord& operator=(::android::media::AudioRecord&& x) {obj = std::move(x.obj); return *this;}
    
    AudioRecord(int32_t, int32_t, int32_t, int32_t, int32_t);
    void release() const;
    int32_t getSampleRate() const;
    int32_t getAudioSource() const;
    int32_t getAudioFormat() const;
    int32_t getChannelConfiguration() const;
    int32_t getChannelCount() const;
    int32_t getState() const;
    int32_t getRecordingState() const;
    int32_t getNotificationMarkerPosition() const;
    int32_t getPositionNotificationPeriod() const;
    static int32_t getMinBufferSize(int32_t, int32_t, int32_t);
    void startRecording() const;
    void stop() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t read(const std::vector< int16_t>&, int32_t, int32_t) const;
    int32_t read(const ::java::nio::ByteBuffer&, int32_t) const;
    void setRecordPositionUpdateListener(const ::android::media::AudioRecord_OnRecordPositionUpdateListener&) const;
    void setRecordPositionUpdateListener(const ::android::media::AudioRecord_OnRecordPositionUpdateListener&, const ::android::os::Handler&) const;
    int32_t setNotificationMarkerPosition(int32_t) const;
    int32_t setPositionNotificationPeriod(int32_t) const;

};
}
}

#include "android.media.AudioRecord_OnRecordPositionUpdateListener.hpp"

