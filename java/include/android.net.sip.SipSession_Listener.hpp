#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace android { namespace net { namespace sip { class SipSession; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipSession_Listener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipSession_Listener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipSession_Listener(const ::android::net::sip::SipSession_Listener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipSession_Listener(::android::net::sip::SipSession_Listener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipSession_Listener& operator=(const ::android::net::sip::SipSession_Listener& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipSession_Listener& operator=(::android::net::sip::SipSession_Listener&& x) {obj = std::move(x.obj); return *this;}
    
    SipSession_Listener();
    void onCalling(const ::android::net::sip::SipSession&) const ;
    void onRinging(const ::android::net::sip::SipSession&, const ::android::net::sip::SipProfile&, const ::java::lang::String&) const ;
    void onRingingBack(const ::android::net::sip::SipSession&) const ;
    void onCallEstablished(const ::android::net::sip::SipSession&, const ::java::lang::String&) const ;
    void onCallEnded(const ::android::net::sip::SipSession&) const ;
    void onCallBusy(const ::android::net::sip::SipSession&) const ;
    void onError(const ::android::net::sip::SipSession&, int32_t, const ::java::lang::String&) const ;
    void onCallChangeFailed(const ::android::net::sip::SipSession&, int32_t, const ::java::lang::String&) const ;
    void onRegistering(const ::android::net::sip::SipSession&) const ;
    void onRegistrationDone(const ::android::net::sip::SipSession&, int32_t) const ;
    void onRegistrationFailed(const ::android::net::sip::SipSession&, int32_t, const ::java::lang::String&) const ;
    void onRegistrationTimeout(const ::android::net::sip::SipSession&) const ;

};
}
}
}


