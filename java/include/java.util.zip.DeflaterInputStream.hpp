#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.FilterInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { namespace zip { class Deflater; } } }

namespace java {
namespace util {
namespace zip {
class DeflaterInputStream : public virtual ::java::lang::Object,
                            public virtual ::java::io::FilterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DeflaterInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DeflaterInputStream(const ::java::util::zip::DeflaterInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    DeflaterInputStream(::java::util::zip::DeflaterInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::DeflaterInputStream& operator=(const ::java::util::zip::DeflaterInputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::DeflaterInputStream& operator=(::java::util::zip::DeflaterInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    DeflaterInputStream(const ::java::io::InputStream&);
    DeflaterInputStream(const ::java::io::InputStream&, const ::java::util::zip::Deflater&);
    DeflaterInputStream(const ::java::io::InputStream&, const ::java::util::zip::Deflater&, int32_t);
    void close() const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    int64_t skip(int64_t) const;
    int32_t available() const;
    bool markSupported() const;
    void mark(int32_t) const;
    void reset() const;

};
}
}
}


