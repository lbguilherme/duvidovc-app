#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ConnectionReleaseTrigger; } } } }

namespace org {
namespace apache {
namespace http {
namespace client {
namespace methods {
class AbortableHttpRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbortableHttpRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbortableHttpRequest(const ::org::apache::http::client::methods::AbortableHttpRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AbortableHttpRequest(::org::apache::http::client::methods::AbortableHttpRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::client::methods::AbortableHttpRequest& operator=(const ::org::apache::http::client::methods::AbortableHttpRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::client::methods::AbortableHttpRequest& operator=(::org::apache::http::client::methods::AbortableHttpRequest&& x) {obj = std::move(x.obj); return *this;}
    
    void setConnectionRequest(const ::org::apache::http::conn::ClientConnectionRequest&) const ;
    void setReleaseTrigger(const ::org::apache::http::conn::ConnectionReleaseTrigger&) const ;
    void abort() const ;

};
}
}
}
}
}


