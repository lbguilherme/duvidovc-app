#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace com { namespace facebook { class FacebookCallback; } }
namespace com { namespace facebook { namespace share { namespace model { class ShareVideoContent; } } } }
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class VideoUploader : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VideoUploader(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VideoUploader(const ::com::facebook::share::internal::VideoUploader& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VideoUploader(::com::facebook::share::internal::VideoUploader&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::VideoUploader& operator=(const ::com::facebook::share::internal::VideoUploader& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::VideoUploader& operator=(::com::facebook::share::internal::VideoUploader&& x) {obj = std::move(x.obj); return *this;}
    
    VideoUploader();
    static void uploadAsync(const ::com::facebook::share::model::ShareVideoContent&, const ::com::facebook::FacebookCallback&);
    static void uploadAsync(const ::com::facebook::share::model::ShareVideoContent&, const ::java::lang::String&, const ::com::facebook::FacebookCallback&);

};
}
}
}
}

#include "com.facebook.share.internal.VideoUploader_FinishUploadWorkItem.hpp"
#include "com.facebook.share.internal.VideoUploader_StartUploadWorkItem.hpp"
#include "com.facebook.share.internal.VideoUploader_TransferChunkWorkItem.hpp"
#include "com.facebook.share.internal.VideoUploader_UploadContext.hpp"
#include "com.facebook.share.internal.VideoUploader_UploadWorkItemBase.hpp"

