#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.Cookie.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class ClientCookie : public virtual ::java::lang::Object,
                     public virtual ::org::apache::http::cookie::Cookie {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientCookie(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::Cookie(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientCookie(const ::org::apache::http::cookie::ClientCookie& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0) {obj = x.obj;}
    ClientCookie(::org::apache::http::cookie::ClientCookie&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::ClientCookie& operator=(const ::org::apache::http::cookie::ClientCookie& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::ClientCookie& operator=(::org::apache::http::cookie::ClientCookie&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getAttribute(const ::java::lang::String&) const;
    bool containsAttribute(const ::java::lang::String&) const;

};
}
}
}
}


