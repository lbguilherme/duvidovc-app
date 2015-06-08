#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace media { class RemoteControlClient_MetadataEditor; } }
namespace android { namespace os { class Looper; } }

namespace android {
namespace media {
class RemoteControlClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RemoteControlClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RemoteControlClient(const ::android::media::RemoteControlClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RemoteControlClient(::android::media::RemoteControlClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::RemoteControlClient& operator=(const ::android::media::RemoteControlClient& x) {obj = x.obj; return *this;}
    ::android::media::RemoteControlClient& operator=(::android::media::RemoteControlClient&& x) {obj = std::move(x.obj); return *this;}
    
    RemoteControlClient(const ::android::app::PendingIntent&);
    RemoteControlClient(const ::android::app::PendingIntent&, const ::android::os::Looper&);
    ::android::media::RemoteControlClient_MetadataEditor editMetadata(bool) const;
    void setPlaybackState(int32_t) const;
    void setTransportControlFlags(int32_t) const;

};
}
}

#include "android.media.RemoteControlClient_MetadataEditor.hpp"

