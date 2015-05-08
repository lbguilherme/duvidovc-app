#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.net.URLConnection.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace net { class URL; } }
namespace java { namespace security { namespace cert { class Certificate; } } }
namespace java { namespace util { namespace jar { class Attributes; } } }
namespace java { namespace util { namespace jar { class JarEntry; } } }
namespace java { namespace util { namespace jar { class JarFile; } } }
namespace java { namespace util { namespace jar { class Manifest; } } }

namespace java {
namespace net {
class JarURLConnection : public virtual ::java::lang::Object,
                         public virtual ::java::net::URLConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit JarURLConnection(jobject _obj) : ::java::lang::Object(_obj), ::java::net::URLConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    JarURLConnection(const ::java::net::JarURLConnection& x) : ::java::lang::Object((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj;}
    JarURLConnection(::java::net::JarURLConnection&& x) : ::java::lang::Object((jobject)0), ::java::net::URLConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::JarURLConnection& operator=(const ::java::net::JarURLConnection& x) {obj = x.obj; return *this;}
    ::java::net::JarURLConnection& operator=(::java::net::JarURLConnection&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::util::jar::Attributes getAttributes() const ;
    std::vector< ::java::security::cert::Certificate> getCertificates() const ;
    ::java::lang::String getEntryName() const ;
    ::java::util::jar::JarEntry getJarEntry() const ;
    ::java::util::jar::Manifest getManifest() const ;
    ::java::util::jar::JarFile getJarFile() const ;
    ::java::net::URL getJarFileURL() const ;
    ::java::util::jar::Attributes getMainAttributes() const ;

};
}
}


