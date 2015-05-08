#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace io { class File; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class FileProvider_PathStrategy : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileProvider_PathStrategy(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileProvider_PathStrategy(const ::android::support::v4::content::FileProvider_PathStrategy& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FileProvider_PathStrategy(::android::support::v4::content::FileProvider_PathStrategy&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::FileProvider_PathStrategy& operator=(const ::android::support::v4::content::FileProvider_PathStrategy& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::FileProvider_PathStrategy& operator=(::android::support::v4::content::FileProvider_PathStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::net::Uri getUriForFile(const ::java::io::File&) const ;
    ::java::io::File getFileForUri(const ::android::net::Uri&) const ;

};
}
}
}
}


