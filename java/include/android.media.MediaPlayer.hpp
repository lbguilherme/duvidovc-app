#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace media { class MediaPlayer; } }
namespace android { namespace media { class MediaPlayer_OnBufferingUpdateListener; } }
namespace android { namespace media { class MediaPlayer_OnCompletionListener; } }
namespace android { namespace media { class MediaPlayer_OnErrorListener; } }
namespace android { namespace media { class MediaPlayer_OnInfoListener; } }
namespace android { namespace media { class MediaPlayer_OnPreparedListener; } }
namespace android { namespace media { class MediaPlayer_OnSeekCompleteListener; } }
namespace android { namespace media { class MediaPlayer_OnVideoSizeChangedListener; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace view { class Surface; } }
namespace android { namespace view { class SurfaceHolder; } }
namespace java { namespace io { class FileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace media {
class MediaPlayer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaPlayer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaPlayer(const ::android::media::MediaPlayer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaPlayer(::android::media::MediaPlayer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaPlayer& operator=(const ::android::media::MediaPlayer& x) {obj = x.obj; return *this;}
    ::android::media::MediaPlayer& operator=(::android::media::MediaPlayer&& x) {obj = std::move(x.obj); return *this;}
    
    MediaPlayer();
    void setDisplay(const ::android::view::SurfaceHolder&) const;
    void setSurface(const ::android::view::Surface&) const;
    static ::android::media::MediaPlayer create(const ::android::content::Context&, const ::android::net::Uri&);
    static ::android::media::MediaPlayer create(const ::android::content::Context&, const ::android::net::Uri&, const ::android::view::SurfaceHolder&);
    static ::android::media::MediaPlayer create(const ::android::content::Context&, int32_t);
    void setDataSource(const ::android::content::Context&, const ::android::net::Uri&) const;
    void setDataSource(const ::android::content::Context&, const ::android::net::Uri&, const ::java::util::Map&) const;
    void setDataSource(const ::java::lang::String&) const;
    void setDataSource(const ::java::io::FileDescriptor&) const;
    void setDataSource(const ::java::io::FileDescriptor&, int64_t, int64_t) const;
    void prepare() const;
    void prepareAsync() const;
    void start() const;
    void stop() const;
    void pause() const;
    void setWakeMode(const ::android::content::Context&, int32_t) const;
    void setScreenOnWhilePlaying(bool) const;
    int32_t getVideoWidth() const;
    int32_t getVideoHeight() const;
    bool isPlaying() const;
    void seekTo(int32_t) const;
    int32_t getCurrentPosition() const;
    int32_t getDuration() const;
    void release() const;
    void reset() const;
    void setAudioStreamType(int32_t) const;
    void setLooping(bool) const;
    bool isLooping() const;
    void setVolume(float, float) const;
    void setAudioSessionId(int32_t) const;
    int32_t getAudioSessionId() const;
    void attachAuxEffect(int32_t) const;
    void setAuxEffectSendLevel(float) const;
    void setOnPreparedListener(const ::android::media::MediaPlayer_OnPreparedListener&) const;
    void setOnCompletionListener(const ::android::media::MediaPlayer_OnCompletionListener&) const;
    void setOnBufferingUpdateListener(const ::android::media::MediaPlayer_OnBufferingUpdateListener&) const;
    void setOnSeekCompleteListener(const ::android::media::MediaPlayer_OnSeekCompleteListener&) const;
    void setOnVideoSizeChangedListener(const ::android::media::MediaPlayer_OnVideoSizeChangedListener&) const;
    void setOnErrorListener(const ::android::media::MediaPlayer_OnErrorListener&) const;
    void setOnInfoListener(const ::android::media::MediaPlayer_OnInfoListener&) const;

};
}
}

#include "android.media.MediaPlayer_OnBufferingUpdateListener.hpp"
#include "android.media.MediaPlayer_OnCompletionListener.hpp"
#include "android.media.MediaPlayer_OnErrorListener.hpp"
#include "android.media.MediaPlayer_OnInfoListener.hpp"
#include "android.media.MediaPlayer_OnPreparedListener.hpp"
#include "android.media.MediaPlayer_OnSeekCompleteListener.hpp"
#include "android.media.MediaPlayer_OnVideoSizeChangedListener.hpp"

