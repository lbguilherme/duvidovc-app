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
class SessionInputBuffer : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SessionInputBuffer(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SessionInputBuffer(const ::org::apache::http::io::SessionInputBuffer& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SessionInputBuffer(::org::apache::http::io::SessionInputBuffer&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::io::SessionInputBuffer& operator=(const ::org::apache::http::io::SessionInputBuffer& x) {obj = x.obj; return *this;}
    ::org::apache::http::io::SessionInputBuffer& operator=(::org::apache::http::io::SessionInputBuffer&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t read(const std::vector< int8_t>&) const;
    int32_t read() const;
    int32_t readLine(const ::org::apache::http::util::CharArrayBuffer&) const;
    ::java::lang::String readLine() const;
    bool isDataAvailable(int32_t) const;
    ::org::apache::http::io::HttpTransportMetrics getMetrics() const;

};
}
}
}
}


