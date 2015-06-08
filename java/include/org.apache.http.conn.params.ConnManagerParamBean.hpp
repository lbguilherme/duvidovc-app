#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace org { namespace apache { namespace http { namespace conn { namespace params { class ConnPerRouteBean; } } } } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
namespace params {
class ConnManagerParamBean : public virtual ::java::lang::Object,
                             public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnManagerParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnManagerParamBean(const ::org::apache::http::conn::params::ConnManagerParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    ConnManagerParamBean(::org::apache::http::conn::params::ConnManagerParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnManagerParamBean& operator=(const ::org::apache::http::conn::params::ConnManagerParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnManagerParamBean& operator=(::org::apache::http::conn::params::ConnManagerParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    ConnManagerParamBean(const ::org::apache::http::params::HttpParams&);
    void setTimeout(int64_t) const;
    void setMaxTotalConnections(int32_t) const;
    void setConnectionsPerRoute(const ::org::apache::http::conn::params::ConnPerRouteBean&) const;

};
}
}
}
}
}


