#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace media { class JetPlayer; } }
namespace android { namespace media { class JetPlayer_OnJetEventListener; } }
namespace android { namespace os { class Handler; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class JetPlayer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JetPlayer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JetPlayer(const ::android::media::JetPlayer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    JetPlayer(::android::media::JetPlayer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::JetPlayer& operator=(const ::android::media::JetPlayer& x) {obj = x.obj; return *this;}
    ::android::media::JetPlayer& operator=(::android::media::JetPlayer&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::media::JetPlayer getJetPlayer();
    ::java::lang::Object clone() const ;
    void release() const ;
    static int32_t getMaxTracks();
    bool loadJetFile(const ::java::lang::String&) const ;
    bool loadJetFile(const ::android::content::res::AssetFileDescriptor&) const ;
    bool closeJetFile() const ;
    bool play() const ;
    bool pause() const ;
    bool queueJetSegment(int32_t, int32_t, int32_t, int32_t, int32_t, int8_t) const ;
    bool queueJetSegmentMuteArray(int32_t, int32_t, int32_t, int32_t, const std::vector< bool>&, int8_t) const ;
    bool setMuteFlags(int32_t, bool) const ;
    bool setMuteArray(const std::vector< bool>&, bool) const ;
    bool setMuteFlag(int32_t, bool, bool) const ;
    bool triggerClip(int32_t) const ;
    bool clearQueue() const ;
    void setEventListener(const ::android::media::JetPlayer_OnJetEventListener&) const ;
    void setEventListener(const ::android::media::JetPlayer_OnJetEventListener&, const ::android::os::Handler&) const ;

};
}
}

#include "android.media.JetPlayer_OnJetEventListener.hpp"

