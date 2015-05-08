#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.MediaStore_MediaColumns.hpp"


namespace android {
namespace provider {
class MediaStore_Files_FileColumns : public virtual ::java::lang::Object,
                                     public virtual ::android::provider::MediaStore_MediaColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Files_FileColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_MediaColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Files_FileColumns(const ::android::provider::MediaStore_Files_FileColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj;}
    MediaStore_Files_FileColumns(::android::provider::MediaStore_Files_FileColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Files_FileColumns& operator=(const ::android::provider::MediaStore_Files_FileColumns& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Files_FileColumns& operator=(::android::provider::MediaStore_Files_FileColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


