#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace telephony { class SmsManager; } }
namespace java { namespace lang { class String; } }
namespace java { namespace util { class ArrayList; } }

namespace android {
namespace telephony {
class SmsManager : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SmsManager(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SmsManager(const ::android::telephony::SmsManager& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    SmsManager(::android::telephony::SmsManager&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::telephony::SmsManager& operator=(const ::android::telephony::SmsManager& x) {obj = x.obj; return *this;}
    ::android::telephony::SmsManager& operator=(::android::telephony::SmsManager&& x) {obj = std::move(x.obj); return *this;}
    
    void sendTextMessage(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::android::app::PendingIntent&, const ::android::app::PendingIntent&) const;
    ::java::util::ArrayList divideMessage(const ::java::lang::String&) const;
    void sendMultipartTextMessage(const ::java::lang::String&, const ::java::lang::String&, const ::java::util::ArrayList&, const ::java::util::ArrayList&, const ::java::util::ArrayList&) const;
    void sendDataMessage(const ::java::lang::String&, const ::java::lang::String&, int16_t, const std::vector< int8_t>&, const ::android::app::PendingIntent&, const ::android::app::PendingIntent&) const;
    static ::android::telephony::SmsManager getDefault();

};
}
}


