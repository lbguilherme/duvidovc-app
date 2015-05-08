#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace os { class StrictMode_ThreadPolicy; } }
namespace android { namespace os { class StrictMode_VmPolicy; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace os {
class StrictMode : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit StrictMode(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    StrictMode(const ::android::os::StrictMode& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    StrictMode(::android::os::StrictMode&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::StrictMode& operator=(const ::android::os::StrictMode& x) {obj = x.obj; return *this;}
    ::android::os::StrictMode& operator=(::android::os::StrictMode&& x) {obj = std::move(x.obj); return *this;}
    
    static void setThreadPolicy(const ::android::os::StrictMode_ThreadPolicy&);
    static ::android::os::StrictMode_ThreadPolicy getThreadPolicy();
    static ::android::os::StrictMode_ThreadPolicy allowThreadDiskWrites();
    static ::android::os::StrictMode_ThreadPolicy allowThreadDiskReads();
    static void setVmPolicy(const ::android::os::StrictMode_VmPolicy&);
    static ::android::os::StrictMode_VmPolicy getVmPolicy();
    static void enableDefaults();
    static void noteSlowCall(const ::java::lang::String&);

};
}
}

#include "android.os.StrictMode_ThreadPolicy.hpp"
#include "android.os.StrictMode_VmPolicy.hpp"
#include "android.os.StrictMode_ThreadPolicy_Builder.hpp"
#include "android.os.StrictMode_VmPolicy_Builder.hpp"

