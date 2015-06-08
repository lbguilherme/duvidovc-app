#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class DownloadManager_Query; } }
namespace android { namespace app { class DownloadManager_Request; } }
namespace android { namespace content { class Context; } }
namespace android { namespace database { class Cursor; } }
namespace android { namespace net { class Uri; } }
namespace android { namespace os { class ParcelFileDescriptor; } }
namespace java { namespace lang { class Long; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class DownloadManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DownloadManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DownloadManager(const ::android::app::DownloadManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DownloadManager(::android::app::DownloadManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::DownloadManager& operator=(const ::android::app::DownloadManager& x) {obj = x.obj; return *this;}
    ::android::app::DownloadManager& operator=(::android::app::DownloadManager&& x) {obj = std::move(x.obj); return *this;}
    
    int64_t enqueue(const ::android::app::DownloadManager_Request&) const;
    int32_t remove(const std::vector< int64_t>&) const;
    ::android::database::Cursor query(const ::android::app::DownloadManager_Query&) const;
    ::android::os::ParcelFileDescriptor openDownloadedFile(int64_t) const;
    ::android::net::Uri getUriForDownloadedFile(int64_t) const;
    ::java::lang::String getMimeTypeForDownloadedFile(int64_t) const;
    static ::java::lang::Long getMaxBytesOverMobile(const ::android::content::Context&);
    static ::java::lang::Long getRecommendedMaxBytesOverMobile(const ::android::content::Context&);
    int64_t addCompletedDownload(const ::java::lang::String&, const ::java::lang::String&, bool, const ::java::lang::String&, const ::java::lang::String&, int64_t, bool) const;

};
}
}

#include "android.app.DownloadManager_Query.hpp"
#include "android.app.DownloadManager_Request.hpp"

