#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Intent; } }
namespace android { namespace content { class IntentSender; } }
namespace android { namespace os { class Bundle; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace content {
class IntentSender_OnFinished : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit IntentSender_OnFinished(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    IntentSender_OnFinished(const ::android::content::IntentSender_OnFinished& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    IntentSender_OnFinished(::android::content::IntentSender_OnFinished&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::content::IntentSender_OnFinished& operator=(const ::android::content::IntentSender_OnFinished& x) {obj = x.obj; return *this;}
    ::android::content::IntentSender_OnFinished& operator=(::android::content::IntentSender_OnFinished&& x) {obj = std::move(x.obj); return *this;}
    
    void onSendFinished(const ::android::content::IntentSender&, const ::android::content::Intent&, int32_t, const ::java::lang::String&, const ::android::os::Bundle&) const;

};
}
}


