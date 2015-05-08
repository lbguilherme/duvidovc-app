#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.OutputStream.hpp"


namespace com {
namespace facebook {
namespace internal {
class FileLruCache_CloseCallbackOutputStream : public virtual ::java::lang::Object,
                                               public virtual ::java::io::OutputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_CloseCallbackOutputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::Flushable(_obj), ::java::io::OutputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_CloseCallbackOutputStream(const ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj;}
    FileLruCache_CloseCallbackOutputStream(::com::facebook::internal::FileLruCache_CloseCallbackOutputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0), ::java::io::OutputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream& operator=(const ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_CloseCallbackOutputStream& operator=(::com::facebook::internal::FileLruCache_CloseCallbackOutputStream&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const ;
    void flush() const ;
    void write(const std::vector< int8_t>&, int32_t, int32_t) const ;
    void write(const std::vector< int8_t>&) const ;
    void write(int32_t) const ;

};
}
}
}


