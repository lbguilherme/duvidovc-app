#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class PendingIntent; } }
namespace android { namespace content { class Intent; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class PendingIntent_OnFinished : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit PendingIntent_OnFinished(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    PendingIntent_OnFinished(const ::android::app::PendingIntent_OnFinished& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    PendingIntent_OnFinished(::android::app::PendingIntent_OnFinished&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::PendingIntent_OnFinished& operator=(const ::android::app::PendingIntent_OnFinished& x) {obj = x.obj; return *this;}
    ::android::app::PendingIntent_OnFinished& operator=(::android::app::PendingIntent_OnFinished&& x) {obj = std::move(x.obj); return *this;}
    
    void onSendFinished(const ::android::app::PendingIntent&, const ::android::content::Intent&, int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const ;

};
}
}


