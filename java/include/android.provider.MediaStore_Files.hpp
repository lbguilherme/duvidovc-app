#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace provider {
class MediaStore_Files : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaStore_Files(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaStore_Files(const ::android::provider::MediaStore_Files& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaStore_Files(::android::provider::MediaStore_Files&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::provider::MediaStore_Files& operator=(const ::android::provider::MediaStore_Files& x) {obj = x.obj; return *this;}
    ::android::provider::MediaStore_Files& operator=(::android::provider::MediaStore_Files&& x) {obj = std::move(x.obj); return *this;}
    
    MediaStore_Files();
    static ::android::net::Uri getContentUri(const ::java::lang::String&);
    static ::android::net::Uri getContentUri(const ::java::lang::String&, int64_t);

};
}
}

#include "android.provider.MediaStore_Files_FileColumns.hpp"

