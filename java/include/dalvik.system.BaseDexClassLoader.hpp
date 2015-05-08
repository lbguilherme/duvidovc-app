#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.ClassLoader.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }

namespace dalvik {
namespace system {
class BaseDexClassLoader : public virtual ::java::lang::Object,
                           public virtual ::java::lang::ClassLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit BaseDexClassLoader(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::ClassLoader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    BaseDexClassLoader(const ::dalvik::system::BaseDexClassLoader& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj;}
    BaseDexClassLoader(::dalvik::system::BaseDexClassLoader&& x) : ::java::lang::Object((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::system::BaseDexClassLoader& operator=(const ::dalvik::system::BaseDexClassLoader& x) {obj = x.obj; return *this;}
    ::dalvik::system::BaseDexClassLoader& operator=(::dalvik::system::BaseDexClassLoader&& x) {obj = std::move(x.obj); return *this;}
    
    BaseDexClassLoader(const ::java::lang::String&, const ::java::io::File&, const ::java::lang::String&, const ::java::lang::ClassLoader&);
    ::java::lang::String findLibrary(const ::java::lang::String&) const ;
    ::java::lang::String toString() const ;

};
}
}


