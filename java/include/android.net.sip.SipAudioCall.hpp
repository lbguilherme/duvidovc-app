#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { namespace sip { class SipAudioCall_Listener; } } }
namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace android { namespace net { namespace sip { class SipSession; } } }
namespace android { namespace os { class Message; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipAudioCall : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipAudioCall(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipAudioCall(const ::android::net::sip::SipAudioCall& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipAudioCall(::android::net::sip::SipAudioCall&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipAudioCall& operator=(const ::android::net::sip::SipAudioCall& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipAudioCall& operator=(::android::net::sip::SipAudioCall&& x) {obj = std::move(x.obj); return *this;}
    
    SipAudioCall(const ::android::content::Context&, const ::android::net::sip::SipProfile&);
    void setListener(const ::android::net::sip::SipAudioCall_Listener&) const ;
    void setListener(const ::android::net::sip::SipAudioCall_Listener&, bool) const ;
    bool isInCall() const ;
    bool isOnHold() const ;
    void close() const ;
    ::android::net::sip::SipProfile getLocalProfile() const ;
    ::android::net::sip::SipProfile getPeerProfile() const ;
    int32_t getState() const ;
    void attachCall(const ::android::net::sip::SipSession&, const ::java::lang::String&) const ;
    void makeCall(const ::android::net::sip::SipProfile&, const ::android::net::sip::SipSession&, int32_t) const ;
    void endCall() const ;
    void holdCall(int32_t) const ;
    void answerCall(int32_t) const ;
    void continueCall(int32_t) const ;
    void toggleMute() const ;
    bool isMuted() const ;
    void setSpeakerMode(bool) const ;
    void sendDtmf(int32_t) const ;
    void sendDtmf(int32_t, const ::android::os::Message&) const ;
    void startAudio() const ;

};
}
}
}

#include "android.net.sip.SipAudioCall_Listener.hpp"

