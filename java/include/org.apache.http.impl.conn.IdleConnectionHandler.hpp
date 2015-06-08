#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class TimeUnit; } } }
namespace org { namespace apache { namespace http { class HttpConnection; } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class IdleConnectionHandler : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IdleConnectionHandler(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IdleConnectionHandler(const ::org::apache::http::impl::conn::IdleConnectionHandler& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IdleConnectionHandler(::org::apache::http::impl::conn::IdleConnectionHandler&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::IdleConnectionHandler& operator=(const ::org::apache::http::impl::conn::IdleConnectionHandler& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::IdleConnectionHandler& operator=(::org::apache::http::impl::conn::IdleConnectionHandler&& x) {obj = std::move(x.obj); return *this;}
    
    IdleConnectionHandler();
    void add(const ::org::apache::http::HttpConnection&, int64_t, const ::java::util::concurrent::TimeUnit&) const;
    bool remove(const ::org::apache::http::HttpConnection&) const;
    void removeAll() const;
    void closeIdleConnections(int64_t) const;
    void closeExpiredConnections() const;

};
}
}
}
}
}


