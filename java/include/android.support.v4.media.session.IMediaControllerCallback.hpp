#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IInterface.hpp"

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
class IMediaControllerCallback : public virtual ::java::lang::Object,
                                 public virtual ::android::os::IInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMediaControllerCallback(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMediaControllerCallback(const ::android::support::v4::media::session::IMediaControllerCallback& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj;}
    IMediaControllerCallback(::android::support::v4::media::session::IMediaControllerCallback&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::IMediaControllerCallback& operator=(const ::android::support::v4::media::session::IMediaControllerCallback& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::IMediaControllerCallback& operator=(::android::support::v4::media::session::IMediaControllerCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onEvent(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void onSessionDestroyed() const;
    void onPlaybackStateChanged(const ::android::support::v4::media::session::PlaybackStateCompat&) const;
    void onMetadataChanged(const ::android::support::v4::media::MediaMetadataCompat&) const;
    void onQueueChanged(const ::java::util::List&) const;
    void onQueueTitleChanged(const ::java::lang::CharSequence&) const;
    void onExtrasChanged(const ::android::os::Bundle&) const;
    void onVolumeInfoChanged(const ::android::support::v4::media::session::ParcelableVolumeInfo&) const;

};
}
}
}
}
}

#include "android.support.v4.media.session.IMediaControllerCallback_Stub.hpp"
#include "android.support.v4.media.session.IMediaControllerCallback_Stub_Proxy.hpp"

