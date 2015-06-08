#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieSpec; } } } }
namespace org { namespace apache { namespace http { namespace cookie { class CookieSpecFactory; } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
class CookieSpecRegistry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpecRegistry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpecRegistry(const ::org::apache::http::cookie::CookieSpecRegistry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    CookieSpecRegistry(::org::apache::http::cookie::CookieSpecRegistry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::CookieSpecRegistry& operator=(const ::org::apache::http::cookie::CookieSpecRegistry& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::CookieSpecRegistry& operator=(::org::apache::http::cookie::CookieSpecRegistry&& x) {obj = std::move(x.obj); return *this;}
    
    CookieSpecRegistry();
    void register_(const ::java::lang::String&, const ::org::apache::http::cookie::CookieSpecFactory&) const;
    void unregister(const ::java::lang::String&) const;
    ::org::apache::http::cookie::CookieSpec getCookieSpec(const ::java::lang::String&, const ::org::apache::http::params::HttpParams&) const;
    ::org::apache::http::cookie::CookieSpec getCookieSpec(const ::java::lang::String&) const;
    ::java::util::List getSpecNames() const;
    void setItems(const ::java::util::Map&) const;

};
}
}
}
}


