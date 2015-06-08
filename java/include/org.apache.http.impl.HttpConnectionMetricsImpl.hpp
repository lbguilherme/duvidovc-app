#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.HttpConnectionMetrics.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
class HttpConnectionMetricsImpl : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::HttpConnectionMetrics {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpConnectionMetricsImpl(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::HttpConnectionMetrics(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpConnectionMetricsImpl(const ::org::apache::http::impl::HttpConnectionMetricsImpl& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnectionMetrics((jobject)0) {obj = x.obj;}
    HttpConnectionMetricsImpl(::org::apache::http::impl::HttpConnectionMetricsImpl&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::HttpConnectionMetrics((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::HttpConnectionMetricsImpl& operator=(const ::org::apache::http::impl::HttpConnectionMetricsImpl& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::HttpConnectionMetricsImpl& operator=(::org::apache::http::impl::HttpConnectionMetricsImpl&& x) {obj = std::move(x.obj); return *this;}
    
    HttpConnectionMetricsImpl(const ::org::apache::http::io::HttpTransportMetrics&, const ::org::apache::http::io::HttpTransportMetrics&);
    int64_t getReceivedBytesCount() const;
    int64_t getSentBytesCount() const;
    int64_t getRequestCount() const;
    void incrementRequestCount() const;
    int64_t getResponseCount() const;
    void incrementResponseCount() const;
    ::java::lang::Object getMetric(const ::java::lang::String&) const;
    void setMetric(const ::java::lang::String&, const ::java::lang::Object&) const;
    void reset() const;

};
}
}
}
}


