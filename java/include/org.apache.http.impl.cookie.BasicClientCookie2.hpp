#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.SetCookie2.hpp"
#include "org.apache.http.impl.cookie.BasicClientCookie.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class BasicClientCookie2 : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::cookie::SetCookie2,
                           public virtual ::org::apache::http::impl::cookie::BasicClientCookie {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicClientCookie2(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::cookie::ClientCookie(_obj), ::org::apache::http::cookie::Cookie(_obj), ::org::apache::http::cookie::SetCookie(_obj), ::org::apache::http::cookie::SetCookie2(_obj), ::org::apache::http::impl::cookie::BasicClientCookie(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicClientCookie2(const ::org::apache::http::impl::cookie::BasicClientCookie2& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0), ::org::apache::http::cookie::SetCookie2((jobject)0), ::org::apache::http::impl::cookie::BasicClientCookie((jobject)0) {obj = x.obj;}
    BasicClientCookie2(::org::apache::http::impl::cookie::BasicClientCookie2&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0), ::org::apache::http::cookie::SetCookie2((jobject)0), ::org::apache::http::impl::cookie::BasicClientCookie((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::BasicClientCookie2& operator=(const ::org::apache::http::impl::cookie::BasicClientCookie2& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::BasicClientCookie2& operator=(::org::apache::http::impl::cookie::BasicClientCookie2&& x) {obj = std::move(x.obj); return *this;}
    
    BasicClientCookie2(const ::java::lang::String&, const ::java::lang::String&);
    std::vector< int32_t> getPorts() const ;
    void setPorts(const std::vector< int32_t>&) const ;
    ::java::lang::String getCommentURL() const ;
    void setCommentURL(const ::java::lang::String&) const ;
    void setDiscard(bool) const ;
    bool isPersistent() const ;
    bool isExpired(const ::java::util::Date&) const ;
    ::java::lang::Object clone() const ;

};
}
}
}
}
}


