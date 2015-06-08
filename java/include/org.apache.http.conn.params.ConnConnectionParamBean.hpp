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
namespace conn {
namespace params {
class ConnConnectionParamBean : public virtual ::java::lang::Object,
                                public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnConnectionParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnConnectionParamBean(const ::org::apache::http::conn::params::ConnConnectionParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    ConnConnectionParamBean(::org::apache::http::conn::params::ConnConnectionParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::params::ConnConnectionParamBean& operator=(const ::org::apache::http::conn::params::ConnConnectionParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::params::ConnConnectionParamBean& operator=(::org::apache::http::conn::params::ConnConnectionParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    ConnConnectionParamBean(const ::org::apache::http::params::HttpParams&);
    void setMaxStatusLineGarbage(int32_t) const;

};
}
}
}
}
}


