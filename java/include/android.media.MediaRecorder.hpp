#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace hardware { class Camera; } }
namespace android { namespace media { class CamcorderProfile; } }
namespace android { namespace media { class MediaRecorder_OnErrorListener; } }
namespace android { namespace media { class MediaRecorder_OnInfoListener; } }
namespace android { namespace view { class Surface; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class MediaRecorder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaRecorder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaRecorder(const ::android::media::MediaRecorder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaRecorder(::android::media::MediaRecorder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaRecorder& operator=(const ::android::media::MediaRecorder& x) {obj = x.obj; return *this;}
    ::android::media::MediaRecorder& operator=(::android::media::MediaRecorder&& x) {obj = std::move(x.obj); return *this;}
    
    MediaRecorder();
    void setCamera(const ::android::hardware::Camera&) const ;
    void setPreviewDisplay(const ::android::view::Surface&) const ;
    void setAudioSource(int32_t) const ;
    static int32_t getAudioSourceMax();
    void setVideoSource(int32_t) const ;
    void setProfile(const ::android::media::CamcorderProfile&) const ;
    void setCaptureRate(double) const ;
    void setOrientationHint(int32_t) const ;
    void setLocation(float, float) const ;
    void setOutputFormat(int32_t) const ;
    void setVideoSize(int32_t, int32_t) const ;
    void setVideoFrameRate(int32_t) const ;
    void setMaxDuration(int32_t) const ;
    void setMaxFileSize(int64_t) const ;
    void setAudioEncoder(int32_t) const ;
    void setVideoEncoder(int32_t) const ;
    void setAudioSamplingRate(int32_t) const ;
    void setAudioChannels(int32_t) const ;
    void setAudioEncodingBitRate(int32_t) const ;
    void setVideoEncodingBitRate(int32_t) const ;
    void setAuxiliaryOutputFile(const ::java::io::FileDescriptor&) const ;
    void setAuxiliaryOutputFile(const ::java::lang::String&) const ;
    void setOutputFile(const ::java::io::FileDescriptor&) const ;
    void setOutputFile(const ::java::lang::String&) const ;
    void prepare() const ;
    void start() const ;
    void stop() const ;
    void reset() const ;
    int32_t getMaxAmplitude() const ;
    void setOnErrorListener(const ::android::media::MediaRecorder_OnErrorListener&) const ;
    void setOnInfoListener(const ::android::media::MediaRecorder_OnInfoListener&) const ;
    void release() const ;

};
}
}

#include "android.media.MediaRecorder_AudioEncoder.hpp"
#include "android.media.MediaRecorder_AudioSource.hpp"
#include "android.media.MediaRecorder_OnErrorListener.hpp"
#include "android.media.MediaRecorder_OnInfoListener.hpp"
#include "android.media.MediaRecorder_OutputFormat.hpp"
#include "android.media.MediaRecorder_VideoEncoder.hpp"
#include "android.media.MediaRecorder_VideoSource.hpp"

