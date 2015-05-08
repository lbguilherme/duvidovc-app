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
class IdentityOutputStream : public virtual ::java::lang::Object,
                             public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IdentityOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IdentityOutputStream(const ::org::apache::http::impl::io::IdentityOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    IdentityOutputStream(::org::apache::http::impl::io::IdentityOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::IdentityOutputStream& operator=(const ::org::apache::http::impl::io::IdentityOutputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::IdentityOutputStream& operator=(::org::apache::http::impl::io::IdentityOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    IdentityOutputStream(const ::org::apache::http::io::SessionOutputBuffer&);
    void close() const ;
    void flush() const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(const std::vector< int8_t>&) const ;
    void write(int32_t) const ;

};
}
}
}
}
}


