#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } }
namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace io {
class SessionOutputBuffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SessionOutputBuffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SessionOutputBuffer(const ::org::apache::http::io::SessionOutputBuffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SessionOutputBuffer(::org::apache::http::io::SessionOutputBuffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::io::SessionOutputBuffer& operator=(const ::org::apache::http::io::SessionOutputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::io::SessionOutputBuffer& operator=(::org::apache::http::io::SessionOutputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(const std::vector< int8_t>&) const;
    void write(int32_t) const;
    void writeLine(const ::java::lang::String&) const;
    void writeLine(const ::org::apache::http::util::CharArrayBuffer&) const;
    void flush() const;
    ::org::apache::http::io::HttpTransportMetrics getMetrics() const;

};
}
}
}
}


