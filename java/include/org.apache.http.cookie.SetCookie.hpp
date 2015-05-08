#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.Cookie.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class SetCookie : public virtual ::java::lang::Object,
                  public virtual ::org::apache::http::cookie::Cookie {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SetCookie(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::Cookie(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SetCookie(const ::org::apache::http::cookie::SetCookie& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0) {obj = x.obj;}
    SetCookie(::org::apache::http::cookie::SetCookie&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::SetCookie& operator=(const ::org::apache::http::cookie::SetCookie& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::SetCookie& operator=(::org::apache::http::cookie::SetCookie&& x) {obj = std::move(x.obj); return *this;}
    
    void setValue(const ::java::lang::String&) const ;
    void setComment(const ::java::lang::String&) const ;
    void setExpiryDate(const ::java::util::Date&) const ;
    void setDomain(const ::java::lang::String&) const ;
    void setPath(const ::java::lang::String&) const ;
    void setSecure(bool) const ;
    void setVersion(int32_t) const ;

};
}
}
}
}


