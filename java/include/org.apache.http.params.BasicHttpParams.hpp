#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.Serializable.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.params.AbstractHttpParams.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } }

namespace org {
namespace apache {
namespace http {
namespace params {
class BasicHttpParams : public virtual ::java::lang::Object,
                        public virtual ::java::io::Serializable,
                        public virtual ::java::lang::Cloneable,
                        public virtual ::org::apache::http::params::AbstractHttpParams {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpParams(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::params::AbstractHttpParams(_obj), ::org::apache::http::params::HttpParams(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpParams(const ::org::apache::http::params::BasicHttpParams& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj;}
    BasicHttpParams(::org::apache::http::params::BasicHttpParams&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::params::AbstractHttpParams((jobject)0), ::org::apache::http::params::HttpParams((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::params::BasicHttpParams& operator=(const ::org::apache::http::params::BasicHttpParams& x) {obj = x.obj; return *this;}
    ::org::apache::http::params::BasicHttpParams& operator=(::org::apache::http::params::BasicHttpParams&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpParams();
    ::java::lang::Object getParameter(const ::java::lang::String&) const;
    ::org::apache::http::params::HttpParams setParameter(const ::java::lang::String&, const ::java::lang::Object&) const;
    bool removeParameter(const ::java::lang::String&) const;
    void setParameters(const std::vector< ::java::lang::String>&, const ::java::lang::Object&) const;
    bool isParameterSet(const ::java::lang::String&) const;
    bool isParameterSetLocally(const ::java::lang::String&) const;
    void clear() const;
    ::org::apache::http::params::HttpParams copy() const;
    ::java::lang::Object clone() const;

};
}
}
}
}


