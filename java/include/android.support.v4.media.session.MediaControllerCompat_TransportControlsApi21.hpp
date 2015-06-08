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
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_CustomAction; } } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_TransportControlsApi21 : public virtual ::java::lang::Object,
                                                     public virtual ::android::support::v4::media::session::MediaControllerCompat_TransportControls {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_TransportControlsApi21(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::media::session::MediaControllerCompat_TransportControls(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_TransportControlsApi21(const ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {obj = x.obj;}
    MediaControllerCompat_TransportControlsApi21(::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaControllerCompat_TransportControls((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21& operator=(const ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21& operator=(::android::support::v4::media::session::MediaControllerCompat_TransportControlsApi21&& x) {obj = std::move(x.obj); return *this;}
    
    MediaControllerCompat_TransportControlsApi21(const ::java::lang::Object&);
    void play() const;
    void pause() const;
    void stop() const;
    void seekTo(int64_t) const;
    void fastForward() const;
    void rewind() const;
    void skipToNext() const;
    void skipToPrevious() const;
    void setRating(const ::android::support::v4::media::RatingCompat&) const;
    void playFromMediaId(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void playFromSearch(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void skipToQueueItem(int64_t) const;
    void sendCustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction&, const ::android::os::Bundle&) const;
    void sendCustomAction(const ::java::lang::String&, const ::android::os::Bundle&) const;

};
}
}
}
}
}


