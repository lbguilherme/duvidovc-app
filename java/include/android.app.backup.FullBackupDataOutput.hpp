#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace android {
namespace app {
namespace backup {
class FullBackupDataOutput : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit FullBackupDataOutput(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    FullBackupDataOutput(const ::android::app::backup::FullBackupDataOutput& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    FullBackupDataOutput(::android::app::backup::FullBackupDataOutput&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::backup::FullBackupDataOutput& operator=(const ::android::app::backup::FullBackupDataOutput& x) {obj = x.obj; return *this;}
    ::android::app::backup::FullBackupDataOutput& operator=(::android::app::backup::FullBackupDataOutput&& x) {obj = std::move(x.obj); return *this;}
    

};
}
}
}


