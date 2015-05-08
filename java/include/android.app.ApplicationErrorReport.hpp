#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace content { class Context; } }
namespace android { namespace os { class Parcel; } }
namespace android { namespace util { class Printer; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class ApplicationErrorReport : public virtual ::java::lang::Object,
                               public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ApplicationErrorReport(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ApplicationErrorReport(const ::android::app::ApplicationErrorReport& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    ApplicationErrorReport(::android::app::ApplicationErrorReport&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ApplicationErrorReport& operator=(const ::android::app::ApplicationErrorReport& x) {obj = x.obj; return *this;}
    ::android::app::ApplicationErrorReport& operator=(::android::app::ApplicationErrorReport&& x) {obj = std::move(x.obj); return *this;}
    
    ApplicationErrorReport();
    static ::android::content::ComponentName getErrorReportReceiver(const ::android::content::Context&, const ::java::lang::String&, int32_t);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void readFromParcel(const ::android::os::Parcel&) const ;
    int32_t describeContents() const ;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const ;

};
}
}

#include "android.app.ApplicationErrorReport_AnrInfo.hpp"
#include "android.app.ApplicationErrorReport_BatteryInfo.hpp"
#include "android.app.ApplicationErrorReport_CrashInfo.hpp"
#include "android.app.ApplicationErrorReport_RunningServiceInfo.hpp"

