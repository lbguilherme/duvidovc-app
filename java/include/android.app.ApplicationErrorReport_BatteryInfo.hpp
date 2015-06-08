#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class ApplicationErrorReport_BatteryInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ApplicationErrorReport_BatteryInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ApplicationErrorReport_BatteryInfo(const ::android::app::ApplicationErrorReport_BatteryInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ApplicationErrorReport_BatteryInfo(::android::app::ApplicationErrorReport_BatteryInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ApplicationErrorReport_BatteryInfo& operator=(const ::android::app::ApplicationErrorReport_BatteryInfo& x) {obj = x.obj; return *this;}
    ::android::app::ApplicationErrorReport_BatteryInfo& operator=(::android::app::ApplicationErrorReport_BatteryInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ApplicationErrorReport_BatteryInfo();
    ApplicationErrorReport_BatteryInfo(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const;

};
}
}


