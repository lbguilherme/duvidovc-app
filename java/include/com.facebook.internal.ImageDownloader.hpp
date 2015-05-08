#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace com { namespace facebook { namespace internal { class ImageRequest; } } }

namespace com {
namespace facebook {
namespace internal {
class ImageDownloader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ImageDownloader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ImageDownloader(const ::com::facebook::internal::ImageDownloader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ImageDownloader(::com::facebook::internal::ImageDownloader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::internal::ImageDownloader& operator=(const ::com::facebook::internal::ImageDownloader& x) {obj = x.obj; return *this;}
    ::com::facebook::internal::ImageDownloader& operator=(::com::facebook::internal::ImageDownloader&& x) {obj = std::move(x.obj); return *this;}
    
    ImageDownloader();
    static void downloadAsync(const ::com::facebook::internal::ImageRequest&);
    static bool cancelRequest(const ::com::facebook::internal::ImageRequest&);
    static void prioritizeRequest(const ::com::facebook::internal::ImageRequest&);
    static void clearCache(const ::android::content::Context&);

};
}
}
}

#include "com.facebook.internal.ImageDownloader_CacheReadWorkItem.hpp"
#include "com.facebook.internal.ImageDownloader_DownloadImageWorkItem.hpp"
#include "com.facebook.internal.ImageDownloader_DownloaderContext.hpp"
#include "com.facebook.internal.ImageDownloader_RequestKey.hpp"

