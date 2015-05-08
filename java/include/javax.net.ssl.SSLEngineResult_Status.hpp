#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Enum.hpp"

namespace java { namespace lang { class String; } }
namespace javax { namespace net { namespace ssl { class SSLEngineResult_Status; } } }

namespace javax {
namespace net {
namespace ssl {
class SSLEngineResult_Status : public virtual ::java::lang::Object,
                               public virtual ::java::lang::Enum {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SSLEngineResult_Status(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Comparable(_obj), ::java::lang::Enum(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SSLEngineResult_Status(const ::javax::net::ssl::SSLEngineResult_Status& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj;}
    SSLEngineResult_Status(::javax::net::ssl::SSLEngineResult_Status&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::lang::Enum((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::javax::net::ssl::SSLEngineResult_Status& operator=(const ::javax::net::ssl::SSLEngineResult_Status& x) {obj = x.obj; return *this;}
    ::javax::net::ssl::SSLEngineResult_Status& operator=(::javax::net::ssl::SSLEngineResult_Status&& x) {obj = std::move(x.obj); return *this;}
    
    static std::vector< ::javax::net::ssl::SSLEngineResult_Status> values();
    static ::javax::net::ssl::SSLEngineResult_Status valueOf(const ::java::lang::String&);

};
}
}
}


