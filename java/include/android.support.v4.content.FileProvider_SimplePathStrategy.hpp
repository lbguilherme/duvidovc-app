#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.content.FileProvider_PathStrategy.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class FileProvider_SimplePathStrategy : public virtual ::java::lang::Object,
                                        public virtual ::android::support::v4::content::FileProvider_PathStrategy {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileProvider_SimplePathStrategy(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::content::FileProvider_PathStrategy(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileProvider_SimplePathStrategy(const ::android::support::v4::content::FileProvider_SimplePathStrategy& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::FileProvider_PathStrategy((jobject)0) {obj = x.obj;}
    FileProvider_SimplePathStrategy(::android::support::v4::content::FileProvider_SimplePathStrategy&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::content::FileProvider_PathStrategy((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::FileProvider_SimplePathStrategy& operator=(const ::android::support::v4::content::FileProvider_SimplePathStrategy& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::FileProvider_SimplePathStrategy& operator=(::android::support::v4::content::FileProvider_SimplePathStrategy&& x) {obj = std::move(x.obj); return *this;}
    
    FileProvider_SimplePathStrategy(const ::java::lang::String&);
    void addRoot(const ::java::lang::String&, const ::java::io::File&) const ;
    ::android::net::Uri getUriForFile(const ::java::io::File&) const ;
    ::java::io::File getFileForUri(const ::android::net::Uri&) const ;

};
}
}
}
}


