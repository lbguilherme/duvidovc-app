#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class Environment : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Environment(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Environment(const ::android::os::Environment& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Environment(::android::os::Environment&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::Environment& operator=(const ::android::os::Environment& x) {obj = x.obj; return *this;}
    ::android::os::Environment& operator=(::android::os::Environment&& x) {obj = std::move(x.obj); return *this;}
    
    Environment();
    static ::java::io::File getRootDirectory();
    static ::java::io::File getDataDirectory();
    static ::java::io::File getExternalStorageDirectory();
    static ::java::io::File getExternalStoragePublicDirectory(const ::java::lang::String&);
    static ::java::io::File getDownloadCacheDirectory();
    static ::java::lang::String getExternalStorageState();
    static bool isExternalStorageRemovable();
    static bool isExternalStorageEmulated();

};
}
}


