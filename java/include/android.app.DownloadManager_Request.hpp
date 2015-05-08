#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class DownloadManager_Request; } }
namespace android { namespace content { class Context; } }
namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class DownloadManager_Request : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DownloadManager_Request(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DownloadManager_Request(const ::android::app::DownloadManager_Request& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    DownloadManager_Request(::android::app::DownloadManager_Request&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::DownloadManager_Request& operator=(const ::android::app::DownloadManager_Request& x) {obj = x.obj; return *this;}
    ::android::app::DownloadManager_Request& operator=(::android::app::DownloadManager_Request&& x) {obj = std::move(x.obj); return *this;}
    
    DownloadManager_Request(const ::android::net::Uri&);
    ::android::app::DownloadManager_Request setDestinationUri(const ::android::net::Uri&) const ;
    ::android::app::DownloadManager_Request setDestinationInExternalFilesDir(const ::android::content::Context&, const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::app::DownloadManager_Request setDestinationInExternalPublicDir(const ::java::lang::String&, const ::java::lang::String&) const ;
    void allowScanningByMediaScanner() const ;
    ::android::app::DownloadManager_Request addRequestHeader(const ::java::lang::String&, const ::java::lang::String&) const ;
    ::android::app::DownloadManager_Request setTitle(const ::java::lang::CharSequence&) const ;
    ::android::app::DownloadManager_Request setDescription(const ::java::lang::CharSequence&) const ;
    ::android::app::DownloadManager_Request setMimeType(const ::java::lang::String&) const ;
    ::android::app::DownloadManager_Request setShowRunningNotification(bool) const ;
    ::android::app::DownloadManager_Request setNotificationVisibility(int32_t) const ;
    ::android::app::DownloadManager_Request setAllowedNetworkTypes(int32_t) const ;
    ::android::app::DownloadManager_Request setAllowedOverRoaming(bool) const ;
    ::android::app::DownloadManager_Request setVisibleInDownloadsUi(bool) const ;

};
}
}


