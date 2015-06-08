#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"

namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } }

namespace org {
namespace apache {
namespace http {
namespace impl {
namespace io {
class ContentLengthInputStream : public virtual ::java::lang::Object,
                                 public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentLengthInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentLengthInputStream(const ::org::apache::http::impl::io::ContentLengthInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    ContentLengthInputStream(::org::apache::http::impl::io::ContentLengthInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::org::apache::http::impl::io::ContentLengthInputStream& operator=(const ::org::apache::http::impl::io::ContentLengthInputStream& x) {obj = x.obj; return *this;}
    ::org::apache::http::impl::io::ContentLengthInputStream& operator=(::org::apache::http::impl::io::ContentLengthInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ContentLengthInputStream(const ::org::apache::http::io::SessionInputBuffer&, int64_t);
    void close() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int32_t read(const std::vector< int8_t>&) const;
    int64_t skip(int64_t) const;

};
}
}
}
}
}


