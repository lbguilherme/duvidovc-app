#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ComponentCallbacks2.hpp"

namespace android { namespace content { class ContentProvider_PipeDataWriter; } }
namespace android { namespace content { class ContentProviderResult; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace pm { class PathPermission; } } }
namespace android { namespace content { namespace pm { class ProviderInfo; } } }
namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace content { namespace res { class Configuration; } } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace content {
class ContentProvider : public virtual ::java::lang::Object,
                        public virtual ::android::content::ComponentCallbacks2 {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ContentProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ContentProvider(const ::android::content::ContentProvider& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0) {obj = x.obj;}
    ContentProvider(::android::content::ContentProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::ContentProvider& operator=(const ::android::content::ContentProvider& x) {obj = x.obj; return *this;}
    ::android::content::ContentProvider& operator=(::android::content::ContentProvider&& x) {obj = std::move(x.obj); return *this;}
    
    ContentProvider();
    ::android::content::Context getContext() const ;
    ::java::lang::String getReadPermission() const ;
    ::java::lang::String getWritePermission() const ;
    std::vector< ::android::content::pm::PathPermission> getPathPermissions() const ;
    bool onCreate() const ;
    void onConfigurationChanged(const ::android::content::res::Configuration&) const ;
    void onLowMemory() const ;
    void onTrimMemory(int32_t) const ;
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    ::java::lang::String getType(const ::android::net::Uri&) const ;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    int32_t bulkInsert(const ::android::net::Uri&, const std::vector< ::android::content::ContentValues>&) const ;
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::os::ParcelFileDescriptor openFile(const ::android::net::Uri&, const ::java::lang::String&) const ;
    ::android::content::res::AssetFileDescriptor openAssetFile(const ::android::net::Uri&, const ::java::lang::String&) const ;
    std::vector< ::java::lang::String> getStreamTypes(const ::android::net::Uri&, const ::java::lang::String&) const ;
    ::android::content::res::AssetFileDescriptor openTypedAssetFile(const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    ::android::os::ParcelFileDescriptor openPipeHelper(const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&, const ::java::lang::Object&, const ::android::content::ContentProvider_PipeDataWriter&) const ;
    void attachInfo(const ::android::content::Context&, const ::android::content::pm::ProviderInfo&) const ;
    std::vector< ::android::content::ContentProviderResult> applyBatch(const ::java::util::ArrayList&) const ;
    ::android::os::Bundle call(const ::java::lang::String&, const ::java::lang::String&, const ::android::os::Bundle&) const ;
    void shutdown() const ;

};
}
}

#include "android.content.ContentProvider_PipeDataWriter.hpp"

