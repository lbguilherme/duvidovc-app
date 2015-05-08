#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class PlaybackStateCompat_CustomAction : public virtual ::java::lang::Object,
                                         public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlaybackStateCompat_CustomAction(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlaybackStateCompat_CustomAction(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    PlaybackStateCompat_CustomAction(::android::support::v4::media::session::PlaybackStateCompat_CustomAction&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& operator=(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction& operator=(::android::support::v4::media::session::PlaybackStateCompat_CustomAction&& x) {obj = std::move(x.obj); return *this;}
    
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    int32_t describeContents() const ;
    ::java::lang::String getAction() const ;
    ::java::lang::CharSequence getName() const ;
    int32_t getIcon() const ;
    ::android::os::Bundle getExtras() const ;
    ::java::lang::String toString() const ;

};
}
}
}
}
}

#include "android.support.v4.media.session.PlaybackStateCompat_CustomAction_Builder.hpp"

