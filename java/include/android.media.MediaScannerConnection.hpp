#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.content.ServiceConnection.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace media { class MediaScannerConnection_MediaScannerConnectionClient; } }
namespace android { namespace media { class MediaScannerConnection_OnScanCompletedListener; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class MediaScannerConnection : public virtual ::java::lang::Object,
                               public virtual ::android::content::ServiceConnection {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaScannerConnection(jobject _obj) : ::java::lang::Object(_obj), ::android::content::ServiceConnection(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaScannerConnection(const ::android::media::MediaScannerConnection& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj;}
    MediaScannerConnection(::android::media::MediaScannerConnection&& x) : ::java::lang::Object((jobject)0), ::android::content::ServiceConnection((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaScannerConnection& operator=(const ::android::media::MediaScannerConnection& x) {obj = x.obj; return *this;}
    ::android::media::MediaScannerConnection& operator=(::android::media::MediaScannerConnection&& x) {obj = std::move(x.obj); return *this;}
    
    MediaScannerConnection(const ::android::content::Context&, const ::android::media::MediaScannerConnection_MediaScannerConnectionClient&);
    void connect() const;
    void disconnect() const;
    bool isConnected() const;
    void scanFile(const ::java::lang::String&, const ::java::lang::String&) const;
    static void scanFile(const ::android::content::Context&, const std::vector< ::java::lang::String>&, const std::vector< ::java::lang::String>&, const ::android::media::MediaScannerConnection_OnScanCompletedListener&);
    void onServiceConnected(const ::android::content::ComponentName&, const ::android::os::IBinder&) const;
    void onServiceDisconnected(const ::android::content::ComponentName&) const;

};
}
}

#include "android.media.MediaScannerConnection_MediaScannerConnectionClient.hpp"
#include "android.media.MediaScannerConnection_OnScanCompletedListener.hpp"

