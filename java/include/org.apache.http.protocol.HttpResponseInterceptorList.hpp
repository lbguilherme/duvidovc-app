#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class HttpResponseInterceptorList : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseInterceptorList(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseInterceptorList(const ::org::apache::http::protocol::HttpResponseInterceptorList& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpResponseInterceptorList(::org::apache::http::protocol::HttpResponseInterceptorList&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::HttpResponseInterceptorList& operator=(const ::org::apache::http::protocol::HttpResponseInterceptorList& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::HttpResponseInterceptorList& operator=(::org::apache::http::protocol::HttpResponseInterceptorList&& x) {obj = std::move(x.obj); return *this;}
    
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&) const ;
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&, int32_t) const ;
    int32_t getResponseInterceptorCount() const ;
    ::org::apache::http::HttpResponseInterceptor getResponseInterceptor(int32_t) const ;
    void clearResponseInterceptors() const ;
    void removeResponseInterceptorByClass(const ::java::lang::Class&) const ;
    void setInterceptors(const ::java::util::List&) const ;

};
}
}
}
}


