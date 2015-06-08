#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Exception.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace net {
class URISyntaxException : public virtual ::java::lang::Object,
                           public virtual ::java::lang::Exception {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URISyntaxException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URISyntaxException(const ::java::net::URISyntaxException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    URISyntaxException(::java::net::URISyntaxException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URISyntaxException& operator=(const ::java::net::URISyntaxException& x) {obj = x.obj; return *this;}
    ::java::net::URISyntaxException& operator=(::java::net::URISyntaxException&& x) {obj = std::move(x.obj); return *this;}
    
    URISyntaxException(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    URISyntaxException(const ::java::lang::String&, const ::java::lang::String&);
    int32_t getIndex() const;
    ::java::lang::String getReason() const;
    ::java::lang::String getInput() const;
    ::java::lang::String getMessage() const;

};
}
}


