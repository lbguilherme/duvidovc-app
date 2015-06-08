#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.params.AbstractHttpParams.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class DefaultedHttpParams : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::params::AbstractHttpParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DefaultedHttpParams(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::params::AbstractHttpParams(_obj), ::org::apache::http::params::HttpParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DefaultedHttpParams(const ::org::apache::http::params::DefaultedHttpParams& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj;}
    DefaultedHttpParams(::org::apache::http::params::DefaultedHttpParams&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::DefaultedHttpParams& operator=(const ::org::apache::http::params::DefaultedHttpParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::DefaultedHttpParams& operator=(::org::apache::http::params::DefaultedHttpParams&& x) {obj = std::move(x.obj); return *this;}
    
    DefaultedHttpParams(const ::org::apache::http::params::HttpParams&, const ::org::apache::http::params::HttpParams&);
    ::org::apache::http::params::HttpParams copy() const;
    ::java::lang::Object getParameter(const ::java::lang::String&) const;
    bool removeParameter(const ::java::lang::String&) const;
    ::org::apache::http::params::HttpParams setParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    ::org::apache::http::params::HttpParams getDefaults() const;

};
}
}
}
}


