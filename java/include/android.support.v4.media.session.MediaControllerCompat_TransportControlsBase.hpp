#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.session.MediaControllerCompat_TransportControls.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class IMediaSession; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_CustomAction; } } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_TransportControlsBase : public virtual ::java::lang::Object,
                                                    public virtual ::android::support::v4::media::session::MediaControllerCompat_TransportControls {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_TransportControlsBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::media::session::MediaControllerCompat_TransportControls(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_TransportControlsBase(const ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {obj = x.obj;}
    MediaControllerCompat_TransportControlsBase(::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase& operator=(const ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase& operator=(::android::support::v4::media::session::MediaControllerCompat_TransportControlsBase&& x) {obj = std::move(x.obj); return *this;}
    
    MediaControllerCompat_TransportControlsBase(const ::android::support::v4::media::session::IMediaSession&);
    void play() const ;
    void playFromMediaId(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void playFromSearch(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void skipToQueueItem(int64_t) const ;
    void pause() const ;
    void stop() const ;
    void seekTo(int64_t) const ;
    void fastForward() const ;
    void skipToNext() const ;
    void rewind() const ;
    void skipToPrevious() const ;
    void setRating(const ::android::support::v4::media::RatingCompat&) const ;
    void sendCustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction&, const ::android::os::Bundle&) const ;
    void sendCustomAction(const ::java::lang::String&, const ::android::os::Bundle&) const ;

};
}
}
}
}
}


