#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_Builder; } } } } }
namespace java { namespace lang { class CharSequence; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class PlaybackStateCompat_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlaybackStateCompat_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlaybackStateCompat_Builder(const ::android::support::v4::media::session::PlaybackStateCompat_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PlaybackStateCompat_Builder(::android::support::v4::media::session::PlaybackStateCompat_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::PlaybackStateCompat_Builder& operator=(const ::android::support::v4::media::session::PlaybackStateCompat_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::PlaybackStateCompat_Builder& operator=(::android::support::v4::media::session::PlaybackStateCompat_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    PlaybackStateCompat_Builder();
    PlaybackStateCompat_Builder(const ::android::support::v4::media::session::PlaybackStateCompat&);
    ::android::support::v4::media::session::PlaybackStateCompat_Builder setState(int32_t, int64_t, float) const;
    ::android::support::v4::media::session::PlaybackStateCompat_Builder setState(int32_t, int64_t, float, int64_t) const;
    ::android::support::v4::media::session::PlaybackStateCompat_Builder setBufferedPosition(int64_t) const;
    ::android::support::v4::media::session::PlaybackStateCompat_Builder setActions(int64_t) const;
    ::android::support::v4::media::session::PlaybackStateCompat_Builder setErrorMessage(const ::java::lang::CharSequence&) const;
    ::android::support::v4::media::session::PlaybackStateCompat build() const;

};
}
}
}
}
}


