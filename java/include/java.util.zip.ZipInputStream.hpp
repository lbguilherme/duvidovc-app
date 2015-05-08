#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.InflaterInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace zip {
class ZipInputStream : public virtual ::java::lang::Object,
                       public virtual ::java::util::zip::InflaterInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZipInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj), ::java::util::zip::InflaterInputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZipInputStream(const ::java::util::zip::ZipInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {obj = x.obj;}
    ZipInputStream(::java::util::zip::ZipInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::ZipInputStream& operator=(const ::java::util::zip::ZipInputStream& x) {obj = x.obj; return *this;}
    ::java::util::zip::ZipInputStream& operator=(::java::util::zip::ZipInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    ZipInputStream(const ::java::io::InputStream&);
    void close() const ;
    void closeEntry() const ;
    ::java::util::zip::ZipEntry getNextEntry() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    int32_t available() const ;

};
}
}
}


