#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.util.zip.ZipException.hpp"

namespace java { namespace lang { class String; } }

namespace java {
namespace util {
namespace jar {
class JarException : public virtual ::java::lang::Object,
                     public virtual ::java::util::zip::ZipException {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarException(jobject _obj) : ::java::lang::Object(_obj), ::java::io::IOException(_obj), ::java::io::Serializable(_obj), ::java::lang::Exception(_obj), ::java::lang::Throwable(_obj), ::java::util::zip::ZipException(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarException(const ::java::util::jar::JarException& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::zip::ZipException((jobject)0) {obj = x.obj;}
    JarException(::java::util::jar::JarException&& x) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::zip::ZipException((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::jar::JarException& operator=(const ::java::util::jar::JarException& x) {obj = x.obj; return *this;}
    ::java::util::jar::JarException& operator=(::java::util::jar::JarException&& x) {obj = std::move(x.obj); return *this;}
    
    JarException();
    JarException(const ::java::lang::String&);

};
}
}
}


