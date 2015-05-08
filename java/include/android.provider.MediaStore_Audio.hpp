#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Audio : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio(const ::android::provider::MediaStore_Audio& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Audio(::android::provider::MediaStore_Audio&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio& operator=(const ::android::provider::MediaStore_Audio& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio& operator=(::android::provider::MediaStore_Audio&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Audio();
    static ::java::lang::String keyFor(const ::java::lang::String&);

};
}
}

#include "android.provider.MediaStore_Audio_AlbumColumns.hpp"
#include "android.provider.MediaStore_Audio_Albums.hpp"
#include "android.provider.MediaStore_Audio_ArtistColumns.hpp"
#include "android.provider.MediaStore_Audio_Artists.hpp"
#include "android.provider.MediaStore_Audio_AudioColumns.hpp"
#include "android.provider.MediaStore_Audio_Genres.hpp"
#include "android.provider.MediaStore_Audio_GenresColumns.hpp"
#include "android.provider.MediaStore_Audio_Media.hpp"
#include "android.provider.MediaStore_Audio_Playlists.hpp"
#include "android.provider.MediaStore_Audio_PlaylistsColumns.hpp"
#include "android.provider.MediaStore_Audio_Artists_Albums.hpp"
#include "android.provider.MediaStore_Audio_Genres_Members.hpp"
#include "android.provider.MediaStore_Audio_Playlists_Members.hpp"

