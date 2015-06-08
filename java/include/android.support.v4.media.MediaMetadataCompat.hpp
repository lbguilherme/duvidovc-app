#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaDescriptionCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class MediaMetadataCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { class RatingCompat; } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Set; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class MediaMetadataCompat : public virtual ::java::lang::Object,
                            public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaMetadataCompat(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaMetadataCompat(const ::android::support::v4::media::MediaMetadataCompat& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    MediaMetadataCompat(::android::support::v4::media::MediaMetadataCompat&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::MediaMetadataCompat& operator=(const ::android::support::v4::media::MediaMetadataCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::MediaMetadataCompat& operator=(::android::support::v4::media::MediaMetadataCompat&& x) {obj = std::move(x.obj); return *this;}
    
    bool containsKey(const ::java::lang::String&) const;
    ::java::lang::CharSequence getText(const ::java::lang::String&) const;
    ::java::lang::String getString(const ::java::lang::String&) const;
    int64_t getLong(const ::java::lang::String&) const;
    ::android::support::v4::media::RatingCompat getRating(const ::java::lang::String&) const;
    ::android::graphics::Bitmap getBitmap(const ::java::lang::String&) const;
    ::android::support::v4::media::MediaDescriptionCompat getDescription() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t size() const;
    ::java::util::Set keySet() const;
    ::android::os::Bundle getBundle() const;
    static ::android::support::v4::media::MediaMetadataCompat fromMediaMetadata(const ::java::lang::Object&);
    ::java::lang::Object getMediaMetadata() const;

};
}
}
}
}

#include "android.support.v4.media.MediaMetadataCompat_Builder.hpp"

