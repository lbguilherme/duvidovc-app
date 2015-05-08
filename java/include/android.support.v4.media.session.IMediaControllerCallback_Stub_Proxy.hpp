#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.session.IMediaControllerCallback.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class IBinder; } }
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
class IMediaControllerCallback_Stub_Proxy : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::media::session::IMediaControllerCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMediaControllerCallback_Stub_Proxy(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj), ::android::support::v4::media::session::IMediaControllerCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMediaControllerCallback_Stub_Proxy(const ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0) {obj = x.obj;}
    IMediaControllerCallback_Stub_Proxy(::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy& operator=(const ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy& operator=(::android::support::v4::media::session::IMediaControllerCallback_Stub_Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::IBinder asBinder() const ;
    ::java::lang::String getInterfaceDescriptor() const ;
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


