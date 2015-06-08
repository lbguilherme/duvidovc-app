#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "com.facebook.share.internal.VideoUploader_UploadWorkItemBase.hpp"

namespace android { namespace os { class Bundle; } }
namespace com { namespace facebook { namespace share { namespace internal { class VideoUploader_UploadContext; } } } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class VideoUploader_FinishUploadWorkItem : public virtual ::java::lang::Object,
                                           public virtual ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VideoUploader_FinishUploadWorkItem(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VideoUploader_FinishUploadWorkItem(const ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    VideoUploader_FinishUploadWorkItem(::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem& operator=(const ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem& operator=(::com::facebook::share::internal::VideoUploader_FinishUploadWorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    VideoUploader_FinishUploadWorkItem(const ::com::facebook::share::internal::VideoUploader_UploadContext&, int32_t);
    ::android::os::Bundle getParameters() const;

};
}
}
}
}


