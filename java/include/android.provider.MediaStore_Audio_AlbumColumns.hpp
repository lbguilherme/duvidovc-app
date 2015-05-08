#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class MediaStore_Audio_AlbumColumns : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Audio_AlbumColumns(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Audio_AlbumColumns(const ::android::provider::MediaStore_Audio_AlbumColumns& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Audio_AlbumColumns(::android::provider::MediaStore_Audio_AlbumColumns&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Audio_AlbumColumns& operator=(const ::android::provider::MediaStore_Audio_AlbumColumns& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Audio_AlbumColumns& operator=(::android::provider::MediaStore_Audio_AlbumColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


