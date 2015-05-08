#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore(const ::android::provider::MediaStore& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore(::android::provider::MediaStore&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore& operator=(const ::android::provider::MediaStore& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore& operator=(::android::provider::MediaStore&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore();
    static ::android::net::Uri getMediaScannerUri();
    static ::java::lang::String getVersion(const ::android::content::Context&);

};
}
}

#include "android.provider.MediaStore_Audio.hpp"
#include "android.provider.MediaStore_Files.hpp"
#include "android.provider.MediaStore_Images.hpp"
#include "android.provider.MediaStore_MediaColumns.hpp"
#include "android.provider.MediaStore_Video.hpp"
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
#include "android.provider.MediaStore_Files_FileColumns.hpp"
#include "android.provider.MediaStore_Images_ImageColumns.hpp"
#include "android.provider.MediaStore_Images_Media.hpp"
#include "android.provider.MediaStore_Images_Thumbnails.hpp"
#include "android.provider.MediaStore_Video_Media.hpp"
#include "android.provider.MediaStore_Video_Thumbnails.hpp"
#include "android.provider.MediaStore_Video_VideoColumns.hpp"

