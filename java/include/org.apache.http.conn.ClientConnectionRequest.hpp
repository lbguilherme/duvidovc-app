#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ClientConnectionRequest : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientConnectionRequest(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientConnectionRequest(const ::org::apache::http::conn::ClientConnectionRequest& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientConnectionRequest(::org::apache::http::conn::ClientConnectionRequest&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ClientConnectionRequest& operator=(const ::org::apache::http::conn::ClientConnectionRequest& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ClientConnectionRequest& operator=(::org::apache::http::conn::ClientConnectionRequest&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::conn::ManagedClientConnection getConnection(int64_t, const ::java::util::concurrent::TimeUnit&) const;
    void abortRequest() const;

};
}
}
}
}


