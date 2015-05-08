#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Video_Thumbnails : public virtual ::java::lang::Object,
                                    public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Video_Thumbnails(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Video_Thumbnails(const ::android::provider::MediaStore_Video_Thumbnails& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    MediaStore_Video_Thumbnails(::android::provider::MediaStore_Video_Thumbnails&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Video_Thumbnails& operator=(const ::android::provider::MediaStore_Video_Thumbnails& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Video_Thumbnails& operator=(::android::provider::MediaStore_Video_Thumbnails&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Video_Thumbnails();
    static void cancelThumbnailRequest(const ::android::content::ContentResolver&, int64_t);
    static ::android::graphics::Bitmap getThumbnail(const ::android::content::ContentResolver&, int64_t, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static ::android::graphics::Bitmap getThumbnail(const ::android::content::ContentResolver&, int64_t, int64_t, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static void cancelThumbnailRequest(const ::android::content::ContentResolver&, int64_t, int64_t);
    static ::android::net::Uri getContentUri(const ::java::lang::String&);

};
}
}


