#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IBinder_DeathRecipient.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat_PlaybackInfo; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_Callback : public virtual ::java::lang::Object,
                                       public virtual ::android::os::IBinder_DeathRecipient {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_Callback(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IBinder_DeathRecipient(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_Callback(const ::android::support::v4::media::session::MediaControllerCompat_Callback& x) : ::java::lang::Object((jobject)0), ::android::os::IBinder_DeathRecipient((jobject)0) {obj = x.obj;}
    MediaControllerCompat_Callback(::android::support::v4::media::session::MediaControllerCompat_Callback&& x) : ::java::lang::Object((jobject)0), ::android::os::IBinder_DeathRecipient((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_Callback& operator=(const ::android::support::v4::media::session::MediaControllerCompat_Callback& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_Callback& operator=(::android::support::v4::media::session::MediaControllerCompat_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    MediaControllerCompat_Callback();
    void onSessionDestroyed() const ;
    void onSessionEvent(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat&) const ;
    void onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat&) const ;
    void onQueueChanged(const ::java::util::List&) const ;
    void onQueueTitleChanged(const ::java::lang::CharSequence&) const ;
    void onExtrasChanged(const ::android::os::Bundle&) const ;
    void onAudioInfoChanged(const ::android::support::v4::media::session::MediaControllerCompat_PlaybackInfo&) const ;
    void binderDied() const ;

};
}
}
}
}
}

#include "android.support.v4.media.session.MediaControllerCompat_Callback_MessageHandler.hpp"
#include "android.support.v4.media.session.MediaControllerCompat_Callback_StubApi21.hpp"
#include "android.support.v4.media.session.MediaControllerCompat_Callback_StubCompat.hpp"

