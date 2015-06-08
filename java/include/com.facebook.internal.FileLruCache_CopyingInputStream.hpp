#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.InputStream.hpp"


namespace com {
namespace facebook {
namespace internal {
class FileLruCache_CopyingInputStream : public virtual ::java::lang::Object,
                                        public virtual ::java::io::InputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileLruCache_CopyingInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::Closeable(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileLruCache_CopyingInputStream(const ::com::facebook::internal::FileLruCache_CopyingInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    FileLruCache_CopyingInputStream(::com::facebook::internal::FileLruCache_CopyingInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::FileLruCache_CopyingInputStream& operator=(const ::com::facebook::internal::FileLruCache_CopyingInputStream& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::FileLruCache_CopyingInputStream& operator=(::com::facebook::internal::FileLruCache_CopyingInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    int32_t available() const;
    void close() const;
    void mark(int32_t) const;
    bool markSupported() const;
    int32_t read(const std::vector< int8_t>&) const;
    int32_t read() const;
    int32_t read(const std::vector< int8_t>&, int32_t, int32_t) const;
    void reset() const;
    int64_t skip(int64_t) const;

};
}
}
}


