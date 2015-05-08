#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpRequestInterceptorList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRequestInterceptorList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRequestInterceptorList(const ::org::apache::http::protocol::HttpRequestInterceptorList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpRequestInterceptorList(::org::apache::http::protocol::HttpRequestInterceptorList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpRequestInterceptorList& operator=(const ::org::apache::http::protocol::HttpRequestInterceptorList& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpRequestInterceptorList& operator=(::org::apache::http::protocol::HttpRequestInterceptorList&& x) {obj = std::move(x.obj); return *this;}
    
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&) const ;
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&, int32_t) const ;
    int32_t getRequestInterceptorCount() const ;
    ::org::apache::http::HttpRequestInterceptor getRequestInterceptor(int32_t) const ;
    void clearRequestInterceptors() const ;
    void removeRequestInterceptorByClass(const ::java::lang::Class&) const ;
    void setInterceptors(const ::java::util::List&) const ;

};
}
}
}
}


