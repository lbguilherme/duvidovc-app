#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class MailTo; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Map; } }

namespace android {
namespace net {
class MailTo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MailTo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MailTo(const ::android::net::MailTo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MailTo(::android::net::MailTo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::net::MailTo& operator=(const ::android::net::MailTo& x) {obj = x.obj; return *this;}
    ::android::net::MailTo& operator=(::android::net::MailTo&& x) {obj = std::move(x.obj); return *this;}
    
    static bool isMailTo(const ::java::lang::String&);
    static ::android::net::MailTo parse(const ::java::lang::String&);
    ::java::lang::String getTo() const;
    ::java::lang::String getCc() const;
    ::java::lang::String getSubject() const;
    ::java::lang::String getBody() const;
    ::java::util::Map getHeaders() const;
    ::java::lang::String toString() const;

};
}
}


