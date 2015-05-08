#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.HttpParams.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class AbstractHttpParams : public virtual ::java::lang::Object,
                           public virtual ::org::apache::http::params::HttpParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractHttpParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::HttpParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractHttpParams(const ::org::apache::http::params::AbstractHttpParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj;}
    AbstractHttpParams(::org::apache::http::params::AbstractHttpParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::AbstractHttpParams& operator=(const ::org::apache::http::params::AbstractHttpParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::AbstractHttpParams& operator=(::org::apache::http::params::AbstractHttpParams&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t getLongParameter(const ::java::lang::String&, int64_t) const ;
    ::org::apache::http::params::HttpParams setLongParameter(const ::java::lang::String&, int64_t) const ;
    int32_t getIntParameter(const ::java::lang::String&, int32_t) const ;
    ::org::apache::http::params::HttpParams setIntParameter(const ::java::lang::String&, int32_t) const ;
    double getDoubleParameter(const ::java::lang::String&, double) const ;
    ::org::apache::http::params::HttpParams setDoubleParameter(const ::java::lang::String&, double) const ;
    bool getBooleanParameter(const ::java::lang::String&, bool) const ;
    ::org::apache::http::params::HttpParams setBooleanParameter(const ::java::lang::String&, bool) const ;
    bool isParameterTrue(const ::java::lang::String&) const ;
    bool isParameterFalse(const ::java::lang::String&) const ;

};
}
}
}
}


