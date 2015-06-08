#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace net { class Uri; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace media {
class MediaScannerConnection_OnScanCompletedListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaScannerConnection_OnScanCompletedListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaScannerConnection_OnScanCompletedListener(const ::android::media::MediaScannerConnection_OnScanCompletedListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaScannerConnection_OnScanCompletedListener(::android::media::MediaScannerConnection_OnScanCompletedListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::media::MediaScannerConnection_OnScanCompletedListener& operator=(const ::android::media::MediaScannerConnection_OnScanCompletedListener& x) {obj = x.obj; return *this;}
    ::android::media::MediaScannerConnection_OnScanCompletedListener& operator=(::android::media::MediaScannerConnection_OnScanCompletedListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onScanCompleted(const ::java::lang::String&, const ::android::net::Uri&) const;

};
}
}


