#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { namespace sip { class SipProfile; } } }
namespace android { namespace net { namespace sip { class SipProfile_Builder; } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipProfile_Builder : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipProfile_Builder(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipProfile_Builder(const ::android::net::sip::SipProfile_Builder& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipProfile_Builder(::android::net::sip::SipProfile_Builder&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipProfile_Builder& operator=(const ::android::net::sip::SipProfile_Builder& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipProfile_Builder& operator=(::android::net::sip::SipProfile_Builder&& x) {obj = std::move(x.obj); return *this;}
    
    SipProfile_Builder(const ::android::net::sip::SipProfile&);
    SipProfile_Builder(const ::java::lang::String&);
    SipProfile_Builder(const ::java::lang::String&, const ::java::lang::String&);
    ::android::net::sip::SipProfile_Builder setAuthUserName(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setProfileName(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setPassword(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setPort(int32_t) const;
    ::android::net::sip::SipProfile_Builder setProtocol(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setOutboundProxy(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setDisplayName(const ::java::lang::String&) const;
    ::android::net::sip::SipProfile_Builder setSendKeepAlive(bool) const;
    ::android::net::sip::SipProfile_Builder setAutoRegistration(bool) const;
    ::android::net::sip::SipProfile build() const;

};
}
}
}


