#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.impl.cookie.BasicDomainHandler.hpp"

namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace cookie {
class NetscapeDomainHandler : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::impl::cookie::BasicDomainHandler {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NetscapeDomainHandler(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::cookie::CookieAttributeHandler(_obj), ::org::apache::http::impl::cookie::BasicDomainHandler(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NetscapeDomainHandler(const ::org::apache::http::impl::cookie::NetscapeDomainHandler& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::BasicDomainHandler((jobject)0) {obj = x.obj;}
    NetscapeDomainHandler(::org::apache::http::impl::cookie::NetscapeDomainHandler&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::cookie::CookieAttributeHandler((jobject)0), ::org::apache::http::impl::cookie::BasicDomainHandler((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::cookie::NetscapeDomainHandler& operator=(const ::org::apache::http::impl::cookie::NetscapeDomainHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::cookie::NetscapeDomainHandler& operator=(::org::apache::http::impl::cookie::NetscapeDomainHandler&& x) {obj = std::move(x.obj); return *this;}
    
    NetscapeDomainHandler();
    void validate(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;
    bool match(const ::org::apache::http::cookie::Cookie&, const ::org::apache::http::cookie::CookieOrigin&) const ;

};
}
}
}
}
}


