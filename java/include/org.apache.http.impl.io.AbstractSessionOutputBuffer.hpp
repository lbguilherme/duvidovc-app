#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "org.apache.http.io.SessionOutputBuffer.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class AbstractSessionOutputBuffer : public virtual ::java::lang::Object,
                                    public virtual ::org::apache::http::io::SessionOutputBuffer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AbstractSessionOutputBuffer(jobject _obj) : ::java::lang::Object(_obj), ::org::apache::http::io::SessionOutputBuffer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AbstractSessionOutputBuffer(const ::org::apache::http::impl::io::AbstractSessionOutputBuffer& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {obj = x.obj;}
    AbstractSessionOutputBuffer(::org::apache::http::impl::io::AbstractSessionOutputBuffer&& x) : ::java::lang::Object((jobject)0), ::org::apache::http::io::SessionOutputBuffer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::AbstractSessionOutputBuffer& operator=(const ::org::apache::http::impl::io::AbstractSessionOutputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::AbstractSessionOutputBuffer& operator=(::org::apache::http::impl::io::AbstractSessionOutputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    AbstractSessionOutputBuffer();
    void flush() const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(const std::vector< int8_t>&) const;
    void write(int32_t) const;
    void writeLine(const ::java::lang::String&) const;
    void writeLine(const ::org::apache::http::util::CharArrayBuffer&) const;
    ::org::apache::http::io::HttpTransportMetrics getMetrics() const;

};
}
}
}
}
}


