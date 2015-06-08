#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ResultReceiver; } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_Callback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_Callback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_Callback(const ::android::support::v4::media::session::MediaSessionCompat_Callback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaSessionCompat_Callback(::android::support::v4::media::session::MediaSessionCompat_Callback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_Callback& operator=(const ::android::support::v4::media::session::MediaSessionCompat_Callback& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_Callback& operator=(::android::support::v4::media::session::MediaSessionCompat_Callback&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat_Callback();
    void onCommand(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::os::ResultReceiver&) const;
    bool onMediaButtonEvent(const ::android::content::Intent&) const;
    void onPlay() const;
    void onPlayFromMediaId(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void onPlayFromSearch(const ::java::lang::String&, const ::android::os::Bundle&) const;
    void onSkipToQueueItem(int64_t) const;
    void onPause() const;
    void onSkipToNext() const;
    void onSkipToPrevious() const;
    void onFastForward() const;
    void onRewind() const;
    void onStop() const;
    void onSeekTo(int64_t) const;
    void onSetRating(const ::android::support::v4::media::RatingCompat&) const;
    void onCustomAction(const ::java::lang::String&, const ::android::os::Bundle&) const;

};
}
}
}
}
}

#include "android.support.v4.media.session.MediaSessionCompat_Callback_StubApi21.hpp"

