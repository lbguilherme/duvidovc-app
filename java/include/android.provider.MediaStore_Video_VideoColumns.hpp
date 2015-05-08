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
class MediaStore_Video_VideoColumns : public virtual ::java::lang::Object,
                                      public virtual ::android::provider::MediaStore_MediaColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Video_VideoColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj), ::android::provider::MediaStore_MediaColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Video_VideoColumns(const ::android::provider::MediaStore_Video_VideoColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj;}
    MediaStore_Video_VideoColumns(::android::provider::MediaStore_Video_VideoColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0), ::android::provider::MediaStore_MediaColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Video_VideoColumns& operator=(const ::android::provider::MediaStore_Video_VideoColumns& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Video_VideoColumns& operator=(::android::provider::MediaStore_Video_VideoColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


