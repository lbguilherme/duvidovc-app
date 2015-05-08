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
class SipSession_State : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipSession_State(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipSession_State(const ::android::net::sip::SipSession_State& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipSession_State(::android::net::sip::SipSession_State&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipSession_State& operator=(const ::android::net::sip::SipSession_State& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipSession_State& operator=(::android::net::sip::SipSession_State&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String toString(int32_t);

};
}
}
}


