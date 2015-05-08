#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.InflaterInputStream.hpp"

namespace java { namespace io { class InputStream; } }

namespace java {
namespace util {
namespace zip {
class GZIPInputStream : public virtual ::java::lang::Object,
                        public virtual ::java::util::zip::InflaterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit GZIPInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj), ::java::util::zip::InflaterInputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    GZIPInputStream(const ::java::util::zip::GZIPInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {obj = x.obj;}
    GZIPInputStream(::java::util::zip::GZIPInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::GZIPInputStream& operator=(const ::java::util::zip::GZIPInputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::GZIPInputStream& operator=(::java::util::zip::GZIPInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    GZIPInputStream(const ::java::io::InputStream&);
    GZIPInputStream(const ::java::io::InputStream&, int32_t);
    void close() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;

};
}
}
}


