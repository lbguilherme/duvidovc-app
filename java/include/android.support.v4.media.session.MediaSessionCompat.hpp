#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Handler; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class VolumeProviderCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_Callback; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_OnActiveChangeListener; } } } } }
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
class MediaSessionCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat(const ::android::support::v4::media::session::MediaSessionCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaSessionCompat(::android::support::v4::media::session::MediaSessionCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat& operator=(const ::android::support::v4::media::session::MediaSessionCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat& operator=(::android::support::v4::media::session::MediaSessionCompat&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat(const ::android::content::Context&, const ::java::lang::String&, const ::android::content::ComponentName&, const ::android::app::PendingIntent&);
    void setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback&) const;
    void setCallback(const ::android::support::v4::media::session::MediaSessionCompat_Callback&, const ::android::os::Handler&) const;
    void setSessionActivity(const ::android::app::PendingIntent&) const;
    void setMediaButtonReceiver(const ::android::app::PendingIntent&) const;
    void setFlags(int32_t) const;
    void setPlaybackToLocal(int32_t) const;
    void setPlaybackToRemote(const ::android::support::v4::media::VolumeProviderCompat&) const;
    void setActive(bool) const;
    bool isActive() const;
    void sendSessionEvent(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void release() const;
    ::android::support::v4::media::session::MediaSessionCompat_Token getSessionToken() const;
    ::android::support::v4::media::session::MediaControllerCompat getController() const;
    void setPlaybackState(const ::android::support::v4::media::session::PlaybackStateCompat&) const;
    void setMetadata(const ::android::support::v4::media::MediaMetadataCompat&) const;
    void setQueue(const ::java::util::List&) const;
    void setQueueTitle(const ::java::lang::CharSequence&) const;
    void setRatingType(int32_t) const;
    void setExtras(const ::android::os::Bundle&) const;
    ::java::lang::Object getMediaSession() const;
    ::java::lang::Object getRemoteControlClient() const;
    void addOnActiveChangeListener(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener&) const;
    void removeOnActiveChangeListener(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener&) const;
    static ::android::support::v4::media::session::MediaSessionCompat obtain(const ::android::content::Context&, const ::java::lang::Object&);

};
}
}
}
}
}

#include "android.support.v4.media.session.MediaSessionCompat_Callback.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImpl.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplApi21.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_OnActiveChangeListener.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_QueueItem.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_ResultReceiverWrapper.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_Token.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_Callback_StubApi21.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_Command.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_MediaSessionStub.hpp"
#include "android.support.v4.media.session.MediaSessionCompat_MediaSessionImplBase_MessageHandler.hpp"

