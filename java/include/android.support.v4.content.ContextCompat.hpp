#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace graphics { namespace drawable { class Drawable; } } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class ContextCompat : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContextCompat(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContextCompat(const ::android::support::v4::content::ContextCompat& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContextCompat(::android::support::v4::content::ContextCompat&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::ContextCompat& operator=(const ::android::support::v4::content::ContextCompat& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::ContextCompat& operator=(::android::support::v4::content::ContextCompat&& x) {obj = std::move(x.obj); return *this;}
    
    ContextCompat();
    static bool startActivities(const ::android::content::Context&, const std::vector< ::android::content::Intent>&);
    static bool startActivities(const ::android::content::Context&, const std::vector< ::android::content::Intent>&, const ::android::os::Bundle&);
    static std::vector< ::java::io::File> getObbDirs(const ::android::content::Context&);
    static std::vector< ::java::io::File> getExternalFilesDirs(const ::android::content::Context&, const ::java::lang::String&);
    static std::vector< ::java::io::File> getExternalCacheDirs(const ::android::content::Context&);
    static ::android::graphics::drawable::Drawable getDrawable(const ::android::content::Context&, int32_t);
    ::java::io::File getNoBackupFilesDir(const ::android::content::Context&) const;
    ::java::io::File getCodeCacheDir(const ::android::content::Context&) const;

};
}
}
}
}


