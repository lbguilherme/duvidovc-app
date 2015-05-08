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
namespace java { namespace lang { class Throwable; } }

namespace android {
namespace app {
class ApplicationErrorReport_CrashInfo : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit ApplicationErrorReport_CrashInfo(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    ApplicationErrorReport_CrashInfo(const ::android::app::ApplicationErrorReport_CrashInfo& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    ApplicationErrorReport_CrashInfo(::android::app::ApplicationErrorReport_CrashInfo&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::ApplicationErrorReport_CrashInfo& operator=(const ::android::app::ApplicationErrorReport_CrashInfo& x) {obj = x.obj; return *this;}
    ::android::app::ApplicationErrorReport_CrashInfo& operator=(::android::app::ApplicationErrorReport_CrashInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ApplicationErrorReport_CrashInfo();
    ApplicationErrorReport_CrashInfo(const ::java::lang::Throwable&);
    ApplicationErrorReport_CrashInfo(const ::android::os::Parcel&);
    void writeToParcel(const ::android::os::Parcel&, int32_t) const ;
    void dump(const ::android::util::Printer&, const ::java::lang::String&) const ;

};
}
}


