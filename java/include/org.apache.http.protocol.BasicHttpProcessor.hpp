#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Cloneable.hpp"
#include "org.apache.http.protocol.HttpProcessor.hpp"
#include "org.apache.http.protocol.HttpRequestInterceptorList.hpp"
#include "org.apache.http.protocol.HttpResponseInterceptorList.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class List; } }
namespace org { namespace apache { namespace http { class HttpRequest; } } }
namespace org { namespace apache { namespace http { class HttpRequestInterceptor; } } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }
namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } }
namespace org { namespace apache { namespace http { namespace protocol { class BasicHttpProcessor; } } } }
namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } }

namespace org {
namespace apache {
namespace http {
namespace protocol {
class BasicHttpProcessor : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Cloneable,
                           public virtual ::org::apache::http::protocol::HttpProcessor,
                           public virtual ::org::apache::http::protocol::HttpRequestInterceptorList,
                           public virtual ::org::apache::http::protocol::HttpResponseInterceptorList {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BasicHttpProcessor(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::org::apache::http::HttpRequestInterceptor(_obj), ::org::apache::http::HttpResponseInterceptor(_obj), ::org::apache::http::protocol::HttpProcessor(_obj), ::org::apache::http::protocol::HttpRequestInterceptorList(_obj), ::org::apache::http::protocol::HttpResponseInterceptorList(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BasicHttpProcessor(const ::org::apache::http::protocol::BasicHttpProcessor& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0), ::org::apache::http::protocol::HttpProcessor((jobject)0), ::org::apache::http::protocol::HttpRequestInterceptorList((jobject)0), ::org::apache::http::protocol::HttpResponseInterceptorList((jobject)0) {obj = x.obj;}
    BasicHttpProcessor(::org::apache::http::protocol::BasicHttpProcessor&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::org::apache::http::HttpRequestInterceptor((jobject)0), ::org::apache::http::HttpResponseInterceptor((jobject)0), ::org::apache::http::protocol::HttpProcessor((jobject)0), ::org::apache::http::protocol::HttpRequestInterceptorList((jobject)0), ::org::apache::http::protocol::HttpResponseInterceptorList((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::protocol::BasicHttpProcessor& operator=(const ::org::apache::http::protocol::BasicHttpProcessor& x) {obj = x.obj; return *this;}
    ::org::apache::http::protocol::BasicHttpProcessor& operator=(::org::apache::http::protocol::BasicHttpProcessor&& x) {obj = std::move(x.obj); return *this;}
    
    BasicHttpProcessor();
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&) const;
    void addRequestInterceptor(const ::org::apache::http::HttpRequestInterceptor&, int32_t) const;
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&, int32_t) const;
    void removeRequestInterceptorByClass(const ::java::lang::Class&) const;
    void removeResponseInterceptorByClass(const ::java::lang::Class&) const;
    void addInterceptor(const ::org::apache::http::HttpRequestInterceptor&) const;
    void addInterceptor(const ::org::apache::http::HttpRequestInterceptor&, int32_t) const;
    int32_t getRequestInterceptorCount() const;
    ::org::apache::http::HttpRequestInterceptor getRequestInterceptor(int32_t) const;
    void clearRequestInterceptors() const;
    void addResponseInterceptor(const ::org::apache::http::HttpResponseInterceptor&) const;
    void addInterceptor(const ::org::apache::http::HttpResponseInterceptor&) const;
    void addInterceptor(const ::org::apache::http::HttpResponseInterceptor&, int32_t) const;
    int32_t getResponseInterceptorCount() const;
    ::org::apache::http::HttpResponseInterceptor getResponseInterceptor(int32_t) const;
    void clearResponseInterceptors() const;
    void setInterceptors(const ::java::util::List&) const;
    void clearInterceptors() const;
    void process(const ::org::apache::http::HttpRequest&, const ::org::apache::http::protocol::HttpContext&) const;
    void process(const ::org::apache::http::HttpResponse&, const ::org::apache::http::protocol::HttpContext&) const;
    ::org::apache::http::protocol::BasicHttpProcessor copy() const;
    ::java::lang::Object clone() const;

};
}
}
}
}


