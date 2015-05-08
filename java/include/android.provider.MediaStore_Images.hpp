#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace provider {
class MediaStore_Images : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Images(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Images(const ::android::provider::MediaStore_Images& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Images(::android::provider::MediaStore_Images&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Images& operator=(const ::android::provider::MediaStore_Images& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Images& operator=(::android::provider::MediaStore_Images&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Images();

};
}
}

#include "android.provider.MediaStore_Images_ImageColumns.hpp"
#include "android.provider.MediaStore_Images_Media.hpp"
#include "android.provider.MediaStore_Images_Thumbnails.hpp"

