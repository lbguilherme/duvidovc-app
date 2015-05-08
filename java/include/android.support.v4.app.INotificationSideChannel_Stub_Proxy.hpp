#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.support.v4.app.INotificationSideChannel.hpp"

namespace android { namespace app { class Notification; } }
namespace android { namespace os { class IBinder; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class INotificationSideChannel_Stub_Proxy : public virtual ::java::lang::Object,
                                            public virtual ::android::support::v4::app::INotificationSideChannel {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit INotificationSideChannel_Stub_Proxy(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj), ::android::support::v4::app::INotificationSideChannel(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    INotificationSideChannel_Stub_Proxy(const ::android::support::v4::app::INotificationSideChannel_Stub_Proxy& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::app::INotificationSideChannel((jobject)0) {obj = x.obj;}
    INotificationSideChannel_Stub_Proxy(::android::support::v4::app::INotificationSideChannel_Stub_Proxy&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0), ::android::support::v4::app::INotificationSideChannel((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::INotificationSideChannel_Stub_Proxy& operator=(const ::android::support::v4::app::INotificationSideChannel_Stub_Proxy& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::INotificationSideChannel_Stub_Proxy& operator=(::android::support::v4::app::INotificationSideChannel_Stub_Proxy&& x) {obj = std::move(x.obj); return *this;}
    
    ::android::os::IBinder asBinder() const ;
    ::java::lang::String getInterfaceDescriptor() const ;
    void notify(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::android::app::Notification&) const ;
    void cancel(const ::java::lang::String&, int32_t, const ::java::lang::String&) const ;
    void cancelAll(const ::java::lang::String&) const ;

};
}
}
}
}


