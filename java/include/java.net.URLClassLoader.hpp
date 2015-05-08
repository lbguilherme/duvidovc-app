#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.security.SecureClassLoader.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URL; } }
namespace java { namespace net { class URLClassLoader; } }
namespace java { namespace net { class URLStreamHandlerFactory; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace net {
class URLClassLoader : public virtual ::java::lang::Object,
                       public virtual ::java::security::SecureClassLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit URLClassLoader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ClassLoader(_obj), ::java::security::SecureClassLoader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    URLClassLoader(const ::java::net::URLClassLoader& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0), ::java::security::SecureClassLoader((jobject)0) {obj = x.obj;}
    URLClassLoader(::java::net::URLClassLoader&& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0), ::java::security::SecureClassLoader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::net::URLClassLoader& operator=(const ::java::net::URLClassLoader& x) {obj = x.obj; return *this;}
    ::java::net::URLClassLoader& operator=(::java::net::URLClassLoader&& x) {obj = std::move(x.obj); return *this;}
    
    URLClassLoader(const std::vector< ::java::net::URL>&);
    URLClassLoader(const std::vector< ::java::net::URL>&, const ::java::lang::ClassLoader&);
    URLClassLoader(const std::vector< ::java::net::URL>&, const ::java::lang::ClassLoader&, const ::java::net::URLStreamHandlerFactory&);
    ::java::util::Enumeration findResources(const ::java::lang::String&) const ;
    std::vector< ::java::net::URL> getURLs() const ;
    static ::java::net::URLClassLoader newInstance(const std::vector< ::java::net::URL>&);
    static ::java::net::URLClassLoader newInstance(const std::vector< ::java::net::URL>&, const ::java::lang::ClassLoader&);
    ::java::net::URL findResource(const ::java::lang::String&) const ;

};
}
}


