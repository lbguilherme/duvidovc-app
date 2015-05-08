#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"
#include "android.provider.MediaStore_Audio_GenresColumns.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Audio_Genres : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns,
                                public virtual ::android::provider::MediaStore_Audio_GenresColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_Genres(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_Audio_GenresColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_Genres(const ::android::provider::MediaStore_Audio_Genres& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_GenresColumns((jobject)0) {obj = x.obj;}
    MediaStore_Audio_Genres(::android::provider::MediaStore_Audio_Genres&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_Audio_GenresColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_Genres& operator=(const ::android::provider::MediaStore_Audio_Genres& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_Genres& operator=(::android::provider::MediaStore_Audio_Genres&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Audio_Genres();
    static ::android::net::Uri getContentUri(const ::java::lang::String&);
    static ::android::net::Uri getContentUriForAudioId(const ::java::lang::String&, int32_t);

};
}
}

#include "android.provider.MediaStore_Audio_Genres_Members.hpp"

