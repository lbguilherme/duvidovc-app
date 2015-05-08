#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace net {
namespace sip {
class SipException : public virtual ::java::lang::Object,
                     public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SipException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SipException(const ::android::net::sip::SipException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    SipException(::android::net::sip::SipException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::sip::SipException& operator=(const ::android::net::sip::SipException& x) {obj = x.obj; return *this;}
    ::android::net::sip::SipException& operator=(::android::net::sip::SipException&& x) {obj = std::move(x.obj); return *this;}
    
    SipException();
    SipException(const ::java::lang::String&);
    SipException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}


