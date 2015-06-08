#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class MediaSessionCompat_OnActiveChangeListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MediaSessionCompat_OnActiveChangeListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MediaSessionCompat_OnActiveChangeListener(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MediaSessionCompat_OnActiveChangeListener(::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& operator=(const ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener& operator=(::android::support::v4::media::session::MediaSessionCompat_OnActiveChangeListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onActiveChanged() const;

};
}
}
}
}
}


