#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.IOException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
namespace client {
class ClientProtocolException : public virtual ::java::lang::Object,
                                public virtual ::java::io::IOException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientProtocolException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientProtocolException(const ::org::apache::http::client::ClientProtocolException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj;}
    ClientProtocolException(::org::apache::http::client::ClientProtocolException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::ClientProtocolException& operator=(const ::org::apache::http::client::ClientProtocolException& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::ClientProtocolException& operator=(::org::apache::http::client::ClientProtocolException&& x) {obj = std::move(x.obj); return *this;}
    
    ClientProtocolException();
    ClientProtocolException(const ::java::lang::String&);
    ClientProtocolException(const ::java::lang::Throwable&);
    ClientProtocolException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}
}


