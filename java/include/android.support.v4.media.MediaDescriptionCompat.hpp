#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaDescriptionCompat; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class MediaDescriptionCompat : public virtual ::java::lang::Object,
                               public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaDescriptionCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaDescriptionCompat(const ::android::support::v4::media::MediaDescriptionCompat& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    MediaDescriptionCompat(::android::support::v4::media::MediaDescriptionCompat&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::MediaDescriptionCompat& operator=(const ::android::support::v4::media::MediaDescriptionCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::MediaDescriptionCompat& operator=(::android::support::v4::media::MediaDescriptionCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getMediaId() const;
    ::java::lang::CharSequence getTitle() const;
    ::java::lang::CharSequence getSubtitle() const;
    ::java::lang::CharSequence getDescription() const;
    ::android::graphics::Bitmap getIconBitmap() const;
    ::android::net::Uri getIconUri() const;
    ::android::os::Bundle getExtras() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    ::java::lang::String toString() const;
    ::java::lang::Object getMediaDescription() const;
    static ::android::support::v4::media::MediaDescriptionCompat fromMediaDescription(const ::java::lang::Object&);

};
}
}
}
}

#include "android.support.v4.media.MediaDescriptionCompat_Builder.hpp"

