#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.CookieStore.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class Date; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class BasicCookieStore : public virtual ::java::lang::Object,
                         public virtual ::org::apache::http::client::CookieStore {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicCookieStore(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::client::CookieStore(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicCookieStore(const ::org::apache::http::impl::client::BasicCookieStore& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::CookieStore((jobject)0) {obj = x.obj;}
    BasicCookieStore(::org::apache::http::impl::client::BasicCookieStore&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::client::CookieStore((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::BasicCookieStore& operator=(const ::org::apache::http::impl::client::BasicCookieStore& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::BasicCookieStore& operator=(::org::apache::http::impl::client::BasicCookieStore&& x) {obj = std::move(x.obj); return *this;}
    
    BasicCookieStore();
    void addCookie(const ::org::apache::http::cookie::Cookie&) const;
    void addCookies(const std::vector< ::org::apache::http::cookie::Cookie>&) const;
    ::java::util::List getCookies() const;
    bool clearExpired(const ::java::util::Date&) const;
    ::java::lang::String toString() const;
    void clear() const;

};
}
}
}
}
}


