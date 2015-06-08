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
namespace org { namespace apache { namespace http { class HttpHost; } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class Scheme; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace scheme {
class SchemeRegistry : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SchemeRegistry(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SchemeRegistry(const ::org::apache::http::conn::scheme::SchemeRegistry& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SchemeRegistry(::org::apache::http::conn::scheme::SchemeRegistry&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::scheme::SchemeRegistry& operator=(const ::org::apache::http::conn::scheme::SchemeRegistry& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::scheme::SchemeRegistry& operator=(::org::apache::http::conn::scheme::SchemeRegistry&& x) {obj = std::move(x.obj); return *this;}
    
    SchemeRegistry();
    ::org::apache::http::conn::scheme::Scheme getScheme(const ::java::lang::String&) const;
    ::org::apache::http::conn::scheme::Scheme getScheme(const ::org::apache::http::HttpHost&) const;
    ::org::apache::http::conn::scheme::Scheme get(const ::java::lang::String&) const;
    ::org::apache::http::conn::scheme::Scheme register_(const ::org::apache::http::conn::scheme::Scheme&) const;
    ::org::apache::http::conn::scheme::Scheme unregister(const ::java::lang::String&) const;
    ::java::util::List getSchemeNames() const;
    void setItems(const ::java::util::Map&) const;

};
}
}
}
}
}


