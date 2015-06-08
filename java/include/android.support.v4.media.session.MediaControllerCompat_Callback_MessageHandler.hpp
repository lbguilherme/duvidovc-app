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
namespace android { namespace support { namespace v4 { namespace media { namespace session { class MediaControllerCompat_Callback; } } } } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaControllerCompat_Callback_MessageHandler : public virtual ::java::lang::Object,
                                                      public virtual ::android::os::Handler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaControllerCompat_Callback_MessageHandler(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Handler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaControllerCompat_Callback_MessageHandler(const ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj;}
    MediaControllerCompat_Callback_MessageHandler(::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler&& x) : ::java::lang::Object((jobject)0), ::android::os::Handler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler& operator=(const ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler& operator=(::android::support::v4::media::session::MediaControllerCompat_Callback_MessageHandler&& x) {obj = std::move(x.obj); return *this;}
    
    MediaControllerCompat_Callback_MessageHandler(const ::android::support::v4::media::session::MediaControllerCompat_Callback&, const ::android::os::Looper&);
    void handleMessage(const ::android::os::Message&) const;
    void post(int32_t, const ::java::lang::Object&, const ::android::os::Bundle&) const;

};
}
}
}
}
}


