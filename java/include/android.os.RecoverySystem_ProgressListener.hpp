#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace os {
class RecoverySystem_ProgressListener : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit RecoverySystem_ProgressListener(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    RecoverySystem_ProgressListener(const ::android::os::RecoverySystem_ProgressListener& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    RecoverySystem_ProgressListener(::android::os::RecoverySystem_ProgressListener&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::os::RecoverySystem_ProgressListener& operator=(const ::android::os::RecoverySystem_ProgressListener& x) {obj = x.obj; return *this;}
    ::android::os::RecoverySystem_ProgressListener& operator=(::android::os::RecoverySystem_ProgressListener&& x) {obj = std::move(x.obj); return *this;}
    
    void onProgress(int32_t) const;

};
}
}


