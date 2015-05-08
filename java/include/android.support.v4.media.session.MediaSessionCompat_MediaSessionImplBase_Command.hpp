#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ResultReceiver; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_MediaSessionImplBase_Command : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_MediaSessionImplBase_Command(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_MediaSessionImplBase_Command(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaSessionCompat_MediaSessionImplBase_Command(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command& operator=(const ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command& operator=(::android::support::v4::media::session::MediaSessionCompat_MediaSessionImplBase_Command&& x) {obj = std::move(x.obj); return *this;}
    
    MediaSessionCompat_MediaSessionImplBase_Command(const ::java::lang::String&, const ::android::os::Bundle&, const ::android::os::ResultReceiver&);

};
}
}
}
}
}


