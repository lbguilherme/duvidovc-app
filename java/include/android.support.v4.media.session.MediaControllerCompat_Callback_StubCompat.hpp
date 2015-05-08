#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.session.IMediaControllerCallback_Stub.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class ParcelableVolumeInfo; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_Callback_StubCompat : public virtual ::java::lang::Object,
                                                  public virtual ::android::support::v4::media::session::IMediaControllerCallback_Stub {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_Callback_StubCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Binder(_obj), ::android::os::IBinder(_obj), ::android::os::IInterface(_obj), ::android::support::v4::media::session::IMediaControllerCallback(_obj), ::android::support::v4::media::session::IMediaControllerCallback_Stub(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_Callback_StubCompat(const ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback_Stub((jobject)0) {obj = x.obj;}
    MediaControllerCompat_Callback_StubCompat(::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat&& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback_Stub((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat& operator=(const ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat& operator=(::android::support::v4::media::session::MediaControllerCompat_Callback_StubCompat&& x) {obj = std::move(x.obj); return *this;}
    
    void onEvent(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void onSessionDestroyed() const ;
    void onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat&) const ;
    void onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat&) const ;
    void onQueueChanged(const ::java::util::List&) const ;
    void onQueueTitleChanged(const ::java::lang::CharSequence&) const ;
    void onExtrasChanged(const ::android::os::Bundle&) const ;
    void onVolumeInfoChanged(const ::android::support::v4::media::session::ParcelableVolumeInfo&) const ;

};
}
}
}
}
}


