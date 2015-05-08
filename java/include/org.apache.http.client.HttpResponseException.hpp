#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.client.ClientProtocolException.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace client {
class HttpResponseException : public virtual ::java::lang::Object,
                              public virtual ::org::apache::http::client::ClientProtocolException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpResponseException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::client::ClientProtocolException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpResponseException(const ::org::apache::http::client::HttpResponseException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::client::ClientProtocolException((jobject)0) {obj = x.obj;}
    HttpResponseException(::org::apache::http::client::HttpResponseException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::client::ClientProtocolException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::HttpResponseException& operator=(const ::org::apache::http::client::HttpResponseException& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::HttpResponseException& operator=(::org::apache::http::client::HttpResponseException&& x) {obj = std::move(x.obj); return *this;}
    
    HttpResponseException(int32_t, const ::java::lang::String&);
    int32_t getStatusCode() const ;

};
}
}
}
}


