#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.MediaStore_Images_ImageColumns.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace graphics { class Bitmap; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Images_Media : public virtual ::java::lang::Object,
                                public virtual ::android::provider::MediaStore_Images_ImageColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Images_Media(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_Images_ImageColumns(_obj), ::android::provider::MediaStore_MediaColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Images_Media(const ::android::provider::MediaStore_Images_Media& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Images_ImageColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj;}
    MediaStore_Images_Media(::android::provider::MediaStore_Images_Media&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Images_ImageColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Images_Media& operator=(const ::android::provider::MediaStore_Images_Media& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Images_Media& operator=(::android::provider::MediaStore_Images_Media&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Images_Media();
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&);
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const ::java::lang::String&);
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&);
    static ::android::graphics::Bitmap getBitmap(const ::android::content::ContentResolver&, const ::android::net::Uri&);
    static ::java::lang::String insertImage(const ::android::content::ContentResolver&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&);
    static ::java::lang::String insertImage(const ::android::content::ContentResolver&, const ::android::graphics::Bitmap&, const ::java::lang::String&, const ::java::lang::String&);
    static ::android::net::Uri getContentUri(const ::java::lang::String&);

};
}
}


