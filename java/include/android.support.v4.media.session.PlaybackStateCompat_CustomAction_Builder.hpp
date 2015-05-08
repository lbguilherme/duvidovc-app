#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_CustomAction; } } } } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class PlaybackStateCompat_CustomAction_Builder; } } } } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class PlaybackStateCompat_CustomAction_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PlaybackStateCompat_CustomAction_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PlaybackStateCompat_CustomAction_Builder(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PlaybackStateCompat_CustomAction_Builder(::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder& operator=(const ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder& operator=(::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    PlaybackStateCompat_CustomAction_Builder(const ::java::lang::String&, const ::java::lang::CharSequence&, int32_t);
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction_Builder setExtras(const ::android::os::Bundle&) const ;
    ::android::support::v4::media::session::PlaybackStateCompat_CustomAction build() const ;

};
}
}
}
}
}


