#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace internal {
class FileLruCache_BufferFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_BufferFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_BufferFile(const ::com::facebook::internal::FileLruCache_BufferFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileLruCache_BufferFile(::com::facebook::internal::FileLruCache_BufferFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_BufferFile& operator=(const ::com::facebook::internal::FileLruCache_BufferFile& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_BufferFile& operator=(::com::facebook::internal::FileLruCache_BufferFile&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


