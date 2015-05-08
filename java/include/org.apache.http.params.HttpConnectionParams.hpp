#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.CoreConnectionPNames.hpp"

namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class HttpConnectionParams : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::params::CoreConnectionPNames {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpConnectionParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::CoreConnectionPNames(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpConnectionParams(const ::org::apache::http::params::HttpConnectionParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::CoreConnectionPNames((jobject)0) {obj = x.obj;}
    HttpConnectionParams(::org::apache::http::params::HttpConnectionParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::CoreConnectionPNames((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::HttpConnectionParams& operator=(const ::org::apache::http::params::HttpConnectionParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::HttpConnectionParams& operator=(::org::apache::http::params::HttpConnectionParams&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t getSoTimeout(const ::org::apache::http::params::HttpParams&);
    static void setSoTimeout(const ::org::apache::http::params::HttpParams&, int32_t);
    static bool getTcpNoDelay(const ::org::apache::http::params::HttpParams&);
    static void setTcpNoDelay(const ::org::apache::http::params::HttpParams&, bool);
    static int32_t getSocketBufferSize(const ::org::apache::http::params::HttpParams&);
    static void setSocketBufferSize(const ::org::apache::http::params::HttpParams&, int32_t);
    static int32_t getLinger(const ::org::apache::http::params::HttpParams&);
    static void setLinger(const ::org::apache::http::params::HttpParams&, int32_t);
    static int32_t getConnectionTimeout(const ::org::apache::http::params::HttpParams&);
    static void setConnectionTimeout(const ::org::apache::http::params::HttpParams&, int32_t);
    static bool isStaleCheckingEnabled(const ::org::apache::http::params::HttpParams&);
    static void setStaleCheckingEnabled(const ::org::apache::http::params::HttpParams&, bool);

};
}
}
}
}


