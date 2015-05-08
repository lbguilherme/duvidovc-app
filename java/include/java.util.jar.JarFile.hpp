#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.ZipFile.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { namespace jar { class JarEntry; } } }
namespace java { namespace util { namespace jar { class Manifest; } } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace jar {
class JarFile : public virtual ::java::lang::Object,
                public virtual ::java::util::zip::ZipFile {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarFile(jobject _obj) : ::java::lang::Object(_obj), ::java::util::zip::ZipFile(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarFile(const ::java::util::jar::JarFile& x) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {obj = x.obj;}
    JarFile(::java::util::jar::JarFile&& x) : ::java::lang::Object((jobject)0), ::java::util::zip::ZipFile((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::JarFile& operator=(const ::java::util::jar::JarFile& x) {obj = x.obj; return *this;}
    ::java::util::jar::JarFile& operator=(::java::util::jar::JarFile&& x) {obj = std::move(x.obj); return *this;}
    
    JarFile(const ::java::io::File&);
    JarFile(const ::java::io::File&, bool);
    JarFile(const ::java::io::File&, bool, int32_t);
    JarFile(const ::java::lang::String&);
    JarFile(const ::java::lang::String&, bool);
    ::java::util::Enumeration entries() const ;
    ::java::util::jar::JarEntry getJarEntry(const ::java::lang::String&) const ;
    ::java::util::jar::Manifest getManifest() const ;
    ::java::io::InputStream getInputStream(const ::java::util::zip::ZipEntry&) const ;
    ::java::util::zip::ZipEntry getEntry(const ::java::lang::String&) const ;
    void close() const ;

};
}
}
}


