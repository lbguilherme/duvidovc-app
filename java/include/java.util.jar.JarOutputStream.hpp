#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.ZipOutputStream.hpp"

namespace java { namespace io { class OutputStream; } }
namespace java { namespace util { namespace jar { class Manifest; } } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace jar {
class JarOutputStream : public virtual ::java::lang::Object,
                        public virtual ::java::util::zip::ZipOutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::FilterOutputStream(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj), ::java::util::zip::DeflaterOutputStream(_obj), ::java::util::zip::ZipOutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarOutputStream(const ::java::util::jar::JarOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0), ::java::util::zip::ZipOutputStream((jobject)0) {obj = x.obj;}
    JarOutputStream(::java::util::jar::JarOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterOutputStream((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0), ::java::util::zip::DeflaterOutputStream((jobject)0), ::java::util::zip::ZipOutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::JarOutputStream& operator=(const ::java::util::jar::JarOutputStream& x) {obj = x.obj; return *this;}
    ::java::util::jar::JarOutputStream& operator=(::java::util::jar::JarOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    JarOutputStream(const ::java::io::OutputStream&, const ::java::util::jar::Manifest&);
    JarOutputStream(const ::java::io::OutputStream&);
    void putNextEntry(const ::java::util::zip::ZipEntry&) const ;

};
}
}
}


