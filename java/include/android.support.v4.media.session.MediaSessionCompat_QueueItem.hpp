#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { class MediaDescriptionCompat; } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_QueueItem; } } } } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_QueueItem : public virtual ::java::lang::Object,
                                     public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_QueueItem(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_QueueItem(const ::android::support::v4::media::session::MediaSessionCompat_QueueItem& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    MediaSessionCompat_QueueItem(::android::support::v4::media::session::MediaSessionCompat_QueueItem&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_QueueItem& operator=(const ::android::support::v4::media::session::MediaSessionCompat_QueueItem& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_QueueItem& operator=(::android::support::v4::media::session::MediaSessionCompat_QueueItem&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat_QueueItem(const ::android::support::v4::media::MediaDescriptionCompat&, int64_t);
    ::android::support::v4::media::MediaDescriptionCompat getDescription() const;
    int64_t getQueueId() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    int32_t describeContents() const;
    ::java::lang::Object getQueueItem() const;
    static ::android::support::v4::media::session::MediaSessionCompat_QueueItem obtain(const ::java::lang::Object&);
    ::java::lang::String toString() const;

};
}
}
}
}
}


