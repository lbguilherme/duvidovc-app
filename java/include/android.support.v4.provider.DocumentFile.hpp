#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace provider { class DocumentFile; } } } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace provider {
class DocumentFile : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DocumentFile(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DocumentFile(const ::android::support::v4::provider::DocumentFile& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DocumentFile(::android::support::v4::provider::DocumentFile&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::provider::DocumentFile& operator=(const ::android::support::v4::provider::DocumentFile& x) {obj = x.obj; return *this;}
    ::android::support::v4::provider::DocumentFile& operator=(::android::support::v4::provider::DocumentFile&& x) {obj = std::move(x.obj); return *this;}
    
    static ::android::support::v4::provider::DocumentFile fromFile(const ::java::io::File&);
    static ::android::support::v4::provider::DocumentFile fromSingleUri(const ::android::content::Context&, const ::android::net::Uri&);
    static ::android::support::v4::provider::DocumentFile fromTreeUri(const ::android::content::Context&, const ::android::net::Uri&);
    static bool isDocumentUri(const ::android::content::Context&, const ::android::net::Uri&);
    ::android::support::v4::provider::DocumentFile createFile(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::support::v4::provider::DocumentFile createDirectory(const ::java::lang::String&) const ;
    ::android::net::Uri getUri() const ;
    ::java::lang::String getName() const ;
    ::java::lang::String getType() const ;
    ::android::support::v4::provider::DocumentFile getParentFile() const ;
    bool isDirectory() const ;
    bool isFile() const ;
    int64_t lastModified() const ;
    int64_t length() const ;
    bool canRead() const ;
    bool canWrite() const ;
    bool delete_() const ;
    bool exists() const ;
    std::vector< ::android::support::v4::provider::DocumentFile> listFiles() const ;
    ::android::support::v4::provider::DocumentFile findFile(const ::java::lang::String&) const ;
    bool renameTo(const ::java::lang::String&) const ;

};
}
}
}
}


