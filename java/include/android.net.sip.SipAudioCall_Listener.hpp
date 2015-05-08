#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace sip { class SipAudioCall; } } }
namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipAudioCall_Listener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipAudioCall_Listener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipAudioCall_Listener(const ::android::net::sip::SipAudioCall_Listener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipAudioCall_Listener(::android::net::sip::SipAudioCall_Listener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipAudioCall_Listener& operator=(const ::android::net::sip::SipAudioCall_Listener& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipAudioCall_Listener& operator=(::android::net::sip::SipAudioCall_Listener&& x) {obj = std::move(x.obj); return *this;}
    
    SipAudioCall_Listener();
    void onReadyToCall(const ::android::net::sip::SipAudioCall&) const ;
    void onCalling(const ::android::net::sip::SipAudioCall&) const ;
    void onRinging(const ::android::net::sip::SipAudioCall&, const ::android::net::sip::SipProfile&) const ;
    void onRingingBack(const ::android::net::sip::SipAudioCall&) const ;
    void onCallEstablished(const ::android::net::sip::SipAudioCall&) const ;
    void onCallEnded(const ::android::net::sip::SipAudioCall&) const ;
    void onCallBusy(const ::android::net::sip::SipAudioCall&) const ;
    void onCallHeld(const ::android::net::sip::SipAudioCall&) const ;
    void onError(const ::android::net::sip::SipAudioCall&, int32_t, const ::java::lang::String&) const ;
    void onChanged(const ::android::net::sip::SipAudioCall&) const ;

};
}
}
}


