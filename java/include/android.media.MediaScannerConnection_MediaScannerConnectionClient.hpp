#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.media.MediaScannerConnection_OnScanCompletedListener.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class MediaScannerConnection_MediaScannerConnectionClient : public virtual ::java::lang::Object,
                                                            public virtual ::android::media::MediaScannerConnection_OnScanCompletedListener {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaScannerConnection_MediaScannerConnectionClient(jobject _obj) : ::java::lang::Object(_obj), ::android::media::MediaScannerConnection_OnScanCompletedListener(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaScannerConnection_MediaScannerConnectionClient(const ::android::media::MediaScannerConnection_MediaScannerConnectionClient& x) : ::java::lang::Object((jobject)0), ::android::media::MediaScannerConnection_OnScanCompletedListener((jobject)0) {obj = x.obj;}
    MediaScannerConnection_MediaScannerConnectionClient(::android::media::MediaScannerConnection_MediaScannerConnectionClient&& x) : ::java::lang::Object((jobject)0), ::android::media::MediaScannerConnection_OnScanCompletedListener((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaScannerConnection_MediaScannerConnectionClient& operator=(const ::android::media::MediaScannerConnection_MediaScannerConnectionClient& x) {obj = x.obj; return *this;}
    ::android::media::MediaScannerConnection_MediaScannerConnectionClient& operator=(::android::media::MediaScannerConnection_MediaScannerConnectionClient&& x) {obj = std::move(x.obj); return *this;}
    
    void onMediaScannerConnected() const ;
    void onScanCompleted(const ::java::lang::String&, const ::android::net::Uri&) const ;

};
}
}


