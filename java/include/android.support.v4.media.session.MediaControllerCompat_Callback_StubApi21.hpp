#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_Callback_StubApi21 : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_Callback_StubApi21(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_Callback_StubApi21(const ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaControllerCompat_Callback_StubApi21(::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21& operator=(const ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21& operator=(::android::support::v4::media::session::MediaControllerCompat_Callback_StubApi21&& x) {obj = std::move(x.obj); return *this;}
    
    void onSessionDestroyed() const ;
    void onSessionEvent(const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void onPlaybackStateChanged(const ::java::lang::Object&) const ;
    void onMetadataChanged(const ::java::lang::Object&) const ;

};
}
}
}
}
}


