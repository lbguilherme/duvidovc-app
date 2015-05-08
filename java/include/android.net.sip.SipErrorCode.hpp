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
class SipErrorCode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipErrorCode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipErrorCode(const ::android::net::sip::SipErrorCode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SipErrorCode(::android::net::sip::SipErrorCode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipErrorCode& operator=(const ::android::net::sip::SipErrorCode& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipErrorCode& operator=(::android::net::sip::SipErrorCode&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String toString(int32_t);

};
}
}
}


