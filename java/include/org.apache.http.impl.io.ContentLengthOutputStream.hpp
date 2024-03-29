#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStream.hpp"

namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class ContentLengthOutputStream : public virtual ::java::lang::Object,
                                  public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentLengthOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentLengthOutputStream(const ::org::apache::http::impl::io::ContentLengthOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ContentLengthOutputStream(::org::apache::http::impl::io::ContentLengthOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::ContentLengthOutputStream& operator=(const ::org::apache::http::impl::io::ContentLengthOutputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::ContentLengthOutputStream& operator=(::org::apache::http::impl::io::ContentLengthOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ContentLengthOutputStream(const ::org::apache::http::io::SessionOutputBuffer&, int64_t);
    void close() const;
    void flush() const;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const;
    void write(const std::vector< int8_t>&) const;
    void write(int32_t) const;

};
}
}
}
}
}


