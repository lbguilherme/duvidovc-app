#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContentProvider.hpp"

namespace android { namespace content { class ContentProviderResult; } }
namespace android { namespace content { class ContentValues; } }
namespace android { namespace content { class Context; } }
namespace android { namespace content { namespace pm { class PathPermission; } } }
namespace android { namespace content { namespace pm { class ProviderInfo; } } }
namespace android { namespace content { namespace res { class AssetFileDescriptor; } } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace test {
namespace mock {
class MockContentProvider : public virtual ::java::lang::Object,
                            public virtual ::android::content::ContentProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MockContentProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::ContentProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MockContentProvider(const ::android::test::mock::MockContentProvider& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj;}
    MockContentProvider(::android::test::mock::MockContentProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::test::mock::MockContentProvider& operator=(const ::android::test::mock::MockContentProvider& x) {obj = x.obj; return *this;}
    ::android::test::mock::MockContentProvider& operator=(::android::test::mock::MockContentProvider&& x) {obj = std::move(x.obj); return *this;}
    
    MockContentProvider(const ::android::content::Context&);
    MockContentProvider(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::android::content::pm::PathPermission>&);
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::java::lang::String getType(const ::android::net::Uri&) const ;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    bool onCreate() const ;
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t bulkInsert(const ::android::net::Uri&, const std::vector< ::android::content::ContentValues>&) const ;
    void attachInfo(const ::android::content::Context&, const ::android::content::pm::ProviderInfo&) const ;
    std::vector< ::android::content::ContentProviderResult> applyBatch(const ::java::util::ArrayList&) const ;
    std::vector< ::java::lang::String> getStreamTypes(const ::android::net::Uri&, const ::java::lang::String&) const ;
    ::android::content::res::AssetFileDescriptor openTypedAssetFile(const ::android::net::Uri&, const ::java::lang::String&, const ::android::os::Bundle&) const ;

};
}
}
}


