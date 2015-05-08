#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.MediaStore_Audio_AudioColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Audio_Media : public virtual ::java::lang::Object,
                               public virtual ::android::provider::MediaStore_Audio_AudioColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_Media(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_Audio_AudioColumns(_obj), ::android::provider::MediaStore_MediaColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_Media(const ::android::provider::MediaStore_Audio_Media& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AudioColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj;}
    MediaStore_Audio_Media(::android::provider::MediaStore_Audio_Media&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_AudioColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_Media& operator=(const ::android::provider::MediaStore_Audio_Media& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_Media& operator=(::android::provider::MediaStore_Audio_Media&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Audio_Media();
    static ::android::net::Uri getContentUri(const ::java::lang::String&);
    static ::android::net::Uri getContentUriForPath(const ::java::lang::String&);

};
}
}


