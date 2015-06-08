#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Handler.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class Looper; } }
namespace android { namespace os { class Message; } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaSessionCompat_MediaSessionImplBase; } } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_MediaSessionImplBase_MessageHandler : public virtual ::java::lang::Object,
                                                               public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_MediaSessionImplBase_MessageHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_MediaSessionImplBase_MessageHandler(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    MediaSessionCompat_MediaSessionImplBase_MessageHandler(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler& operator=(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler& operator=(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_MessageHandler&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat_MediaSessionImplBase_MessageHandler(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase&, const ::android::os::Looper&);
    void post(int32_t, const ::java::lang::Object&, const ::android::os::Bundle&) const;
    void post(int32_t, const ::java::lang::Object&) const;
    void post(int32_t) const;
    void post(int32_t, const ::java::lang::Object&, int32_t) const;
    void handleMessage(const ::android::os::Message&) const;

};
}
}
}
}
}


