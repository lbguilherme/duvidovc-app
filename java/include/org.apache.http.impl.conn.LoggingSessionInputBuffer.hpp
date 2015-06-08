#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace impl { namespace conn { class Wire; } } } } }
namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } }
namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace conn {
class LoggingSessionInputBuffer : public virtual ::java::lang::Object,
                                  public virtual ::org::apache::http::io::SessionInputBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit LoggingSessionInputBuffer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::SessionInputBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    LoggingSessionInputBuffer(const ::org::apache::http::impl::conn::LoggingSessionInputBuffer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj;}
    LoggingSessionInputBuffer(::org::apache::http::impl::conn::LoggingSessionInputBuffer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::conn::LoggingSessionInputBuffer& operator=(const ::org::apache::http::impl::conn::LoggingSessionInputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::conn::LoggingSessionInputBuffer& operator=(::org::apache::http::impl::conn::LoggingSessionInputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    LoggingSessionInputBuffer(const ::org::apache::http::io::SessionInputBuffer&, const ::org::apache::http::impl::conn::Wire&);
    bool isDataAvailable(int32_t) const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&) const;
    ::java::lang::String readLine() const;
    int32_t readLine(const ::org::apache::http::util::CharArrayBuffer&) const;
    ::org::apache::http::io::HttpTransportMetrics getMetrics() const;

};
}
}
}
}
}


