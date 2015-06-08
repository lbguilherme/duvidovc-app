#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class ContentProvider; } }
namespace android { namespace content { class ContentProviderResult; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace content {
class ContentProviderClient : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProviderClient(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProviderClient(const ::android::content::ContentProviderClient& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ContentProviderClient(::android::content::ContentProviderClient&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProviderClient& operator=(const ::android::content::ContentProviderClient& x) {obj = x.obj; return *this;}
    ::android::content::ContentProviderClient& operator=(::android::content::ContentProviderClient&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const;
    ::java::lang::String getType(const ::android::net::Uri&) const;
    std::vector< ::java::lang::String> getStreamTypes(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const;
    int32_t bulkInsert(const ::android::net::Uri&, const std::vector< ::android::content::ContentValues>&) const;
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    ::android::os::ParcelFileDescriptor openFile(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openAssetFile(const ::android::net::Uri&, const ::java::lang::String&) const;
    ::android::content::res::AssetFileDescriptor openTypedAssetFileDescriptor(const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&) const;
    std::vector< ::android::content::ContentProviderResult> applyBatch(const ::java::util::ArrayList&) const;
    bool release() const;
    ::android::content::ContentProvider getLocalContentProvider() const;

};
}
}


