#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpVersion; } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class HttpProtocolParamBean : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpProtocolParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpProtocolParamBean(const ::org::apache::http::params::HttpProtocolParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    HttpProtocolParamBean(::org::apache::http::params::HttpProtocolParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::HttpProtocolParamBean& operator=(const ::org::apache::http::params::HttpProtocolParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::HttpProtocolParamBean& operator=(::org::apache::http::params::HttpProtocolParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    HttpProtocolParamBean(const ::org::apache::http::params::HttpParams&);
    void setHttpElementCharset(const ::java::lang::String&) const ;
    void setContentCharset(const ::java::lang::String&) const ;
    void setVersion(const ::org::apache::http::HttpVersion&) const ;
    void setUserAgent(const ::java::lang::String&) const ;
    void setUseExpectContinue(bool) const ;

};
}
}
}
}


