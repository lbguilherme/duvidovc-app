#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class HttpAbstractParamBean : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpAbstractParamBean(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpAbstractParamBean(const ::org::apache::http::params::HttpAbstractParamBean& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpAbstractParamBean(::org::apache::http::params::HttpAbstractParamBean&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::HttpAbstractParamBean& operator=(const ::org::apache::http::params::HttpAbstractParamBean& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::HttpAbstractParamBean& operator=(::org::apache::http::params::HttpAbstractParamBean&& x) {obj = std::move(x.obj); return *this;}
    
    HttpAbstractParamBean(const ::org::apache::http::params::HttpParams&);

};
}
}
}
}


