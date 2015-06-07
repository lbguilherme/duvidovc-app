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
namespace java { namespace lang { class String; } }

namespace com {
namespace facebook {
namespace share {
namespace internal {
class VideoUploader_TransferChunkWorkItem : public virtual ::java::lang::Object,
                                            public virtual ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VideoUploader_TransferChunkWorkItem(jobject _obj) : ::java::lang::Object(_obj), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase(_obj), ::java::lang::Runnable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VideoUploader_TransferChunkWorkItem(const ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj;}
    VideoUploader_TransferChunkWorkItem(::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem&& x) : ::java::lang::Object((jobject)0), ::com::facebook::share::internal::VideoUploader_UploadWorkItemBase((jobject)0), ::java::lang::Runnable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem& operator=(const ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem& operator=(::com::facebook::share::internal::VideoUploader_TransferChunkWorkItem&& x) {obj = std::move(x.obj); return *this;}
    
    VideoUploader_TransferChunkWorkItem(const ::com::facebook::share::internal::VideoUploader_UploadContext&, const ::java::lang::String&, const ::java::lang::String&, int32_t);
    ::android::os::Bundle getParameters() const ;

};
}
}
}
}


