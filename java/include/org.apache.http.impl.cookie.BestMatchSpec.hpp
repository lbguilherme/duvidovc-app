#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.cookie.CookieSpec.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class BestMatchSpec : public virtual ::java::lang::Object,
                      public virtual ::org::apache::http::cookie::CookieSpec {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BestMatchSpec(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieSpec(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BestMatchSpec(const ::org::apache::http::impl::cookie::BestMatchSpec& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {obj = x.obj;}
    BestMatchSpec(::org::apache::http::impl::cookie::BestMatchSpec&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieSpec((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::BestMatchSpec& operator=(const ::org::apache::http::impl::cookie::BestMatchSpec& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::BestMatchSpec& operator=(::org::apache::http::impl::cookie::BestMatchSpec&& x) {obj = std::move(x.obj); return *this;}
    
    BestMatchSpec(const std::vector< ::java::lang::String>&, bool);
    BestMatchSpec();
    ::java::util::List parse(const ::org::apache::http::Header&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    ::java::util::List formatCookies(const ::java::util::List&) const ;
    int32_t getVersion() const ;
    ::org::apache::http::Header getVersionHeader() const ;

};
}
}
}
}
}


