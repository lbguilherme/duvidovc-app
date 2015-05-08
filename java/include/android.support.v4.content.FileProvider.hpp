#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContentProvider.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace pm { class ProviderInfo; } } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace io { class File; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace content {
class FileProvider : public virtual ::java::lang::Object,
                     public virtual ::android::content::ContentProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FileProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::ContentProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FileProvider(const ::android::support::v4::content::FileProvider& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj;}
    FileProvider(::android::support::v4::content::FileProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::content::FileProvider& operator=(const ::android::support::v4::content::FileProvider& x) {obj = x.obj; return *this;}
    ::android::support::v4::content::FileProvider& operator=(::android::support::v4::content::FileProvider&& x) {obj = std::move(x.obj); return *this;}
    
    FileProvider();
    bool onCreate() const ;
    void attachInfo(const ::android::content::Context&, const ::android::content::pm::ProviderInfo&) const ;
    static ::android::net::Uri getUriForFile(const ::android::content::Context&, const ::java::lang::String&, const ::java::io::File&);
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    ::java::lang::String getType(const ::android::net::Uri&) const ;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::os::ParcelFileDescriptor openFile(const ::android::net::Uri&, const ::java::lang::String&) const ;

};
}
}
}
}

#include "android.support.v4.content.FileProvider_PathStrategy.hpp"
#include "android.support.v4.content.FileProvider_SimplePathStrategy.hpp"

