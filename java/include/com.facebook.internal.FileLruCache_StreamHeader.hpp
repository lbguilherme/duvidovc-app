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
class FileLruCache_StreamHeader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_StreamHeader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_StreamHeader(const ::com::facebook::internal::FileLruCache_StreamHeader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileLruCache_StreamHeader(::com::facebook::internal::FileLruCache_StreamHeader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_StreamHeader& operator=(const ::com::facebook::internal::FileLruCache_StreamHeader& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_StreamHeader& operator=(::com::facebook::internal::FileLruCache_StreamHeader&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


