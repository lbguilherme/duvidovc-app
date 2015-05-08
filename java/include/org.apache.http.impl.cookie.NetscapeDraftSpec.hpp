#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.cookie.CookieSpecBase.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class NetscapeDraftSpec : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::impl::cookie::CookieSpecBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetscapeDraftSpec(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpec(_obj), ::org::apache::http::impl::cookie::AbstractCookieSpec(_obj), ::org::apache::http::impl::cookie::CookieSpecBase(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetscapeDraftSpec(const ::org::apache::http::impl::cookie::NetscapeDraftSpec& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {obj = x.obj;}
    NetscapeDraftSpec(::org::apache::http::impl::cookie::NetscapeDraftSpec&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0), ::org::apache::http::impl::cookie::AbstractCookieSpec((jobject)0), ::org::apache::http::impl::cookie::CookieSpecBase((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::NetscapeDraftSpec& operator=(const ::org::apache::http::impl::cookie::NetscapeDraftSpec& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::NetscapeDraftSpec& operator=(::org::apache::http::impl::cookie::NetscapeDraftSpec&& x) {obj = std::move(x.obj); return *this;}
    
    NetscapeDraftSpec(const std::vector< ::java::lang::String>&);
    NetscapeDraftSpec();
    ::java::util::List parse(const ::org::apache::http::Header&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    ::java::util::List formatCookies(const ::java::util::List&) const ;
    int32_t getVersion() const ;
    ::org::apache::http::Header getVersionHeader() const ;

};
}
}
}
}
}


