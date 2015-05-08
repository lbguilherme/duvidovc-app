#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.CoreProtocolPNames.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class ProtocolVersion; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class HttpProtocolParams : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::params::CoreProtocolPNames {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpProtocolParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::CoreProtocolPNames(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpProtocolParams(const ::org::apache::http::params::HttpProtocolParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::CoreProtocolPNames((jobject)0) {obj = x.obj;}
    HttpProtocolParams(::org::apache::http::params::HttpProtocolParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::CoreProtocolPNames((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::HttpProtocolParams& operator=(const ::org::apache::http::params::HttpProtocolParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::HttpProtocolParams& operator=(::org::apache::http::params::HttpProtocolParams&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::String getHttpElementCharset(const ::org::apache::http::params::HttpParams&);
    static void setHttpElementCharset(const ::org::apache::http::params::HttpParams&, const ::java::lang::String&);
    static ::java::lang::String getContentCharset(const ::org::apache::http::params::HttpParams&);
    static void setContentCharset(const ::org::apache::http::params::HttpParams&, const ::java::lang::String&);
    static ::org::apache::http::ProtocolVersion getVersion(const ::org::apache::http::params::HttpParams&);
    static void setVersion(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::ProtocolVersion&);
    static ::java::lang::String getUserAgent(const ::org::apache::http::params::HttpParams&);
    static void setUserAgent(const ::org::apache::http::params::HttpParams&, const ::java::lang::String&);
    static bool useExpectContinue(const ::org::apache::http::params::HttpParams&);
    static void setUseExpectContinue(const ::org::apache::http::params::HttpParams&, bool);

};
}
}
}
}


