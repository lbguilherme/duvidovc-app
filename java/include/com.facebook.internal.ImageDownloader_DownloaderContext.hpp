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
class ImageDownloader_DownloaderContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageDownloader_DownloaderContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageDownloader_DownloaderContext(const ::com::facebook::internal::ImageDownloader_DownloaderContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageDownloader_DownloaderContext(::com::facebook::internal::ImageDownloader_DownloaderContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageDownloader_DownloaderContext& operator=(const ::com::facebook::internal::ImageDownloader_DownloaderContext& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageDownloader_DownloaderContext& operator=(::com::facebook::internal::ImageDownloader_DownloaderContext&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


