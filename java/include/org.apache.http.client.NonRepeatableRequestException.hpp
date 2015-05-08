#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.ProtocolException.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
namespace client {
class NonRepeatableRequestException : public virtual ::java::lang::Object,
                                      public virtual ::org::apache::http::ProtocolException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NonRepeatableRequestException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::HttpException(_obj), ::org::apache::http::ProtocolException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NonRepeatableRequestException(const ::org::apache::http::client::NonRepeatableRequestException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {obj = x.obj;}
    NonRepeatableRequestException(::org::apache::http::client::NonRepeatableRequestException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::NonRepeatableRequestException& operator=(const ::org::apache::http::client::NonRepeatableRequestException& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::NonRepeatableRequestException& operator=(::org::apache::http::client::NonRepeatableRequestException&& x) {obj = std::move(x.obj); return *this;}
    
    NonRepeatableRequestException();
    NonRepeatableRequestException(const ::java::lang::String&);

};
}
}
}
}


