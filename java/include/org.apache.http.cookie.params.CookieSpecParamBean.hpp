#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpAbstractParamBean.hpp"

namespace java { namespace util { class Collection; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace cookie {
namespace params {
class CookieSpecParamBean : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::params::HttpAbstractParamBean {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit CookieSpecParamBean(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpAbstractParamBean(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    CookieSpecParamBean(const ::org::apache::http::cookie::params::CookieSpecParamBean& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj;}
    CookieSpecParamBean(::org::apache::http::cookie::params::CookieSpecParamBean&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpAbstractParamBean((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::cookie::params::CookieSpecParamBean& operator=(const ::org::apache::http::cookie::params::CookieSpecParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::cookie::params::CookieSpecParamBean& operator=(::org::apache::http::cookie::params::CookieSpecParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    CookieSpecParamBean(const ::org::apache::http::params::HttpParams&);
    void setDatePatterns(const ::java::util::Collection&) const;
    void setSingleHeader(bool) const;

};
}
}
}
}
}


