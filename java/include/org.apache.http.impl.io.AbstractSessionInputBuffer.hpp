#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.SessionInputBuffer.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class AbstractSessionInputBuffer : public virtual ::java::lang::Object,
                                   public virtual ::org::apache::http::io::SessionInputBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSessionInputBuffer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::SessionInputBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSessionInputBuffer(const ::org::apache::http::impl::io::AbstractSessionInputBuffer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj;}
    AbstractSessionInputBuffer(::org::apache::http::impl::io::AbstractSessionInputBuffer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionInputBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::AbstractSessionInputBuffer& operator=(const ::org::apache::http::impl::io::AbstractSessionInputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::AbstractSessionInputBuffer& operator=(::org::apache::http::impl::io::AbstractSessionInputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractSessionInputBuffer();
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t read(const std::vector< int8_t>&) const ;
    int32_t readLine(const ::org::apache::http::util::CharArrayBuffer&) const ;
    ::java::lang::String readLine() const ;
    ::org::apache::http::io::HttpTransportMetrics getMetrics() const ;

};
}
}
}
}
}


