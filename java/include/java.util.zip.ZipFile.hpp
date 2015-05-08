#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { namespace zip { class ZipEntry; } } }

namespace java {
namespace util {
namespace zip {
class ZipFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ZipFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ZipFile(const ::java::util::zip::ZipFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ZipFile(::java::util::zip::ZipFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::zip::ZipFile& operator=(const ::java::util::zip::ZipFile& x) {obj = x.obj; return *this;}
    ::java::util::zip::ZipFile& operator=(::java::util::zip::ZipFile&& x) {obj = std::move(x.obj); return *this;}
    
    ZipFile(const ::java::io::File&);
    ZipFile(const ::java::io::File&, int32_t);
    ZipFile(const ::java::lang::String&);
    void close() const ;
    ::java::util::Enumeration entries() const ;
    ::java::util::zip::ZipEntry getEntry(const ::java::lang::String&) const ;
    ::java::io::InputStream getInputStream(const ::java::util::zip::ZipEntry&) const ;
    ::java::lang::String getName() const ;
    int32_t size() const ;

};
}
}
}


