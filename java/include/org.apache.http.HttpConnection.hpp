#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } }

namespace org {
namespace apache {
namespace http {
class HttpConnection : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpConnection(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpConnection(const ::org::apache::http::HttpConnection& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpConnection(::org::apache::http::HttpConnection&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpConnection& operator=(const ::org::apache::http::HttpConnection& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpConnection& operator=(::org::apache::http::HttpConnection&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    bool isOpen() const ;
    bool isStale() const ;
    void setSocketTimeout(int32_t) const ;
    int32_t getSocketTimeout() const ;
    void shutdown() const ;
    ::org::apache::http::HttpConnectionMetrics getMetrics() const ;

};
}
}
}


