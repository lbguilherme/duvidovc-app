#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.provider.DocumentFile.hpp"

namespace android { namespace net { class Uri; } }
namespace android { namespace support { namespace v4 { namespace provider { class DocumentFile; } } } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace provider {
class TreeDocumentFile : public virtual ::java::lang::Object,
                         public virtual ::android::support::v4::provider::DocumentFile {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit TreeDocumentFile(jobject _obj) : ::java::lang::Object(_obj), ::android::support::v4::provider::DocumentFile(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    TreeDocumentFile(const ::android::support::v4::provider::TreeDocumentFile& x) : ::java::lang::Object((jobject)0), ::android::support::v4::provider::DocumentFile((jobject)0) {obj = x.obj;}
    TreeDocumentFile(::android::support::v4::provider::TreeDocumentFile&& x) : ::java::lang::Object((jobject)0), ::android::support::v4::provider::DocumentFile((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::provider::TreeDocumentFile& operator=(const ::android::support::v4::provider::TreeDocumentFile& x) {obj = x.obj; return *this;}
    ::android::support::v4::provider::TreeDocumentFile& operator=(::android::support::v4::provider::TreeDocumentFile&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::support::v4::provider::DocumentFile createFile(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::support::v4::provider::DocumentFile createDirectory(const ::java::lang::String&) const ;
    ::android::net::Uri getUri() const ;
    ::java::lang::String getName() const ;
    ::java::lang::String getType() const ;
    bool isDirectory() const ;
    bool isFile() const ;
    int64_t lastModified() const ;
    int64_t length() const ;
    bool canRead() const ;
    bool canWrite() const ;
    bool delete_() const ;
    bool exists() const ;
    std::vector< ::android::support::v4::provider::DocumentFile> listFiles() const ;
    bool renameTo(const ::java::lang::String&) const ;

};
}
}
}
}


