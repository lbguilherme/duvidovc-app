#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentResolver; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Video : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Video(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Video(const ::android::provider::MediaStore_Video& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Video(::android::provider::MediaStore_Video&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Video& operator=(const ::android::provider::MediaStore_Video& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Video& operator=(::android::provider::MediaStore_Video&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Video();
    static ::android::database::Cursor query(const ::android::content::ContentResolver&, const ::android::net::Uri&, const std::vector< ::java::lang::String>&);

};
}
}

#include "android.provider.MediaStore_Video_Media.hpp"
#include "android.provider.MediaStore_Video_Thumbnails.hpp"
#include "android.provider.MediaStore_Video_VideoColumns.hpp"

