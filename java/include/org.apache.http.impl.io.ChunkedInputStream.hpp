#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace org { namespace apache { namespace http { class Header; } } }
namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class ChunkedInputStream : public virtual ::java::lang::Object,
                           public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ChunkedInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ChunkedInputStream(const ::org::apache::http::impl::io::ChunkedInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    ChunkedInputStream(::org::apache::http::impl::io::ChunkedInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::ChunkedInputStream& operator=(const ::org::apache::http::impl::io::ChunkedInputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::ChunkedInputStream& operator=(::org::apache::http::impl::io::ChunkedInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ChunkedInputStream(const ::org::apache::http::io::SessionInputBuffer&);
    int32_t read() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t read(const std::vector< int8_t>&) const ;
    void close() const ;
    std::vector< ::org::apache::http::Header> getFooters() const ;

};
}
}
}
}
}


