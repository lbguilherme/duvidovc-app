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
class ImageDownloader_DownloadImageWorkItem : public virtual ::java::lang::Object,
                                              public virtual ::java::lang::Runnable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageDownloader_DownloadImageWorkItem(jobject _obj) : ::java::lang::Object(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageDownloader_DownloadImageWorkItem(const ::com::facebook::internal::ImageDownloader_DownloadImageWorkItem& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    ImageDownloader_DownloadImageWorkItem(::com::facebook::internal::ImageDownloader_DownloadImageWorkItem&& x) : ::java::lang::Object((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageDownloader_DownloadImageWorkItem& operator=(const ::com::facebook::internal::ImageDownloader_DownloadImageWorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageDownloader_DownloadImageWorkItem& operator=(::com::facebook::internal::ImageDownloader_DownloadImageWorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    void run() const ;

};
}
}
}


