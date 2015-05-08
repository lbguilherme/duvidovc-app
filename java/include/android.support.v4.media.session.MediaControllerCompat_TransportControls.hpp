#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_CustomAction; } } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_TransportControls : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_TransportControls(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_TransportControls(const ::android::support::v4::media::session::MediaControllerCompat_TransportControls& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaControllerCompat_TransportControls(::android::support::v4::media::session::MediaControllerCompat_TransportControls&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls& operator=(const ::android::support::v4::media::session::MediaControllerCompat_TransportControls& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_TransportControls& operator=(::android::support::v4::media::session::MediaControllerCompat_TransportControls&& x) {obj = std::move(x.obj); return *this;}
    
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


