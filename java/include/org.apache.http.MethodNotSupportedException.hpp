#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
class MethodNotSupportedException : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::HttpException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MethodNotSupportedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::HttpException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MethodNotSupportedException(const ::org::apache::http::MethodNotSupportedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {obj = x.obj;}
    MethodNotSupportedException(::org::apache::http::MethodNotSupportedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::MethodNotSupportedException& operator=(const ::org::apache::http::MethodNotSupportedException& x) {obj = x.obj; return *this;}
    ::org::apache::http::MethodNotSupportedException& operator=(::org::apache::http::MethodNotSupportedException&& x) {obj = std::move(x.obj); return *this;}
    
    MethodNotSupportedException(const ::java::lang::String&);
    MethodNotSupportedException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}


