#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.session.MediaControllerCompat_MediaControllerImpl.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace os { class ResultReceiver; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat_Callback; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat_PlaybackInfo; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat_TransportControls; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_Token; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace android { namespace view { class KeyEvent; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_MediaControllerImplBase : public virtual ::java::lang::Object,
                                                      public virtual ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_MediaControllerImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_MediaControllerImplBase(const ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl((jobject)0) {obj = x.obj;}
    MediaControllerCompat_MediaControllerImplBase(::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase& operator=(const ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase& operator=(::android::support::v4::media::session::MediaControllerCompat_MediaControllerImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    MediaControllerCompat_MediaControllerImplBase(const ::android::support::v4::media::session::MediaSessionCompat_Token&);
    void registerCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback&, const ::android::os::Handler&) const;
    void unregisterCallback(const ::android::support::v4::media::session::MediaControllerCompat_Callback&) const;
    bool dispatchMediaButtonEvent(const ::android::view::KeyEvent&) const;
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls getTransportControls() const;
    ::android::support::v4::media::session::PlaybackStateCompat getPlaybackState() const;
    ::android::support::v4::media::MediaMetadataCompat getMetadata() const;
    ::java::util::List getQueue() const;
    ::java::lang::CharSequence getQueueTitle() const;
    ::android::os::Bundle getExtras() const;
    int32_t getRatingType() const;
    int64_t getFlags() const;
    ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo getPlaybackInfo() const;
    ::android::app::PendingIntent getSessionActivity() const;
    void setVolumeTo(int32_t, int32_t) const;
    void adjustVolume(int32_t, int32_t) const;
    void sendCommand(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::os::ResultReceiver&) const;
    ::java::lang::String getPackageName() const;
    ::java::lang::Object getMediaController() const;

};
}
}
}
}
}


