#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace auth {
namespace params {
class AuthParamBean : public virtual ::java::lang::Object,
                      public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AuthParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AuthParamBean(const ::org::apache::http::auth::params::AuthParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    AuthParamBean(::org::apache::http::auth::params::AuthParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::auth::params::AuthParamBean& operator=(const ::org::apache::http::auth::params::AuthParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::auth::params::AuthParamBean& operator=(::org::apache::http::auth::params::AuthParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    AuthParamBean(const ::org::apache::http::params::HttpParams&);
    void setCredentialCharset(const ::java::lang::String&) const;

};
}
}
}
}
}


