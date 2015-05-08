#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class HttpRetryException : public virtual ::java::lang::Object,
                           public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpRetryException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpRetryException(const ::java::net::HttpRetryException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    HttpRetryException(::java::net::HttpRetryException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::HttpRetryException& operator=(const ::java::net::HttpRetryException& x) {obj = x.obj; return *this;}
    ::java::net::HttpRetryException& operator=(::java::net::HttpRetryException&& x) {obj = std::move(x.obj); return *this;}
    
    HttpRetryException(const ::java::lang::String&, int32_t);
    HttpRetryException(const ::java::lang::String&, int32_t, const ::java::lang::String&);
    ::java::lang::String getLocation() const ;
    ::java::lang::String getReason() const ;
    int32_t responseCode() const ;

};
}
}


