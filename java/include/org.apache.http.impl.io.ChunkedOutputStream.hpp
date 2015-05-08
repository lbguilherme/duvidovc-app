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
class ChunkedOutputStream : public virtual ::java::lang::Object,
                            public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ChunkedOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ChunkedOutputStream(const ::org::apache::http::impl::io::ChunkedOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    ChunkedOutputStream(::org::apache::http::impl::io::ChunkedOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::ChunkedOutputStream& operator=(const ::org::apache::http::impl::io::ChunkedOutputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::ChunkedOutputStream& operator=(::org::apache::http::impl::io::ChunkedOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ChunkedOutputStream(const ::org::apache::http::io::SessionOutputBuffer&, int32_t);
    ChunkedOutputStream(const ::org::apache::http::io::SessionOutputBuffer&);
    void finish() const ;
    void write(int32_t) const ;
    void write(const std::vector< int8_t>&) const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void flush() const ;
    void close() const ;

};
}
}
}
}
}


