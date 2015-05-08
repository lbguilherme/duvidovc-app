#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace android { namespace net { namespace sip { class SipSession_Listener; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipSession : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipSession(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipSession(const ::android::net::sip::SipSession& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipSession(::android::net::sip::SipSession&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipSession& operator=(const ::android::net::sip::SipSession& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipSession& operator=(::android::net::sip::SipSession&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getLocalIp() const ;
    ::android::net::sip::SipProfile getLocalProfile() const ;
    ::android::net::sip::SipProfile getPeerProfile() const ;
    int32_t getState() const ;
    bool isInCall() const ;
    ::java::lang::String getCallId() const ;
    void setListener(const ::android::net::sip::SipSession_Listener&) const ;
    void register_(int32_t) const ;
    void unregister() const ;
    void makeCall(const ::android::net::sip::SipProfile&, const ::java::lang::String&, int32_t) const ;
    void answerCall(const ::java::lang::String&, int32_t) const ;
    void endCall() const ;
    void changeCall(const ::java::lang::String&, int32_t) const ;

};
}
}
}

#include "android.net.sip.SipSession_Listener.hpp"
#include "android.net.sip.SipSession_State.hpp"

