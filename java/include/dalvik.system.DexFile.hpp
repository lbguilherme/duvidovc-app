#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace dalvik { namespace system { class DexFile; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class ClassLoader; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class Enumeration; } }

namespace dalvik {
namespace system {
class DexFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DexFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DexFile(const ::dalvik::system::DexFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DexFile(::dalvik::system::DexFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::dalvik::system::DexFile& operator=(const ::dalvik::system::DexFile& x) {obj = x.obj; return *this;}
    ::dalvik::system::DexFile& operator=(::dalvik::system::DexFile&& x) {obj = std::move(x.obj); return *this;}
    
    DexFile(const ::java::io::File&);
    DexFile(const ::java::lang::String&);
    static ::dalvik::system::DexFile loadDex(const ::java::lang::String&, const ::java::lang::String&, int32_t);
    ::java::lang::String getName() const ;
    void close() const ;
    ::java::lang::Class loadClass(const ::java::lang::String&, const ::java::lang::ClassLoader&) const ;
    ::java::util::Enumeration entries() const ;
    static bool isDexOptNeeded(const ::java::lang::String&);

};
}
}


