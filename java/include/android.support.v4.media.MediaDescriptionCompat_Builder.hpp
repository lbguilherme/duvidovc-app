#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaDescriptionCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class MediaDescriptionCompat_Builder; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class MediaDescriptionCompat_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaDescriptionCompat_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaDescriptionCompat_Builder(const ::android::support::v4::media::MediaDescriptionCompat_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaDescriptionCompat_Builder(::android::support::v4::media::MediaDescriptionCompat_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::MediaDescriptionCompat_Builder& operator=(const ::android::support::v4::media::MediaDescriptionCompat_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::MediaDescriptionCompat_Builder& operator=(::android::support::v4::media::MediaDescriptionCompat_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    MediaDescriptionCompat_Builder();
    ::android::support::v4::media::MediaDescriptionCompat_Builder setMediaId(const ::java::lang::String&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setTitle(const ::java::lang::CharSequence&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setSubtitle(const ::java::lang::CharSequence&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setDescription(const ::java::lang::CharSequence&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setIconBitmap(const ::android::graphics::Bitmap&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setIconUri(const ::android::net::Uri&) const;
    ::android::support::v4::media::MediaDescriptionCompat_Builder setExtras(const ::android::os::Bundle&) const;
    ::android::support::v4::media::MediaDescriptionCompat build() const;

};
}
}
}
}


