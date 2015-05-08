#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpEntityEnclosingRequest.hpp"
#include "org.apache.http.impl.client.RequestWrapper.hpp"

namespace org { namespace apache { namespace http { class HttpEntity; } } }
namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace client {
class EntityEnclosingRequestWrapper : public virtual ::java::lang::Object,
                                      public virtual ::org::apache::http::HttpEntityEnclosingRequest,
                                      public virtual ::org::apache::http::impl::client::RequestWrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit EntityEnclosingRequestWrapper(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpEntityEnclosingRequest(_obj), ::org::apache::http::HttpMessage(_obj), ::org::apache::http::HttpRequest(_obj), ::org::apache::http::client::methods::HttpUriRequest(_obj), ::org::apache::http::impl::client::RequestWrapper(_obj), ::org::apache::http::message::AbstractHttpMessage(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    EntityEnclosingRequestWrapper(const ::org::apache::http::impl::client::EntityEnclosingRequestWrapper& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::impl::client::RequestWrapper((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj;}
    EntityEnclosingRequestWrapper(::org::apache::http::impl::client::EntityEnclosingRequestWrapper&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpEntityEnclosingRequest((jobject)0), ::org::apache::http::HttpMessage((jobject)0), ::org::apache::http::HttpRequest((jobject)0), ::org::apache::http::client::methods::HttpUriRequest((jobject)0), ::org::apache::http::impl::client::RequestWrapper((jobject)0), ::org::apache::http::message::AbstractHttpMessage((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::client::EntityEnclosingRequestWrapper& operator=(const ::org::apache::http::impl::client::EntityEnclosingRequestWrapper& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::client::EntityEnclosingRequestWrapper& operator=(::org::apache::http::impl::client::EntityEnclosingRequestWrapper&& x) {obj = std::move(x.obj); return *this;}
    
    EntityEnclosingRequestWrapper(const ::org::apache::http::HttpEntityEnclosingRequest&);
    ::org::apache::http::HttpEntity getEntity() const ;
    void setEntity(const ::org::apache::http::HttpEntity&) const ;
    bool expectContinue() const ;
    bool isRepeatable() const ;

};
}
}
}
}
}


