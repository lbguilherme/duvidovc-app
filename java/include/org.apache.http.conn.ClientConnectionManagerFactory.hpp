#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ClientConnectionManagerFactory : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientConnectionManagerFactory(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientConnectionManagerFactory(const ::org::apache::http::conn::ClientConnectionManagerFactory& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientConnectionManagerFactory(::org::apache::http::conn::ClientConnectionManagerFactory&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ClientConnectionManagerFactory& operator=(const ::org::apache::http::conn::ClientConnectionManagerFactory& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ClientConnectionManagerFactory& operator=(::org::apache::http::conn::ClientConnectionManagerFactory&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::conn::ClientConnectionManager newInstance(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::conn::scheme::SchemeRegistry&) const ;

};
}
}
}
}


