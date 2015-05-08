#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.HttpTransportMetrics.hpp"


namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class HttpTransportMetricsImpl : public virtual ::java::lang::Object,
                                 public virtual ::org::apache::http::io::HttpTransportMetrics {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpTransportMetricsImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::HttpTransportMetrics(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpTransportMetricsImpl(const ::org::apache::http::impl::io::HttpTransportMetricsImpl& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpTransportMetrics((jobject)0) {obj = x.obj;}
    HttpTransportMetricsImpl(::org::apache::http::impl::io::HttpTransportMetricsImpl&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::HttpTransportMetrics((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::HttpTransportMetricsImpl& operator=(const ::org::apache::http::impl::io::HttpTransportMetricsImpl& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::HttpTransportMetricsImpl& operator=(::org::apache::http::impl::io::HttpTransportMetricsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    HttpTransportMetricsImpl();
    int64_t getBytesTransferred() const ;
    void setBytesTransferred(int64_t) const ;
    void incrementBytesTransferred(int64_t) const ;
    void reset() const ;

};
}
}
}
}
}


