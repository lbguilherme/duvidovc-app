#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.MediaStore_Audio_AlbumColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Audio_Albums : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns,
                                public virtual ::android::provider::MediaStore_Audio_AlbumColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_Albums(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_Audio_AlbumColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_Albums(const ::android::provider::MediaStore_Audio_Albums& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AlbumColumns((jobject)0) {obj = x.obj;}
    MediaStore_Audio_Albums(::android::provider::MediaStore_Audio_Albums&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AlbumColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_Albums& operator=(const ::android::provider::MediaStore_Audio_Albums& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_Albums& operator=(::android::provider::MediaStore_Audio_Albums&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Audio_Albums();
    static ::android::net::Uri getContentUri(const ::java::lang::String&);

};
}
}


