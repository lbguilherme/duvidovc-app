#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace graphics { class Bitmap; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class ThumbnailUtils : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ThumbnailUtils(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ThumbnailUtils(const ::android::media::ThumbnailUtils& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ThumbnailUtils(::android::media::ThumbnailUtils&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::ThumbnailUtils& operator=(const ::android::media::ThumbnailUtils& x) {obj = x.obj; return *this;}
    ::android::media::ThumbnailUtils& operator=(::android::media::ThumbnailUtils&& x) {obj = std::move(x.obj); return *this;}
    
    ThumbnailUtils();
    static ::android::graphics::Bitmap createVideoThumbnail(const ::java::lang::String&, int32_t);
    static ::android::graphics::Bitmap extractThumbnail(const ::android::graphics::Bitmap&, int32_t, int32_t);
    static ::android::graphics::Bitmap extractThumbnail(const ::android::graphics::Bitmap&, int32_t, int32_t, int32_t);

};
}
}


