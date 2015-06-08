#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }

namespace org {
namespace apache {
namespace http {
class HttpConnectionMetrics : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit HttpConnectionMetrics(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    HttpConnectionMetrics(const ::org::apache::http::HttpConnectionMetrics& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    HttpConnectionMetrics(::org::apache::http::HttpConnectionMetrics&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::HttpConnectionMetrics& operator=(const ::org::apache::http::HttpConnectionMetrics& x) {obj = x.obj; return *this;}
    ::org::apache::http::HttpConnectionMetrics& operator=(::org::apache::http::HttpConnectionMetrics&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t getRequestCount() const;
    int64_t getResponseCount() const;
    int64_t getSentBytesCount() const;
    int64_t getReceivedBytesCount() const;
    ::java::lang::Object getMetric(const ::java::lang::String&) const;
    void reset() const;

};
}
}
}


