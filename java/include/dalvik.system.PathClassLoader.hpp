#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "dalvik.system.BaseDexClassLoader.hpp"

namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }

namespace dalvik {
namespace system {
class PathClassLoader : public virtual ::java::lang::Object,
                        public virtual ::dalvik::system::BaseDexClassLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PathClassLoader(jobject _obj) : ::java::lang::Object(_obj), ::dalvik::system::BaseDexClassLoader(_obj), ::java::lang::ClassLoader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PathClassLoader(const ::dalvik::system::PathClassLoader& x) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj;}
    PathClassLoader(::dalvik::system::PathClassLoader&& x) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::system::PathClassLoader& operator=(const ::dalvik::system::PathClassLoader& x) {obj = x.obj; return *this;}
    ::dalvik::system::PathClassLoader& operator=(::dalvik::system::PathClassLoader&& x) {obj = std::move(x.obj); return *this;}
    
    PathClassLoader(const ::java::lang::String&, const ::java::lang::ClassLoader&);
    PathClassLoader(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::ClassLoader&);

};
}
}


