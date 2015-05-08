#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IInterface.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class IMediaControllerCallback; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_ResultReceiverWrapper; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class ParcelableVolumeInfo; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace android { namespace view { class KeyEvent; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class IMediaSession : public virtual ::java::lang::Object,
                      public virtual ::android::os::IInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMediaSession(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMediaSession(const ::android::support::v4::media::session::IMediaSession& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj;}
    IMediaSession(::android::support::v4::media::session::IMediaSession&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::IMediaSession& operator=(const ::android::support::v4::media::session::IMediaSession& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::IMediaSession& operator=(::android::support::v4::media::session::IMediaSession&& x) {obj = std::move(x.obj); return *this;}
    
    void sendCommand(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::support::v4::media::session::MediaSessionCompat_ResultReceiverWrapper&) const ;
    bool sendMediaButton(const ::android::view::KeyEvent&) const ;
    void registerCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback&) const ;
    void unregisterCallbackListener(const ::android::support::v4::media::session::IMediaControllerCallback&) const ;
    bool isTransportControlEnabled() const ;
    ::java::lang::String getPackageName() const ;
    ::java::lang::String getTag() const ;
    ::android::app::PendingIntent getLaunchPendingIntent() const ;
    int64_t getFlags() const ;
    ::android::support::v4::media::session::ParcelableVolumeInfo getVolumeAttributes() const ;
    void adjustVolume(int32_t, int32_t, const ::java::lang::String&) const ;
    void setVolumeTo(int32_t, int32_t, const ::java::lang::String&) const ;
    void play() const ;
    void playFromMediaId(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void playFromSearch(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void skipToQueueItem(int64_t) const ;
    void pause() const ;
    void stop() const ;
    void next() const ;
    void previous() const ;
    void fastForward() const ;
    void rewind() const ;
    void seekTo(int64_t) const ;
    void rate(const ::android::support::v4::media::RatingCompat&) const ;
    void sendCustomAction(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::android::support::v4::media::MediaMetadataCompat getMetadata() const ;
    ::android::support::v4::media::session::PlaybackStateCompat getPlaybackState() const ;
    ::java::util::List getQueue() const ;
    ::java::lang::CharSequence getQueueTitle() const ;
    ::android::os::Bundle getExtras() const ;
    int32_t getRatingType() const ;

};
}
}
}
}
}

#include "android.support.v4.media.session.IMediaSession_Stub.hpp"
#include "android.support.v4.media.session.IMediaSession_Stub_Proxy.hpp"

