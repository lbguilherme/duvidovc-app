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
class DexClassLoader : public virtual ::java::lang::Object,
                       public virtual ::dalvik::system::BaseDexClassLoader {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DexClassLoader(jobject _obj) : ::java::lang::Object(_obj), ::dalvik::system::BaseDexClassLoader(_obj), ::java::lang::ClassLoader(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DexClassLoader(const ::dalvik::system::DexClassLoader& x) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj;}
    DexClassLoader(::dalvik::system::DexClassLoader&& x) : ::java::lang::Object((jobject)0), ::dalvik::system::BaseDexClassLoader((jobject)0), ::java::lang::ClassLoader((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::system::DexClassLoader& operator=(const ::dalvik::system::DexClassLoader& x) {obj = x.obj; return *this;}
    ::dalvik::system::DexClassLoader& operator=(::dalvik::system::DexClassLoader&& x) {obj = std::move(x.obj); return *this;}
    
    DexClassLoader(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::ClassLoader&);

};
}
}


