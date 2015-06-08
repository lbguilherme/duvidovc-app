#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace net {
namespace sip {
class SipRegistrationListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipRegistrationListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipRegistrationListener(const ::android::net::sip::SipRegistrationListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipRegistrationListener(::android::net::sip::SipRegistrationListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipRegistrationListener& operator=(const ::android::net::sip::SipRegistrationListener& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipRegistrationListener& operator=(::android::net::sip::SipRegistrationListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onRegistering(const ::java::lang::String&) const;
    void onRegistrationDone(const ::java::lang::String&, int64_t) const;
    void onRegistrationFailed(const ::java::lang::String&, int32_t, const ::java::lang::String&) const;

};
}
}
}


