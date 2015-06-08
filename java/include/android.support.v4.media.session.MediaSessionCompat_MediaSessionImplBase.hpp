#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImpl.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class VolumeProviderCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_Callback; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_Token; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_MediaSessionImplBase : public virtual ::java::lang::Object,
                                                public virtual ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_MediaSessionImplBase(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_MediaSessionImplBase(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl((jobject)0) {obj = x.obj;}
    MediaSessionCompat_MediaSessionImplBase(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImpl((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase& operator=(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase& operator=(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat_MediaSessionImplBase(const ::android::content::Context&, const ::java::lang::String&, const ::android::content::ComponentName&, const ::android::app::PendingIntent&);
    void setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback&, const ::android::os::Handler&) const;
    void setFlags(int32_t) const;
    void setPlaybackToLocal(int32_t) const;
    void setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat&) const;
    void setActive(bool) const;
    bool isActive() const;
    void sendSessionEvent(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void release() const;
    ::android::support::v4::media::session::MediaSessionCompat_Token getSessionToken() const;
    void setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat&) const;
    void setMetadata(const ::android::support::v4::media::MediaMetadataCompat&) const;
    void setSessionActivity(const ::android::app::PendingIntent&) const;
    void setMediaButtonReceiver(const ::android::app::PendingIntent&) const;
    void setQueue(const ::java::util::List&) const;
    void setQueueTitle(const ::java::lang::CharSequence&) const;
    ::java::lang::Object getMediaSession() const;
    ::java::lang::Object getRemoteControlClient() const;
    void setRatingType(int32_t) const;
    void setExtras(const ::android::os::Bundle&) const;

};
}
}
}
}
}

#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_Command.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_MediaSessionStub.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_MessageHandler.hpp"

