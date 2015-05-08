#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace graphics { class BitmapFactory_Options; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Images_Thumbnails : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Images_Thumbnails(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Images_Thumbnails(const ::android::provider::MediaStore_Images_Thumbnails& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    MediaStore_Images_Thumbnails(::android::provider::MediaStore_Images_Thumbnails&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Images_Thumbnails& operator=(const ::android::provider::MediaStore_Images_Thumbnails& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Images_Thumbnails& operator=(::android::provider::MediaStore_Images_Thumbnails&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Images_Thumbnails();
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&);
    static ::android::database::Cursor queryMiniThumbnails(const ::android::content::ContentResolver&, const ::android::net::Uri&, int32_t, const std::vector< ::java::lang::String>&);
    static ::android::database::Cursor queryMiniThumbnail(const ::android::content::ContentResolver&, int64_t, int32_t, const std::vector< ::java::lang::String>&);
    static void cancelThumbnailRequest(const ::android::content::ContentResolver&, int64_t);
    static ::android::graphics::Bitmap getThumbnail(const ::android::content::ContentResolver&, int64_t, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static void cancelThumbnailRequest(const ::android::content::ContentResolver&, int64_t, int64_t);
    static ::android::graphics::Bitmap getThumbnail(const ::android::content::ContentResolver&, int64_t, int64_t, int32_t, const ::android::graphics::BitmapFactory_Options&);
    static ::android::net::Uri getContentUri(const ::java::lang::String&);

};
}
}


