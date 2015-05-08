#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.provider.BaseColumns.hpp"


namespace android {
namespace provider {
class MediaStore_MediaColumns : public virtual ::java::lang::Object,
                                public virtual ::android::provider::BaseColumns {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_MediaColumns(jobject _obj) : ::java::lang::Object(_obj), ::android::provider::BaseColumns(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_MediaColumns(const ::android::provider::MediaStore_MediaColumns& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj;}
    MediaStore_MediaColumns(::android::provider::MediaStore_MediaColumns&& x) : ::java::lang::Object((jobject)0), ::android::provider::BaseColumns((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_MediaColumns& operator=(const ::android::provider::MediaStore_MediaColumns& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_MediaColumns& operator=(::android::provider::MediaStore_MediaColumns&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}


