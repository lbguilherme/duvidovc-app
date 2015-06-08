#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Binder.hpp"
#include "android.support.v4.media.session.IMediaControllerCallback.hpp"

namespace android { namespace os { class IBinder; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace support { namespace v4 { namespace media { namespace session { class IMediaControllerCallback; } } } } }

namespace android {
namespace support {
namespace v4 {
namespace media {
namespace session {
class IMediaControllerCallback_Stub : public virtual ::java::lang::Object,
                                      public virtual ::android::os::Binder,
                                      public virtual ::android::support::v4::media::session::IMediaControllerCallback {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IMediaControllerCallback_Stub(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Binder(_obj), ::android::os::IBinder(_obj), ::android::os::IInterface(_obj), ::android::support::v4::media::session::IMediaControllerCallback(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IMediaControllerCallback_Stub(const ::android::support::v4::media::session::IMediaControllerCallback_Stub& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0) {obj = x.obj;}
    IMediaControllerCallback_Stub(::android::support::v4::media::session::IMediaControllerCallback_Stub&& x) : ::java::lang::Object((jobject)0), ::android::os::Binder((jobject)0), ::android::os::IBinder((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::media::session::IMediaControllerCallback((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::media::session::IMediaControllerCallback_Stub& operator=(const ::android::support::v4::media::session::IMediaControllerCallback_Stub& x) {obj = x.obj; return *this;}
    ::android::support::v4::media::session::IMediaControllerCallback_Stub& operator=(::android::support::v4::media::session::IMediaControllerCallback_Stub&& x) {obj = std::move(x.obj); return *this;}
    
    IMediaControllerCallback_Stub();
    static ::android::support::v4::media::session::IMediaControllerCallback asInterface(const ::android::os::IBinder&);
    ::android::os::IBinder asBinder() const;
    bool onTransact(int32_t, const ::android::os::Parcel&, const ::android::os::Parcel&, int32_t) const;

};
}
}
}
}
}

#include "android.support.v4.media.session.IMediaControllerCallback_Stub_Proxy.hpp"

