#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpException.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { class HttpResponse; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class TunnelRefusedException : public virtual ::java::lang::Object,
                               public virtual ::org::apache::http::HttpException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TunnelRefusedException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::org::apache::http::HttpException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TunnelRefusedException(const ::org::apache::http::impl::client::TunnelRefusedException& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {obj = x.obj;}
    TunnelRefusedException(::org::apache::http::impl::client::TunnelRefusedException&& x) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::org::apache::http::HttpException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::TunnelRefusedException& operator=(const ::org::apache::http::impl::client::TunnelRefusedException& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::TunnelRefusedException& operator=(::org::apache::http::impl::client::TunnelRefusedException&& x) {obj = std::move(x.obj); return *this;}
    
    TunnelRefusedException(const ::java::lang::String&, const ::org::apache::http::HttpResponse&);
    ::org::apache::http::HttpResponse getResponse() const;

};
}
}
}
}
}


