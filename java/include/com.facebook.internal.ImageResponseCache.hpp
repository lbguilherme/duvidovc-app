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
class ImageResponseCache : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageResponseCache(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageResponseCache(const ::com::facebook::internal::ImageResponseCache& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageResponseCache(::com::facebook::internal::ImageResponseCache&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageResponseCache& operator=(const ::com::facebook::internal::ImageResponseCache& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageResponseCache& operator=(::com::facebook::internal::ImageResponseCache&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}

#include "com.facebook.internal.ImageResponseCache_BufferedHttpInputStream.hpp"

