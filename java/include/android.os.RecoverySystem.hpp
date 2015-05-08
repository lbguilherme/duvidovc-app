#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace android { namespace content { class Context; } }
namespace android { namespace os { class RecoverySystem_ProgressListener; } }
namespace java { namespace io { class File; } }

namespace android {
namespace os {
class RecoverySystem : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecoverySystem(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecoverySystem(const ::android::os::RecoverySystem& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecoverySystem(::android::os::RecoverySystem&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::RecoverySystem& operator=(const ::android::os::RecoverySystem& x) {obj = x.obj; return *this;}
    ::android::os::RecoverySystem& operator=(::android::os::RecoverySystem&& x) {obj = std::move(x.obj); return *this;}
    
    RecoverySystem();
    static void verifyPackage(const ::java::io::File&, const ::android::os::RecoverySystem_ProgressListener&, const ::java::io::File&);
    static void installPackage(const ::android::content::Context&, const ::java::io::File&);
    static void rebootWipeUserData(const ::android::content::Context&);
    static void rebootWipeCache(const ::android::content::Context&);

};
}
}

#include "android.os.RecoverySystem_ProgressListener.hpp"

