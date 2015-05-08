#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"

namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
class ConnectionClosedException : public virtual ::java::lang::Object,
                                  public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ConnectionClosedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ConnectionClosedException(const ::org::apache::http::ConnectionClosedException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ConnectionClosedException(::org::apache::http::ConnectionClosedException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::ConnectionClosedException& operator=(const ::org::apache::http::ConnectionClosedException& x) {obj = x.obj; return *this;}
    ::org::apache::http::ConnectionClosedException& operator=(::org::apache::http::ConnectionClosedException&& x) {obj = std::move(x.obj); return *this;}
    
    ConnectionClosedException(const ::java::lang::String&);

};
}
}
}


