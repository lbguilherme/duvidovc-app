#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat_Builder; } } } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class MediaMetadataCompat_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaMetadataCompat_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaMetadataCompat_Builder(const ::android::support::v4::media::MediaMetadataCompat_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaMetadataCompat_Builder(::android::support::v4::media::MediaMetadataCompat_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::MediaMetadataCompat_Builder& operator=(const ::android::support::v4::media::MediaMetadataCompat_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::MediaMetadataCompat_Builder& operator=(::android::support::v4::media::MediaMetadataCompat_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    MediaMetadataCompat_Builder();
    MediaMetadataCompat_Builder(const ::android::support::v4::media::MediaMetadataCompat&);
    ::android::support::v4::media::MediaMetadataCompat_Builder putText(const ::java::lang::String&, const ::java::lang::CharSequence&) const;
    ::android::support::v4::media::MediaMetadataCompat_Builder putString(const ::java::lang::String&, const ::java::lang::String&) const;
    ::android::support::v4::media::MediaMetadataCompat_Builder putLong(const ::java::lang::String&, int64_t) const;
    ::android::support::v4::media::MediaMetadataCompat_Builder putRating(const ::java::lang::String&, const ::android::support::v4::media::RatingCompat&) const;
    ::android::support::v4::media::MediaMetadataCompat_Builder putBitmap(const ::java::lang::String&, const ::android::graphics::Bitmap&) const;
    ::android::support::v4::media::MediaMetadataCompat build() const;

};
}
}
}
}


