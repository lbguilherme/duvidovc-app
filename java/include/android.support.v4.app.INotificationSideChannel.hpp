#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.IInterface.hpp"

namespace android { namespace app { class Notification; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace support {
namespace v4 {
namespace app {
class INotificationSideChannel : public virtual ::java::lang::Object,
                                 public virtual ::android::os::IInterface {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit INotificationSideChannel(jobject _obj) : ::java::lang::Object(_obj), ::android::os::IInterface(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    INotificationSideChannel(const ::android::support::v4::app::INotificationSideChannel& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj;}
    INotificationSideChannel(::android::support::v4::app::INotificationSideChannel&& x) : ::java::lang::Object((jobject)0), ::android::os::IInterface((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::support::v4::app::INotificationSideChannel& operator=(const ::android::support::v4::app::INotificationSideChannel& x) {obj = x.obj; return *this;}
    ::android::support::v4::app::INotificationSideChannel& operator=(::android::support::v4::app::INotificationSideChannel&& x) {obj = std::move(x.obj); return *this;}
    
    void notify(const ::java::lang::String&, int32_t, const ::java::lang::String&, const ::android::app::Notification&) const;
    void cancel(const ::java::lang::String&, int32_t, const ::java::lang::String&) const;
    void cancelAll(const ::java::lang::String&) const;

};
}
}
}
}

#include "android.support.v4.app.INotificationSideChannel_Stub.hpp"
#include "android.support.v4.app.INotificationSideChannel_Stub_Proxy.hpp"

