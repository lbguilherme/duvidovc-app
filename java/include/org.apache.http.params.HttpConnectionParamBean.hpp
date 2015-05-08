#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class HttpConnectionParamBean : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpConnectionParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpConnectionParamBean(const ::org::apache::http::params::HttpConnectionParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    HttpConnectionParamBean(::org::apache::http::params::HttpConnectionParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::HttpConnectionParamBean& operator=(const ::org::apache::http::params::HttpConnectionParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::HttpConnectionParamBean& operator=(::org::apache::http::params::HttpConnectionParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    HttpConnectionParamBean(const ::org::apache::http::params::HttpParams&);
    void setSoTimeout(int32_t) const ;
    void setTcpNoDelay(bool) const ;
    void setSocketBufferSize(int32_t) const ;
    void setLinger(int32_t) const ;
    void setConnectionTimeout(int32_t) const ;
    void setStaleCheckingEnabled(bool) const ;

};
}
}
}
}


