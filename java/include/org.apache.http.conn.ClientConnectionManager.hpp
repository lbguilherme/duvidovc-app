#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionRequest; } } } }
namespace org { namespace apache { namespace http { namespace conn { class ManagedClientConnection; } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } }
namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } }

namespace org {
namespace apache {
namespace http {
namespace conn {
class ClientConnectionManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClientConnectionManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClientConnectionManager(const ::org::apache::http::conn::ClientConnectionManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClientConnectionManager(::org::apache::http::conn::ClientConnectionManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::conn::ClientConnectionManager& operator=(const ::org::apache::http::conn::ClientConnectionManager& x) {obj = x.obj; return *this;}
    ::org::apache::http::conn::ClientConnectionManager& operator=(::org::apache::http::conn::ClientConnectionManager&& x) {obj = std::move(x.obj); return *this;}
    
    ::org::apache::http::conn::scheme::SchemeRegistry getSchemeRegistry() const ;
    ::org::apache::http::conn::ClientConnectionRequest requestConnection(const ::org::apache::http::conn::routing::HttpRoute&, const ::java::lang::Object&) const ;
    void releaseConnection(const ::org::apache::http::conn::ManagedClientConnection&, int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void closeIdleConnections(int64_t, const ::java::util::concurrent::TimeUnit&) const ;
    void closeExpiredConnections() const ;
    void shutdown() const ;

};
}
}
}
}


