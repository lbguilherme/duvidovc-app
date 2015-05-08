#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ContentProvider.hpp"

namespace android { namespace content { class ContentValues; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class UUID; } }

namespace com {
namespace facebook {
class FacebookContentProvider : public virtual ::java::lang::Object,
                                public virtual ::android::content::ContentProvider {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FacebookContentProvider(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ComponentCallbacks(_obj), ::android::content::ComponentCallbacks2(_obj), ::android::content::ContentProvider(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FacebookContentProvider(const ::com::facebook::FacebookContentProvider& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj;}
    FacebookContentProvider(::com::facebook::FacebookContentProvider&& x) : ::java::lang::Object((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::ContentProvider((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::com::facebook::FacebookContentProvider& operator=(const ::com::facebook::FacebookContentProvider& x) {obj = x.obj; return *this;}
    ::com::facebook::FacebookContentProvider& operator=(::com::facebook::FacebookContentProvider&& x) {obj = std::move(x.obj); return *this;}
    
    FacebookContentProvider();
    static ::java::lang::String getAttachmentUrl(const ::java::lang::String&, const ::java::util::UUID&, const ::java::lang::String&);
    bool onCreate() const ;
    ::android::database::Cursor query(const ::android::net::Uri&, const std::vector< ::java::lang::String>&, const ::java::lang::String&, const std::vector< ::java::lang::String>&, const ::java::lang::String&) const ;
    ::java::lang::String getType(const ::android::net::Uri&) const ;
    ::android::net::Uri insert(const ::android::net::Uri&, const ::android::content::ContentValues&) const ;
    int32_t delete_(const ::android::net::Uri&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    int32_t update(const ::android::net::Uri&, const ::android::content::ContentValues&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const ;
    ::android::os::ParcelFileDescriptor openFile(const ::android::net::Uri&, const ::java::lang::String&) const ;

};
}
}


