#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace nio { namespace channels { class FileChannel; } } }

namespace java {
namespace nio {
namespace channels {
class FileLock : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLock(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLock(const ::java::nio::channels::FileLock& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileLock(::java::nio::channels::FileLock&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::nio::channels::FileLock& operator=(const ::java::nio::channels::FileLock& x) {obj = x.obj; return *this;}
    ::java::nio::channels::FileLock& operator=(::java::nio::channels::FileLock&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::nio::channels::FileChannel channel() const ;
    int64_t position() const ;
    int64_t size() const ;
    bool isShared() const ;
    bool overlaps(int64_t, int64_t) const ;
    bool isValid() const ;
    void release() const ;
    ::java::lang::String toString() const ;

};
}
}
}


