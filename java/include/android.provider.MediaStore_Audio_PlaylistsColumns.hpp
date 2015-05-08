#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class MediaStore_Audio_PlaylistsColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_PlaylistsColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_PlaylistsColumns(const ::android::provider::MediaStore_Audio_PlaylistsColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Audio_PlaylistsColumns(::android::provider::MediaStore_Audio_PlaylistsColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_PlaylistsColumns& operator=(const ::android::provider::MediaStore_Audio_PlaylistsColumns& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_PlaylistsColumns& operator=(::android::provider::MediaStore_Audio_PlaylistsColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


