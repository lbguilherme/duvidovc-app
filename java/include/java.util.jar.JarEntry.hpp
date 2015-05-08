#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.ZipEntry.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace security { class CodeSigner; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { namespace jar { class Attributes; } } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace jar {
class JarEntry : public virtual ::java::lang::Object,
                 public virtual ::java::util::zip::ZipEntry {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarEntry(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Cloneable(_obj), ::java::util::zip::ZipEntry(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarEntry(const ::java::util::jar::JarEntry& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::zip::ZipEntry((jobject)0) {obj = x.obj;}
    JarEntry(::java::util::jar::JarEntry&& x) : ::java::lang::Object((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::zip::ZipEntry((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::JarEntry& operator=(const ::java::util::jar::JarEntry& x) {obj = x.obj; return *this;}
    ::java::util::jar::JarEntry& operator=(::java::util::jar::JarEntry&& x) {obj = std::move(x.obj); return *this;}
    
    JarEntry(const ::java::lang::String&);
    JarEntry(const ::java::util::zip::ZipEntry&);
    ::java::util::jar::Attributes getAttributes() const ;
    std::vector< ::java::security::cert::Certificate> getCertificates() const ;
    std::vector< ::java::security::CodeSigner> getCodeSigners() const ;

};
}
}
}


