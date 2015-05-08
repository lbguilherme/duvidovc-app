#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.MediaStore_Audio_ArtistColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Audio_Artists : public virtual ::java::lang::Object,
                                 public virtual ::android::provider::BaseColumns,
                                 public virtual ::android::provider::MediaStore_Audio_ArtistColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_Artists(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_Audio_ArtistColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_Artists(const ::android::provider::MediaStore_Audio_Artists& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_ArtistColumns((jobject)0) {obj = x.obj;}
    MediaStore_Audio_Artists(::android::provider::MediaStore_Audio_Artists&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_ArtistColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_Artists& operator=(const ::android::provider::MediaStore_Audio_Artists& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_Artists& operator=(::android::provider::MediaStore_Audio_Artists&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Audio_Artists();
    static ::android::net::Uri getContentUri(const ::java::lang::String&);

};
}
}

#include "android.provider.MediaStore_Audio_Artists_Albums.hpp"

