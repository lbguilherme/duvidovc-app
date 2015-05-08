#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.ZipInputStream.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace util { namespace jar { class JarEntry; } } }
namespace java { namespace util { namespace jar { class Manifest; } } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace jar {
class JarInputStream : public virtual ::java::lang::Object,
                       public virtual ::java::util::zip::ZipInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj), ::java::util::zip::InflaterInputStream(_obj), ::java::util::zip::ZipInputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarInputStream(const ::java::util::jar::JarInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0), ::java::util::zip::ZipInputStream((jobject)0) {obj = x.obj;}
    JarInputStream(::java::util::jar::JarInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0), ::java::util::zip::InflaterInputStream((jobject)0), ::java::util::zip::ZipInputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::JarInputStream& operator=(const ::java::util::jar::JarInputStream& x) {obj = x.obj; return *this;}
    ::java::util::jar::JarInputStream& operator=(::java::util::jar::JarInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    JarInputStream(const ::java::io::InputStream&, bool);
    JarInputStream(const ::java::io::InputStream&);
    ::java::util::jar::Manifest getManifest() const ;
    ::java::util::jar::JarEntry getNextJarEntry() const ;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const ;
    ::java::util::zip::ZipEntry getNextEntry() const ;

};
}
}
}


