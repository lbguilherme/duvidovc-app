#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.lang.Runnable.hpp"


namespace com {
namespace facebook {
namespace internal {
class ImageDownloader_CacheReadWorkItem : public virtual ::java::lang::Object,
                                          public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageDownloader_CacheReadWorkItem(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageDownloader_CacheReadWorkItem(const ::com::facebook::internal::ImageDownloader_CacheReadWorkItem& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    ImageDownloader_CacheReadWorkItem(::com::facebook::internal::ImageDownloader_CacheReadWorkItem&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageDownloader_CacheReadWorkItem& operator=(const ::com::facebook::internal::ImageDownloader_CacheReadWorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageDownloader_CacheReadWorkItem& operator=(::com::facebook::internal::ImageDownloader_CacheReadWorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const ;

};
}
}
}


