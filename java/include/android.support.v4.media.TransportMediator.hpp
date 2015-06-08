#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.media.TransportController.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace support { namespace v4 { namespace media { class TransportPerformer; } } } }
namespace android { namespace support { namespace v4 { namespace media { class TransportStateListener; } } } }
namespace android { namespace view { class KeyEvent; } }
namespace android { namespace view { class View; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace support {
namespace v4 {
namespace media {
class TransportMediator : public virtual ::java::lang::Object,
                          public virtual ::android::support::v4::media::TransportController {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TransportMediator(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::media::TransportController(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TransportMediator(const ::android::support::v4::media::TransportMediator& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::TransportController((jobject)0) {obj = x.obj;}
    TransportMediator(::android::support::v4::media::TransportMediator&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::media::TransportController((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::TransportMediator& operator=(const ::android::support::v4::media::TransportMediator& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::TransportMediator& operator=(::android::support::v4::media::TransportMediator&& x) {obj = std::move(x.obj); return *this;}
    
    TransportMediator(const ::android::app::Activity&, const ::android::support::v4::media::TransportPerformer&);
    TransportMediator(const ::android::view::View&, const ::android::support::v4::media::TransportPerformer&);
    ::java::lang::Object getRemoteControlClient() const;
    bool dispatchKeyEvent(const ::android::view::KeyEvent&) const;
    void registerStateListener(const ::android::support::v4::media::TransportStateListener&) const;
    void unregisterStateListener(const ::android::support::v4::media::TransportStateListener&) const;
    void refreshState() const;
    void startPlaying() const;
    void pausePlaying() const;
    void stopPlaying() const;
    int64_t getDuration() const;
    int64_t getCurrentPosition() const;
    void seekTo(int64_t) const;
    bool isPlaying() const;
    int32_t getBufferPercentage() const;
    int32_t getTransportControlFlags() const;
    void destroy() const;

};
}
}
}
}


