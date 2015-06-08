#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class PlaybackStateCompat : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlaybackStateCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlaybackStateCompat(const ::android::support::v4::media::session::PlaybackStateCompat& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PlaybackStateCompat(::android::support::v4::media::session::PlaybackStateCompat&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::PlaybackStateCompat& operator=(const ::android::support::v4::media::session::PlaybackStateCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::PlaybackStateCompat& operator=(::android::support::v4::media::session::PlaybackStateCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String toString() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t getState() const;
    int64_t getPosition() const;
    int64_t getBufferedPosition() const;
    float getPlaybackSpeed() const;
    int64_t getActions() const;
    ::java::lang::CharSequence getErrorMessage() const;
    int64_t getLastPositionUpdateTime() const;
    static ::android::support::v4::media::session::PlaybackStateCompat fromPlaybackState(const ::java::lang::Object&);
    ::java::lang::Object getPlaybackState() const;

};
}
}
}
}
}

#include "android.support.v4.media.session.PlaybackStateCompat_Builder.hpp"
#include "android.support.v4.media.session.PlaybackStateCompat_CustomAction.hpp"
#include "android.support.v4.media.session.PlaybackStateCompat_CustomAction_Builder.hpp"

