#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace app { class Activity; } }
namespace android { namespace app { class Instrumentation_ActivityResult; } }
namespace android { namespace content { class IntentFilter; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class Instrumentation_ActivityMonitor : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Instrumentation_ActivityMonitor(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Instrumentation_ActivityMonitor(const ::android::app::Instrumentation_ActivityMonitor& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Instrumentation_ActivityMonitor(::android::app::Instrumentation_ActivityMonitor&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::Instrumentation_ActivityMonitor& operator=(const ::android::app::Instrumentation_ActivityMonitor& x) {obj = x.obj; return *this;}
    ::android::app::Instrumentation_ActivityMonitor& operator=(::android::app::Instrumentation_ActivityMonitor&& x) {obj = std::move(x.obj); return *this;}
    
    Instrumentation_ActivityMonitor(const ::android::content::IntentFilter&, const ::android::app::Instrumentation_ActivityResult&, bool);
    Instrumentation_ActivityMonitor(const ::java::lang::String&, const ::android::app::Instrumentation_ActivityResult&, bool);
    ::android::content::IntentFilter getFilter() const ;
    ::android::app::Instrumentation_ActivityResult getResult() const ;
    bool isBlocking() const ;
    int32_t getHits() const ;
    ::android::app::Activity getLastActivity() const ;
    ::android::app::Activity waitForActivity() const ;
    ::android::app::Activity waitForActivityWithTimeout(int64_t) const ;

};
}
}


