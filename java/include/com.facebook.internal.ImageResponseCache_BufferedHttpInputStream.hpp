#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.io.BufferedInputStream.hpp"


namespace com {
namespace facebook {
namespace internal {
class ImageResponseCache_BufferedHttpInputStream : public virtual ::java::lang::Object,
                                                   public virtual ::java::io::BufferedInputStream {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageResponseCache_BufferedHttpInputStream(jobject _obj) : ::java::lang::Object(_obj), ::java::io::BufferedInputStream(_obj), ::java::io::Closeable(_obj), ::java::io::FilterInputStream(_obj), ::java::io::InputStream(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageResponseCache_BufferedHttpInputStream(const ::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream& x) : ::java::lang::Object((jobject)0), ::java::io::BufferedInputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj;}
    ImageResponseCache_BufferedHttpInputStream(::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream&& x) : ::java::lang::Object((jobject)0), ::java::io::BufferedInputStream((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::FilterInputStream((jobject)0), ::java::io::InputStream((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream& operator=(const ::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream& operator=(::com::facebook::internal::ImageResponseCache_BufferedHttpInputStream&& x) {obj = std::move(x.obj); return *this;}
    
    void close() const;

};
}
}
}


