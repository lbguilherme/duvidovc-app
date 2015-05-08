#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.conn.params.ConnManagerPNames.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnPerRoute; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnManagerParams : public virtual ::java::lang::Object,
                          public virtual ::org::apache::http::conn::params::ConnManagerPNames {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnManagerParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::conn::params::ConnManagerPNames(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnManagerParams(const ::org::apache::http::conn::params::ConnManagerParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnManagerPNames((jobject)0) {obj = x.obj;}
    ConnManagerParams(::org::apache::http::conn::params::ConnManagerParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::conn::params::ConnManagerPNames((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnManagerParams& operator=(const ::org::apache::http::conn::params::ConnManagerParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnManagerParams& operator=(::org::apache::http::conn::params::ConnManagerParams&& x) {obj = std::move(x.obj); return *this;}
    
    ConnManagerParams();
    static int64_t getTimeout(const ::org::apache::http::params::HttpParams&);
    static void setTimeout(const ::org::apache::http::params::HttpParams&, int64_t);
    static void setMaxConnectionsPerRoute(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::conn::params::ConnPerRoute&);
    static ::org::apache::http::conn::params::ConnPerRoute getMaxConnectionsPerRoute(const ::org::apache::http::params::HttpParams&);
    static void setMaxTotalConnections(const ::org::apache::http::params::HttpParams&, int32_t);
    static int32_t getMaxTotalConnections(const ::org::apache::http::params::HttpParams&);

};
}
}
}
}
}


