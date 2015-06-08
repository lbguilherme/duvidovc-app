#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.cookie.ClientCookie.hpp"
#include "org.apache.http.cookie.SetCookie.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class BasicClientCookie : public virtual ::java::lang::Object,
                          public virtual ::java::lang::Cloneable,
                          public virtual ::org::apache::http::cookie::ClientCookie,
                          public virtual ::org::apache::http::cookie::SetCookie {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicClientCookie(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::cookie::ClientCookie(_obj), ::org::apache::http::cookie::Cookie(_obj), ::org::apache::http::cookie::SetCookie(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicClientCookie(const ::org::apache::http::impl::cookie::BasicClientCookie& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0) {obj = x.obj;}
    BasicClientCookie(::org::apache::http::impl::cookie::BasicClientCookie&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::cookie::ClientCookie((jobject)0), ::org::apache::http::cookie::Cookie((jobject)0), ::org::apache::http::cookie::SetCookie((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::BasicClientCookie& operator=(const ::org::apache::http::impl::cookie::BasicClientCookie& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::BasicClientCookie& operator=(::org::apache::http::impl::cookie::BasicClientCookie&& x) {obj = std::move(x.obj); return *this;}
    
    BasicClientCookie(const ::java::lang::String&, const ::java::lang::String&);
    ::java::lang::String getName() const;
    ::java::lang::String getValue() const;
    void setValue(const ::java::lang::String&) const;
    ::java::lang::String getComment() const;
    void setComment(const ::java::lang::String&) const;
    ::java::lang::String getCommentURL() const;
    ::java::util::Date getExpiryDate() const;
    void setExpiryDate(const ::java::util::Date&) const;
    bool isPersistent() const;
    ::java::lang::String getDomain() const;
    void setDomain(const ::java::lang::String&) const;
    ::java::lang::String getPath() const;
    void setPath(const ::java::lang::String&) const;
    bool isSecure() const;
    void setSecure(bool) const;
    std::vector< int32_t> getPorts() const;
    int32_t getVersion() const;
    void setVersion(int32_t) const;
    bool isExpired(const ::java::util::Date&) const;
    void setAttribute(const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getAttribute(const ::java::lang::String&) const;
    bool containsAttribute(const ::java::lang::String&) const;
    ::java::lang::Object clone() const;
    ::java::lang::String toString() const;

};
}
}
}
}
}


