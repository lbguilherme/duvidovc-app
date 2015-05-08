#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.SetCookie.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class SetCookie2 : public virtual ::java::lang::Object,
                   public virtual ::org::apache::http::cookie::SetCookie {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SetCookie2(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::Cookie(_obj), ::org::apache::http::cookie::SetCookie(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SetCookie2(const ::org::apache::http::cookie::SetCookie2& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0) {obj = x.obj;}
    SetCookie2(::org::apache::http::cookie::SetCookie2&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::SetCookie2& operator=(const ::org::apache::http::cookie::SetCookie2& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::SetCookie2& operator=(::org::apache::http::cookie::SetCookie2&& x) {obj = std::move(x.obj); return *this;}
    
    void setCommentURL(const ::java::lang::String&) const ;
    void setPorts(const std::vector< int32_t>&) const ;
    void setDiscard(bool) const ;

};
}
}
}
}


