#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.auth.AuthenticationException.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace lang { class Throwable; } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace auth {
class NTLMEngineException : public virtual ::java::lang::Object,
                            public virtual ::org::apache::http::auth::AuthenticationException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit NTLMEngineException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::HttpException(_obj), ::org::apache::http::ProtocolException(_obj), ::org::apache::http::auth::AuthenticationException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    NTLMEngineException(const ::org::apache::http::impl::auth::NTLMEngineException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {obj = x.obj;}
    NTLMEngineException(::org::apache::http::impl::auth::NTLMEngineException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0), ::org::apache::http::ProtocolException((jobject)0), ::org::apache::http::auth::AuthenticationException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::auth::NTLMEngineException& operator=(const ::org::apache::http::impl::auth::NTLMEngineException& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::auth::NTLMEngineException& operator=(::org::apache::http::impl::auth::NTLMEngineException&& x) {obj = std::move(x.obj); return *this;}
    
    NTLMEngineException();
    NTLMEngineException(const ::java::lang::String&);
    NTLMEngineException(const ::java::lang::String&, const ::java::lang::Throwable&);

};
}
}
}
}
}


