#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace net { namespace sip { class SipAudioCall; } } }
namespace android { namespace net { namespace sip { class SipAudioCall_Listener; } } }
namespace android { namespace net { namespace sip { class SipManager; } } }
namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace android { namespace net { namespace sip { class SipRegistrationListener; } } }
namespace android { namespace net { namespace sip { class SipSession; } } }
namespace android { namespace net { namespace sip { class SipSession_Listener; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipManager(const ::android::net::sip::SipManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipManager(::android::net::sip::SipManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipManager& operator=(const ::android::net::sip::SipManager& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipManager& operator=(::android::net::sip::SipManager&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::net::sip::SipManager newInstance(const ::android::content::Context&);
    static bool isApiSupported(const ::android::content::Context&);
    static bool isVoipSupported(const ::android::content::Context&);
    static bool isSipWifiOnly(const ::android::content::Context&);
    void open(const ::android::net::sip::SipProfile&) const ;
    void open(const ::android::net::sip::SipProfile&, const ::android::app::PendingIntent&, const ::android::net::sip::SipRegistrationListener&) const ;
    void setRegistrationListener(const ::java::lang::String&, const ::android::net::sip::SipRegistrationListener&) const ;
    void close(const ::java::lang::String&) const ;
    bool isOpened(const ::java::lang::String&) const ;
    bool isRegistered(const ::java::lang::String&) const ;
    ::android::net::sip::SipAudioCall makeAudioCall(const ::android::net::sip::SipProfile&, const ::android::net::sip::SipProfile&, const ::android::net::sip::SipAudioCall_Listener&, int32_t) const ;
    ::android::net::sip::SipAudioCall makeAudioCall(const ::java::lang::String&, const ::java::lang::String&, const ::android::net::sip::SipAudioCall_Listener&, int32_t) const ;
    ::android::net::sip::SipAudioCall takeAudioCall(const ::android::content::Intent&, const ::android::net::sip::SipAudioCall_Listener&) const ;
    static bool isIncomingCallIntent(const ::android::content::Intent&);
    static ::java::lang::String getCallId(const ::android::content::Intent&);
    static ::java::lang::String getOfferSessionDescription(const ::android::content::Intent&);
    void register_(const ::android::net::sip::SipProfile&, int32_t, const ::android::net::sip::SipRegistrationListener&) const ;
    void unregister(const ::android::net::sip::SipProfile&, const ::android::net::sip::SipRegistrationListener&) const ;
    ::android::net::sip::SipSession getSessionFor(const ::android::content::Intent&) const ;
    ::android::net::sip::SipSession createSipSession(const ::android::net::sip::SipProfile&, const ::android::net::sip::SipSession_Listener&) const ;

};
}
}
}


