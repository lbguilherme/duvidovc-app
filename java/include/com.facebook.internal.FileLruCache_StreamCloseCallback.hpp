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
class FileLruCache_StreamCloseCallback : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_StreamCloseCallback(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_StreamCloseCallback(const ::com::facebook::internal::FileLruCache_StreamCloseCallback& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileLruCache_StreamCloseCallback(::com::facebook::internal::FileLruCache_StreamCloseCallback&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_StreamCloseCallback& operator=(const ::com::facebook::internal::FileLruCache_StreamCloseCallback& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_StreamCloseCallback& operator=(::com::facebook::internal::FileLruCache_StreamCloseCallback&& x) {obj = std::move(x.obj); return *this;}
    
    void onClose() const;

};
}
}
}


