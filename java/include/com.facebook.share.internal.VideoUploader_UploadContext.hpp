#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace com {
namespace facebook {
namespace share {
namespace internal {
class VideoUploader_UploadContext : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit VideoUploader_UploadContext(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    VideoUploader_UploadContext(const ::com::facebook::share::internal::VideoUploader_UploadContext& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    VideoUploader_UploadContext(::com::facebook::share::internal::VideoUploader_UploadContext&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::share::internal::VideoUploader_UploadContext& operator=(const ::com::facebook::share::internal::VideoUploader_UploadContext& x) {obj = x.obj; return *this;}
    ::com::facebook::share::internal::VideoUploader_UploadContext& operator=(::com::facebook::share::internal::VideoUploader_UploadContext&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}
}


