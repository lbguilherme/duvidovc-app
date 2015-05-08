#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class InputStream; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace net { class URL; } }
namespace java { namespace util { class Enumeration; } }

namespace java {
namespace lang {
class ClassLoader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ClassLoader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ClassLoader(const ::java::lang::ClassLoader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ClassLoader(::java::lang::ClassLoader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::lang::ClassLoader& operator=(const ::java::lang::ClassLoader& x) {obj = x.obj; return *this;}
    ::java::lang::ClassLoader& operator=(::java::lang::ClassLoader&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::lang::ClassLoader getSystemClassLoader();
    static ::java::net::URL getSystemResource(const ::java::lang::String&);
    static ::java::util::Enumeration getSystemResources(const ::java::lang::String&);
    static ::java::io::InputStream getSystemResourceAsStream(const ::java::lang::String&);
    ::java::lang::ClassLoader getParent() const ;
    ::java::net::URL getResource(const ::java::lang::String&) const ;
    ::java::util::Enumeration getResources(const ::java::lang::String&) const ;
    ::java::io::InputStream getResourceAsStream(const ::java::lang::String&) const ;
    ::java::lang::Class loadClass(const ::java::lang::String&) const ;
    void setClassAssertionStatus(const ::java::lang::String&, bool) const ;
    void setPackageAssertionStatus(const ::java::lang::String&, bool) const ;
    void setDefaultAssertionStatus(bool) const ;
    void clearAssertionStatus() const ;

};
}
}


